<?php
/**
 * @file
 * myassist_notification.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function myassist_notification_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'messages';
  $page->task = 'page';
  $page->admin_title = 'Messages';
  $page->admin_description = '';
  $page->path = 'user/%uid/messages';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'user-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'uid' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page-messages__';
  $handler->task = 'page';
  $handler->subtask = 'messages';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP responskode',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '404',
    'destination' => '',
    'name' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['messages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_messages';
  $page->task = 'page';
  $page->admin_title = 'User messages';
  $page->admin_description = '';
  $page->path = 'user/messages';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'messages',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => 'Messages',
      'name' => 'user-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_messages_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_messages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'messages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
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
  $display->uuid = '4331819e-b207-46ff-b169-b5fc9fe50b88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66a746d0-022d-493b-8652-6bbe7ba0a731';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_messages-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66a746d0-022d-493b-8652-6bbe7ba0a731';
    $display->content['new-66a746d0-022d-493b-8652-6bbe7ba0a731'] = $pane;
    $display->panels['middle'][0] = 'new-66a746d0-022d-493b-8652-6bbe7ba0a731';
    $pane = new stdClass();
    $pane->pid = 'new-2c921fba-066a-4b6a-8633-f6e4afe105e0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_messages-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2c921fba-066a-4b6a-8633-f6e4afe105e0';
    $display->content['new-2c921fba-066a-4b6a-8633-f6e4afe105e0'] = $pane;
    $display->panels['middle'][1] = 'new-2c921fba-066a-4b6a-8633-f6e4afe105e0';
    $pane = new stdClass();
    $pane->pid = 'new-2c921fba-066a-4b6a-8633-f6e4afe105e1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_messages-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c921fba-066a-4b6a-8633-f6e4afe105e1';
    $display->content['new-2c921fba-066a-4b6a-8633-f6e4afe105e1'] = $pane;
    $display->panels['middle'][2] = 'new-2c921fba-066a-4b6a-8633-f6e4afe105e1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2c921fba-066a-4b6a-8633-f6e4afe105e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_messages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_notifications';
  $page->task = 'page';
  $page->admin_title = 'User notifications';
  $page->admin_description = '';
  $page->path = 'user/%uid/notifications';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Notifications',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => 'Messages',
      'name' => 'user-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'uid' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_notifications_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_notifications';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Notifications',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
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
  $display->title = 'Beskeder';
  $display->uuid = '4331819e-b207-46ff-b169-b5fc9fe50b88';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_notifications'] = $page;

  return $pages;

}
