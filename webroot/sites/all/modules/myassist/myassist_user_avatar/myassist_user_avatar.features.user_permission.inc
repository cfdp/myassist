<?php
/**
 * @file
 * myassist_user_avatar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_user_avatar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access avatars'.
  $permissions['access avatars'] = array(
    'name' => 'access avatars',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'avatar_selection',
  );

  // Exported permission: 'administer avatar selection'.
  $permissions['administer avatar selection'] = array(
    'name' => 'administer avatar selection',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'avatar_selection',
  );

  // Exported permission: 'upload avatar in profile'.
  $permissions['upload avatar in profile'] = array(
    'name' => 'upload avatar in profile',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'avatar_selection',
  );

  return $permissions;
}
