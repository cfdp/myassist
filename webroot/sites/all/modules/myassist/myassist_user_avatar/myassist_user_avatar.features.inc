<?php
/**
 * @file
 * myassist_user_avatar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myassist_user_avatar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
