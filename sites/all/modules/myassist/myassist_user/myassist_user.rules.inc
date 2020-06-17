<?php
/**
* Implements hook_rules_action_info().
*/
function myassist_user_rules_action_info() {
return array(
'mail_to_users_of_role_with_field' => array(
  'label' => t('Send mail to all users of a role if field is set'),
  'group' => t('System'),
  'parameter' => array(
  'roles' => array(
  'type' => 'list<integer>',
    'label' => t('Roles'),
    'options list' => 'entity_metadata_user_roles',
    'description' => t('Select the roles whose users should receive the mail.'),
    ),
    'subject' => array(
    'type' => 'text',
    'label' => t('Subject'),
    'description' => t("The mail's subject."),
    ),
    'message' => array(
    'type' => 'text',
    'label' => t('Message'),
    'description' => t("The mail's message body."),
    ),
    'field' => array(
    'type' => 'text',
    'label' => t('Field'),
    'description' => t("The user account field to check"),
    ),
    'value' => array(
    'type' => 'text',
    'label' => t('Value'),
    'description' => t("The value needed in the field"),
    'optional' => TRUE,
    ),
    'from' => array(
    'type' => 'text',
    'label' => t('From'),
    'description' => t("The mail's from address. Leave it empty to use the site-wide configured address."),
    'optional' => TRUE,
    )
    ),
    'base' => 'myassist_user_rules_action_mail_to_users_of_role_and_field',
    'access callback' => 'rules_system_integration_access',
    )
  );
}

function myassist_user_rules_action_mail_to_users_of_role_and_field($roles, $subject, $message, $field, $value = 1, $from = NULL, $settings, RulesState $state, RulesPlugin $element) {
  $from = !empty($from) ? str_replace(array("\r", "\n"), '', $from) : NULL;

  $field = preg_replace('/[^a-zA-Z0-9_\-]/', '', $field);
  $fieldJoin = "INNER JOIN {field_data_$field} f ON u.uid = f.entity_id";

  if (is_string($value) && preg_match('/^\d+$/', $value)) {
    $value = (int) $value;
  }
  if (is_string($value)) {
    $value = "'" . preg_replace('[^a-zA-Z0-9_\-]', '', $value) . "'";
  }
  $fieldWhere = "f.${field}_value = $value";

  // All authenticated users, which is everybody.
  if (in_array(DRUPAL_AUTHENTICATED_RID, $roles)) {
    $query = 'SELECT mail, uid FROM {users} ' . $fieldJoin . ' WHERE uid > 0 AND ' . $fieldWhere;
  }
  else {
    // Avoid sending emails to members of two or more target role groups.
    $query = 'SELECT DISTINCT u.mail, u.uid FROM {users} u INNER JOIN {users_roles} r ON u.uid = r.uid ' . $fieldJoin . ' WHERE r.rid IN (' . implode(',', $roles) . ') AND ' . $fieldWhere;
  }

  try {
    $result = db_query($query);
  } catch (Exception $e) {
    return;
  }

  // Now, actually send the mails.
  $params = array(
    'subject' => $subject,
    'message' => $message,
  );
  global $base_url;
  $params['footer'] = '<p>Frameld notifikationer som denne: ' . $base_url . '/user/insertuidhere/edit</p>';
  $params['message'] .= $params['footer'];
  // Set a unique key for this mail.
  $name = isset($element->root()->name) ? $element->root()->name : 'unnamed';
  $key = 'rules_action_mail_to_users_of_role_' . $name . '_' . $element->elementId();  $languages = language_list();
  $message = array('result' => TRUE);
  foreach ($result as $row) {
    $uid = $row->uid;
    $params['message'] = preg_replace('~(/user/)(insertuidhere)?(\d+)?(/edit)~i', '${1}'.$uid.'${4}', $params['message']);
    $message = drupal_mail('rules', $key, $row->mail, language_default(), $params, $from);
    // If $message['result'] is FALSE, then it's likely that email sending is
    // failing at the moment, and we should just abort sending any more. If
    // however, $mesage['result'] is NULL, then it's likely that a module has
    // aborted sending this particular email to this particular user, and we
    // should just keep on sending emails to the other users.
    // For more information on the result value, see drupal_mail().
    if ($message['result'] === FALSE) {
      break;
    }
  }
  if ($message['result'] !== FALSE) {
    $role_names = array_intersect_key(user_roles(TRUE), array_flip($roles));
    watchdog('rules', 'Successfully sent email to the role(s) %roles.', array('%roles' => implode(', ', $role_names)));
  }
}