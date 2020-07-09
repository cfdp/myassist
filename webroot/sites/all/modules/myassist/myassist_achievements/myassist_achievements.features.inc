<?php
/**
 * @file
 * myassist_achievements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myassist_achievements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
