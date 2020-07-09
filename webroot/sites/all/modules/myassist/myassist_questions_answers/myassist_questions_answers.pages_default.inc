<?php
/**
 * @file
 * myassist_questions_answers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function myassist_questions_answers_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_oprettet_udenfor_aabningstid';
  $page->task = 'page';
  $page->admin_title = 'Node oprettet udenfor åbningstid';
  $page->admin_description = '';
  $page->path = 'node_created';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_oprettet_udenfor_aabningstid__panel_context_5ba3e2d0-ab25-4b24-a9d7-b00998aa39d9';
  $handler->task = 'page';
  $handler->subtask = 'node_oprettet_udenfor_aabningstid';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a0ae8322-7bae-4a8e-ac58-10d4031f6c4a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3a5830d-9b3d-440f-9d0c-17353631854b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Node oprettet udenfor åbningstid',
      'title' => 'Tak',
      'body' => '<p>Tak for dit input. Vi læser det igennem og offentliggør det i åbningstiden.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3a5830d-9b3d-440f-9d0c-17353631854b';
    $display->content['new-b3a5830d-9b3d-440f-9d0c-17353631854b'] = $pane;
    $display->panels['middle'][0] = 'new-b3a5830d-9b3d-440f-9d0c-17353631854b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3a5830d-9b3d-440f-9d0c-17353631854b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_oprettet_udenfor_aabningstid'] = $page;

  return $pages;

}
