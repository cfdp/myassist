<?php
/**
 * @file
 * myassist_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'edit any ungeprofil profile'.
  $permissions['edit any ungeprofil profile'] = array(
    'name' => 'edit any ungeprofil profile',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any voksenprofil profile'.
  $permissions['edit any voksenprofil profile'] = array(
    'name' => 'edit any voksenprofil profile',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own ungeprofil profile'.
  $permissions['edit own ungeprofil profile'] = array(
    'name' => 'edit own ungeprofil profile',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own voksenprofil profile'.
  $permissions['edit own voksenprofil profile'] = array(
    'name' => 'edit own voksenprofil profile',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'view any ungeprofil profile'.
  $permissions['view any ungeprofil profile'] = array(
    'name' => 'view any ungeprofil profile',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any voksenprofil profile'.
  $permissions['view any voksenprofil profile'] = array(
    'name' => 'view any voksenprofil profile',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own ungeprofil profile'.
  $permissions['view own ungeprofil profile'] = array(
    'name' => 'view own ungeprofil profile',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own voksenprofil profile'.
  $permissions['view own voksenprofil profile'] = array(
    'name' => 'view own voksenprofil profile',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
