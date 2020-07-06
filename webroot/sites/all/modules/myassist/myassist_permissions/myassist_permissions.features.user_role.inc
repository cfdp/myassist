<?php
/**
 * @file
 * myassist_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function myassist_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: chatrådgiver.
  $roles['chatrådgiver'] = array(
    'name' => 'chatrådgiver',
    'weight' => 7,
  );

  // Exported role: debatrådgiver.
  $roles['debatrådgiver'] = array(
    'name' => 'debatrådgiver',
    'weight' => 6,
  );

  // Exported role: redaktør.
  $roles['redaktør'] = array(
    'name' => 'redaktør',
    'weight' => 5,
  );

  // Exported role: ung bruger.
  $roles['ung bruger'] = array(
    'name' => 'ung bruger',
    'weight' => 3,
  );

  return $roles;
}
