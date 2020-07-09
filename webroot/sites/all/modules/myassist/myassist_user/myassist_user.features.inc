<?php
/**
 * @file
 * myassist_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myassist_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function myassist_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myassist_user_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function myassist_user_default_profile2_type() {
  $items = array();
  $items['ungeprofil'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ungeprofil",
    "label" : "Youth profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['voksenprofil'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "voksenprofil",
    "label" : "Adult profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
