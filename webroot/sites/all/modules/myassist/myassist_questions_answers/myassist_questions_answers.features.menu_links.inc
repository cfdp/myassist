<?php
/**
 * @file
 * myassist_questions_answers.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function myassist_questions_answers_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ask-a-question:node/add/answers-question
  $menu_links['main-menu_ask-a-question:node/add/answers-question'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/answers-question',
    'router_path' => 'node/add/answers-question',
    'link_title' => 'Ask a Question',
    'options' => array(
      'attributes' => array(
        'title' => 'Ask a question',
      ),
      'identifier' => 'main-menu_ask-a-question:node/add/answers-question',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_questions:questions
  $menu_links['main-menu_questions:questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions',
    'router_path' => 'questions',
    'link_title' => 'Questions',
    'options' => array(
      'identifier' => 'main-menu_questions:questions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: main-menu_stil-et-sprgsml:node/add/answers-question
  $menu_links['main-menu_stil-et-sprgsml:node/add/answers-question'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/answers-question',
    'router_path' => 'node/add/answers-question',
    'link_title' => 'Stil et spørgsmål',
    'options' => array(
      'attributes' => array(
        'title' => 'Stil et spørgsmål',
      ),
      'identifier' => 'main-menu_stil-et-sprgsml:node/add/answers-question',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'da',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ask a Question');
  t('Questions');
  t('Stil et spørgsmål');


  return $menu_links;
}
