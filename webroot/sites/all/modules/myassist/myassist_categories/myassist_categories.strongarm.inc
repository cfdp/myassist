<?php
/**
 * @file
 * myassist_categories.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myassist_categories_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'user_activity_list_entry' => array(
        'label' => 'User activity list entry',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
