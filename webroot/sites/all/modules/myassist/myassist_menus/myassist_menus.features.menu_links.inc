<?php
/**
 * @file
 * myassist_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function myassist_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_sprgsml:frontpage
  $menu_links['main-menu_sprgsml:frontpage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'frontpage',
    'router_path' => 'frontpage',
    'link_title' => 'Spørgsmål',
    'options' => array(
      'attributes' => array(
        'title' => 'Liste over spørgsmål',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_sprgsml:frontpage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_achievements:user/achievements
  $menu_links['user-menu_achievements:user/achievements'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/achievements',
    'router_path' => 'user/achievements',
    'link_title' => 'Achievements',
    'options' => array(
      'attributes' => array(
        'title' => 'View my achievements',
      ),
      'identifier' => 'user-menu_achievements:user/achievements',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_beskeder:user/messages
  $menu_links['user-menu_beskeder:user/messages'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/messages',
    'router_path' => 'user/messages',
    'link_title' => 'Beskeder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_beskeder:user/messages',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'da',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_edit-profile:user/edit
  $menu_links['user-menu_edit-profile:user/edit'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/edit',
    'router_path' => 'user/edit',
    'link_title' => 'Edit Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit own profile',
      ),
      'identifier' => 'user-menu_edit-profile:user/edit',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_my-points:myuserpoints
  $menu_links['user-menu_my-points:myuserpoints'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'myuserpoints',
    'router_path' => 'myuserpoints',
    'link_title' => 'My !points',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-points:myuserpoints',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_points:user/points
  $menu_links['user-menu_points:user/points'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/points',
    'router_path' => 'user/points',
    'link_title' => 'Points',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_points:user/points',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_redigr-profil:user/edit
  $menu_links['user-menu_redigr-profil:user/edit'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/edit',
    'router_path' => 'user/edit',
    'link_title' => 'Redigér profil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_redigr-profil:user/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'da',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_view-profile:user
  $menu_links['user-menu_view-profile:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'View profile',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_view-profile:user',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_vis-profil:user/view
  $menu_links['user-menu_vis-profil:user/view'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/view',
    'router_path' => 'user/view',
    'link_title' => 'Vis profil',
    'options' => array(
      'attributes' => array(
        'title' => 'View own profile',
      ),
      'identifier' => 'user-menu_vis-profil:user/view',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Achievements');
  t('Beskeder');
  t('Edit Profile');
  t('Log out');
  t('My !points');
  t('Points');
  t('Redigér profil');
  t('Spørgsmål');
  t('User account');
  t('View profile');
  t('Vis profil');


  return $menu_links;
}
