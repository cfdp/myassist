<?php
/**
 * @file
 * myassist_achievements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_achievements_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access achievements'.
  $permissions['access achievements'] = array(
    'name' => 'access achievements',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'achievements',
  );

  // Exported permission: 'administer achievements'.
  $permissions['administer achievements'] = array(
    'name' => 'administer achievements',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'achievements',
  );

  // Exported permission: 'earn achievements'.
  $permissions['earn achievements'] = array(
    'name' => 'earn achievements',
    'roles' => array(
      'Ung bruger' => 'Ung bruger',
    ),
    'module' => 'achievements',
  );

  return $permissions;
}
