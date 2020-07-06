<?php

/**
 * Implements hook_rules_action_info().
 */
function myassist_notification_rules_action_info() {
    $items = array();
    $items['myassist_notification_rules_process'] = array(
        'label' => t('Send notification to user'),
        'group' => t('Message notify'),
        'parameter' => array(
            'recipient' => array(
                'type' => 'user',
                'label' => t('Recipient'),
                'description' => t('Supply the user.'),
            ),
            'messageType' => array(
                'type' => 'text',
                'label' => t('Message type'),
                'description' => t('Supply the message type (an entry in /admin/structure/messages).'),
            ),
            'node' => array(
                'type' => 'node',
                'label' => t('Message'),
                'description' => t('Supply the created message object'),
            ),
        ),
        'base' => 'myassist_notification_rules_process',
    );
    return $items;
}

function myassist_notification_rules_process($recipient, $messageType, $node) {
    global $user;

    if ($recipient != null && $node != null) {
        $message = message_create($messageType, array('uid' => $recipient->uid));
        $wrapper = entity_metadata_wrapper('message', $message);
        try {
            $wrapper->field_node->set($node);
        } catch (Exception $e) {
            //throw new Exception("Failed setting field_node on message; message pointer may be incorrect");
        }
        try {
            $wrapper->field_sender->set($user);
        } catch (Exception $e) {
            //throw new Exception("Failed setting field_sender on message; message pointer may be incorrect");
        }
        $wrapper->save();

        message_notify_send_message($message);
        /*if ($recipient->mail) {
            $language = user_preferred_language($user);
            $subject = t("Myassist notification");
            $body = message_property_get_text($message, array('language' => $language));
            var_dump($message);
            var_dump($body);
            drupal_mail("myassist_notification", 'myassist_notification', $recipient->mail, $language, array(
              'subject' => $subject,
              'body' => $body
            ));
        }*/
    }
}

function myassist_notification_mail($key, &$message, $params) {
    switch($key) {
        case 'myassist_notification':
            $message['headers']['Content-Type'] = 'text/html; charset=UTF-8; format=flowed';
            $message['subject'] = $params['subject'];
            $message['body'][] = $params['body'];
            break;
    }
}

?>
