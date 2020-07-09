<?php
/**
 * @file
 * myassist_questions_answers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function myassist_questions_answers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'debatr_dgivere';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Debatrådgivere';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Debatrådgivere';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er desværre ingen coaches til rådighed i øjeblikket. Men du kan sagtens stille dit spørgsmål uden at vælge en bestemt coach.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Bruger: Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'voksenprofil' => 'voksenprofil',
  );
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]
<br>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Felt: Bruger: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '<a target="_blank" href="[view_user]">[view_user]</a>';
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Felt: Profil: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  /* Sort criterion: Bruger: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: Profil: Kan pinges ved nyt spørgsmål i forum? (field_show_in_forum) */
  $handler->display->display_options['filters']['field_show_in_forum_value']['id'] = 'field_show_in_forum_value';
  $handler->display->display_options['filters']['field_show_in_forum_value']['table'] = 'field_data_field_show_in_forum';
  $handler->display->display_options['filters']['field_show_in_forum_value']['field'] = 'field_show_in_forum_value';
  $handler->display->display_options['filters']['field_show_in_forum_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_show_in_forum_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_show_in_forum_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_show_in_forum_value']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'debatraadgivere';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assist-rådgivere';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]
<br>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/users/[name] ';
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = '/users/[name]/';
  $handler->display->display_options['fields']['picture']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Felt: Bruger: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '<a target="_blank" href="[view_user]">[view_user]</a>';
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $translatables['debatr_dgivere'] = array(
    t('Master'),
    t('Debatrådgivere'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Der er desværre ingen coaches til rådighed i øjeblikket. Men du kan sagtens stille dit spørgsmål uden at vælge en bestemt coach.'),
    t('Profil'),
    t('[name]
<br>'),
    t('<a target="_blank" href="[view_user]">[view_user]</a>'),
    t('E-mail'),
    t('URL'),
    t('Page'),
    t('Entity Reference'),
    t('Assist-rådgivere'),
  );
  $export['debatr_dgivere'] = $view;

  return $export;
}
