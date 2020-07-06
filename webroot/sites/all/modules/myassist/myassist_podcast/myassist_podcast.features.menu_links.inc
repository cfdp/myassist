<?php

/**
 * @file
 * myassist_podcast.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function myassist_podcast_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_podcast:node/1871.
  $menu_links['main-menu_podcast:node/1871'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1871',
    'router_path' => 'node/%',
    'link_title' => 'Podcast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_podcast:node/1871',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Podcast');

  return $menu_links;
}
