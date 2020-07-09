<?php
/**
 * @file
 * myassist_danish.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myassist_danish_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
