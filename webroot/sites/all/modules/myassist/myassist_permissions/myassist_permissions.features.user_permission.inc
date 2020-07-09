<?php
/**
 * @file
 * myassist_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add userpoints'.
  $permissions['add userpoints'] = array(
    'name' => 'add userpoints',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer userpoints'.
  $permissions['administer userpoints'] = array(
    'name' => 'administer userpoints',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'create answers_answer content'.
  $permissions['create answers_answer content'] = array(
    'name' => 'create answers_answer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any answers_answer content'.
  $permissions['delete any answers_answer content'] = array(
    'name' => 'delete any answers_answer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any answers_question content'.
  $permissions['delete any answers_question content'] = array(
    'name' => 'delete any answers_question content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own answers_answer content'.
  $permissions['delete own answers_answer content'] = array(
    'name' => 'delete own answers_answer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own answers_question content'.
  $permissions['delete own answers_question content'] = array(
    'name' => 'delete own answers_question content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'earn points'.
  $permissions['earn points'] = array(
    'name' => 'earn points',
    'roles' => array(
      'Ung bruger' => 'Ung bruger',
    ),
    'module' => 'myassist_achievements',
  );

  // Exported permission: 'edit any answers_answer content'.
  $permissions['edit any answers_answer content'] = array(
    'name' => 'edit any answers_answer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any answers_question content'.
  $permissions['edit any answers_question content'] = array(
    'name' => 'edit any answers_question content',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own answers_answer content'.
  $permissions['edit own answers_answer content'] = array(
    'name' => 'edit own answers_answer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own answers_question content'.
  $permissions['edit own answers_question content'] = array(
    'name' => 'edit own answers_question content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit userpoints'.
  $permissions['edit userpoints'] = array(
    'name' => 'edit userpoints',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'moderate userpoints'.
  $permissions['moderate userpoints'] = array(
    'name' => 'moderate userpoints',
    'roles' => array(
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-koordinator' => 'Chat-koordinator',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Forælder-rådgiver' => 'Forælder-rådgiver',
      'Moderator' => 'Moderator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Assist-rådgiver' => 'Assist-rådgiver',
      'Chat-koordinator' => 'Chat-koordinator',
      'Chat-rådgiver' => 'Chat-rådgiver',
      'Forælder-rådgiver' => 'Forælder-rådgiver',
      'Moderator' => 'Moderator',
      'Superadmin' => 'Superadmin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'Ung bruger' => 'Ung bruger',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      'Superadmin' => 'Superadmin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
