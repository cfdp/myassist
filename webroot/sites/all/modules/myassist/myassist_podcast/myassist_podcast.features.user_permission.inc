<?php

/**
 * @file
 * myassist_podcast.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myassist_podcast_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create podcast content'.
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any podcast content'.
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own podcast content'.
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any podcast content'.
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own podcast content'.
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'podcast: comment on any podcast content'.
  $permissions['podcast: comment on any podcast content'] = array(
    'name' => 'podcast: comment on any podcast content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_perm',
  );

  // Exported permission: 'podcast: comment without approval on any podcast content'.
  $permissions['podcast: comment without approval on any podcast content'] = array(
    'name' => 'podcast: comment without approval on any podcast content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_perm',
  );

  // Exported permission: 'podcast: comment without approval on own podcast content'.
  $permissions['podcast: comment without approval on own podcast content'] = array(
    'name' => 'podcast: comment without approval on own podcast content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_perm',
  );

  // Exported permission: 'podcast: edit own comments on podcast content'.
  $permissions['podcast: edit own comments on podcast content'] = array(
    'name' => 'podcast: edit own comments on podcast content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_perm',
  );

  return $permissions;
}
