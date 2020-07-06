<?php
/**
 * @file
 * myassist_questions_answers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_questions_answers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'Ung bruger' => 'Ung bruger',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
