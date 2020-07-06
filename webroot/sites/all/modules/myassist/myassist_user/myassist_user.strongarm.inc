<?php
/**
 * @file
 * myassist_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myassist_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = 0;
  $export['comment_anonymous_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article';
  $strongarm->value = '2';
  $export['comment_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article';
  $strongarm->value = 1;
  $export['comment_default_mode_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 0;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article';
  $strongarm->value = 1;
  $export['comment_form_location_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 0;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '0';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article';
  $strongarm->value = '1';
  $export['comment_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article';
  $strongarm->value = 1;
  $export['comment_subject_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 0;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__answers_notifications_new_answer';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__answers_notifications_new_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'answers_full_node' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_activity_list_entry' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'answers_full_node' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'user_activity_list_entry' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'answers_full_node' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_activity_list_entry' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'answers_full_node' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__ungeprofil';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'page' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__ungeprofil'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__voksenprofil';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'page' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__voksenprofil'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'profile_main' => array(
          'weight' => '0',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '4',
        ),
        'masquerade' => array(
          'weight' => '10',
        ),
        'ckeditor' => array(
          'weight' => '9',
        ),
        'googleanalytics' => array(
          'weight' => '3',
        ),
        'profile_ungeprofil' => array(
          'weight' => '2',
        ),
        'mimemail' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'masquerade' => array(
          'default' => array(
            'weight' => '50',
            'visible' => TRUE,
          ),
        ),
        'profile_ungeprofil' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'profile_voksenprofil' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'userpoints' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'mimemail' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_language_list';
  $strongarm->value = '1';
  $export['i18n_language_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_none';
  $strongarm->value = '1';
  $export['i18n_node_default_language_none'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_answers_answer';
  $strongarm->value = '1';
  $export['i18n_node_extended_answers_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_answers_question';
  $strongarm->value = '1';
  $export['i18n_node_extended_answers_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_answers_answer';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
    2 => 'lock',
  );
  $export['i18n_node_options_answers_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_answers_question';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
    2 => 'lock',
  );
  $export['i18n_node_options_answers_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'filtered_html' => 'filtered_html',
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_download_store';
  $strongarm->value = 'sites/all/translations';
  $export['l10n_update_download_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1456385681;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'achievements' => array(
      'da' => (object) array(
        'name' => 'achievements',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'achievements',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1428501998,
        'last_checked' => 1435668422,
        'files' => array(
          'remote' => (object) array(
            'project' => 'achievements',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'achievements-7.x-1.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/achievements/achievements-7.x-1.5.da.po',
            'timestamp' => 1335890622,
          ),
          'local' => (object) array(
            'project' => 'achievements',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'achievements-7.x-1.5.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://achievements-7.x-1.5.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1435668422,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'achievements_rules' => array(
      'da' => (object) array(
        'name' => 'achievements_rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'achievements_rules',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'achievements_rules',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta1',
            'type' => 'remote',
            'filename' => 'achievements_rules-7.x-1.0-beta1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/achievements_rules/achievements_rules-7.x-1.0-beta1.da.po',
          ),
          'local' => (object) array(
            'project' => 'achievements_rules',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta1',
            'type' => 'local',
            'filename' => 'achievements_rules-7.x-1.0-beta1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://achievements_rules-7.x-1.0-beta1.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'achievements_views' => array(
      'da' => (object) array(
        'name' => 'achievements_views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'achievements_views',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1442322842,
        'last_checked' => 1442322842,
        'files' => array(
          'remote' => (object) array(
            'project' => 'achievements_views',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta2',
            'type' => 'remote',
            'filename' => 'achievements_views-7.x-1.0-beta2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/achievements_views/achievements_views-7.x-1.0-beta2.da.po',
            'timestamp' => 1363035443,
          ),
          'local' => (object) array(
            'project' => 'achievements_views',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta2',
            'type' => 'local',
            'filename' => 'achievements_views-7.x-1.0-beta2.da.po',
            'uri' => 'translations://achievements_views-7.x-1.0-beta2.da.po',
            'timestamp' => 1442322842,
            'directory' => 'translations://',
            'last_checked' => 1442322842,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'admin_views' => array(
      'da' => (object) array(
        'name' => 'admin_views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'admin_views',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1456385680,
        'last_checked' => 1456385680,
        'files' => array(
          'remote' => (object) array(
            'project' => 'admin_views',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'admin_views-7.x-1.5.da.po',
            'uri' => 'https://ftp.drupal.org/files/translations/7.x/admin_views/admin_views-7.x-1.5.da.po',
            'timestamp' => 1436423775,
          ),
          'local' => (object) array(
            'project' => 'admin_views',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'admin_views-7.x-1.5.da.po',
            'uri' => 'translations://admin_views-7.x-1.5.da.po',
            'timestamp' => 1456385680,
            'directory' => 'translations://',
            'last_checked' => 1456385680,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'answers' => array(
      'da' => (object) array(
        'name' => 'answers',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.0-rc2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'answers',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334634,
        'files' => array(
          'remote' => (object) array(
            'project' => 'answers',
            'langcode' => 'da',
            'version' => '7.x-4.0-rc2',
            'type' => 'remote',
            'filename' => 'answers-7.x-4.0-rc2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/answers/answers-7.x-4.0-rc2.da.po',
            'timestamp' => 1426928618,
          ),
          'local' => (object) array(
            'project' => 'answers',
            'langcode' => 'da',
            'version' => '7.x-4.0-rc2',
            'type' => 'local',
            'filename' => 'answers-7.x-4.0-rc2.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://answers-7.x-4.0-rc2.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334634,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'auto_entitylabel' => array(
      'da' => (object) array(
        'name' => 'auto_entitylabel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '0',
        'project' => 'auto_entitylabel',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'auto_entitylabel-7.x-1.3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/auto_entitylabel/auto_entitylabel-7.x-1.3.da.po',
          ),
          'local' => (object) array(
            'project' => 'auto_entitylabel',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'auto_entitylabel-7.x-1.3.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://auto_entitylabel-7.x-1.3.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'autocomplete_deluxe' => array(
      'da' => (object) array(
        'name' => 'autocomplete_deluxe',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'autocomplete_deluxe',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'autocomplete_deluxe',
            'langcode' => 'da',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'autocomplete_deluxe-7.x-2.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/autocomplete_deluxe/autocomplete_deluxe-7.x-2.1.da.po',
          ),
          'local' => (object) array(
            'project' => 'autocomplete_deluxe',
            'langcode' => 'da',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'autocomplete_deluxe-7.x-2.1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://autocomplete_deluxe-7.x-2.1.da.po',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'avatar_selection' => array(
      'da' => (object) array(
        'name' => 'avatar_selection',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'avatar_selection',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334634,
        'files' => array(
          'remote' => (object) array(
            'project' => 'avatar_selection',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'avatar_selection-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/avatar_selection/avatar_selection-7.x-1.1.da.po',
            'timestamp' => 1412597187,
          ),
          'local' => (object) array(
            'project' => 'avatar_selection',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'avatar_selection-7.x-1.1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://avatar_selection-7.x-1.1.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334634,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ckeditor' => array(
      'da' => (object) array(
        'name' => 'ckeditor',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.16',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ckeditor',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435668423,
        'last_checked' => 1435668422,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ckeditor',
            'langcode' => 'da',
            'version' => '7.x-1.16',
            'type' => 'remote',
            'filename' => 'ckeditor-7.x-1.16.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ckeditor/ckeditor-7.x-1.16.da.po',
            'timestamp' => 1424510876,
          ),
          'local' => (object) array(
            'project' => 'ckeditor',
            'langcode' => 'da',
            'version' => '7.x-1.16',
            'type' => 'local',
            'filename' => 'ckeditor-7.x-1.16.da.po',
            'uri' => 'translations://ckeditor-7.x-1.16.da.po',
            'timestamp' => 1435668423,
            'directory' => 'translations://',
            'last_checked' => 1435668422,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'closeblock' => array(
      'da' => (object) array(
        'name' => 'closeblock',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'closeblock',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669975,
        'last_checked' => 1447669975,
        'files' => array(
          'remote' => (object) array(
            'project' => 'closeblock',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'closeblock-7.x-1.6.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/closeblock/closeblock-7.x-1.6.da.po',
            'timestamp' => 1407329330,
          ),
          'local' => (object) array(
            'project' => 'closeblock',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'closeblock-7.x-1.6.da.po',
            'uri' => 'translations://closeblock-7.x-1.6.da.po',
            'timestamp' => 1447669975,
            'directory' => 'translations://',
            'last_checked' => 1447669975,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'ctools' => array(
      'da' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669976,
        'last_checked' => 1447669978,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'da',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.da.po',
            'timestamp' => 1445169568,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'da',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.da.po',
            'uri' => 'translations://ctools-7.x-1.7.da_0.po',
            'timestamp' => 1447669976,
            'directory' => 'translations://',
            'last_checked' => 1447669978,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'date' => array(
      'da' => (object) array(
        'name' => 'date',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'date',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1434963719,
        'last_checked' => 1434963720,
        'files' => array(
          'remote' => (object) array(
            'project' => 'date',
            'langcode' => 'da',
            'version' => '7.x-2.8',
            'type' => 'remote',
            'filename' => 'date-7.x-2.8.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/date/date-7.x-2.8.da.po',
            'timestamp' => 1412687466,
          ),
          'local' => (object) array(
            'project' => 'date',
            'langcode' => 'da',
            'version' => '7.x-2.8',
            'type' => 'local',
            'filename' => 'date-7.x-2.8.da.po',
            'uri' => 'translations://date-7.x-2.8.da.po',
            'timestamp' => 1434963719,
            'directory' => 'translations://',
            'last_checked' => 1434963720,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'devel' => array(
      'da' => (object) array(
        'name' => 'devel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'devel',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334651,
        'files' => array(
          'remote' => (object) array(
            'project' => 'devel',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'devel-7.x-1.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/devel/devel-7.x-1.5.da.po',
            'timestamp' => 1412666038,
          ),
          'local' => (object) array(
            'project' => 'devel',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'devel-7.x-1.5.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://devel-7.x-1.5.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334651,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'diff' => array(
      'da' => (object) array(
        'name' => 'diff',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'diff',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1431416163,
        'last_checked' => 1435668422,
        'files' => array(
          'remote' => (object) array(
            'project' => 'diff',
            'langcode' => 'da',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'diff-7.x-3.2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/diff/diff-7.x-3.2.da.po',
            'timestamp' => 1412604005,
          ),
          'local' => (object) array(
            'project' => 'diff',
            'langcode' => 'da',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'diff-7.x-3.2.da.po',
            'uri' => 'translations://diff-7.x-3.2.da.po',
            'timestamp' => 1431416163,
            'directory' => 'translations://',
            'last_checked' => 1435668422,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'drupal' => array(
      'da' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.35',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669979,
        'last_checked' => 1447669984,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'da',
            'version' => '7.35',
            'type' => 'remote',
            'filename' => 'drupal-7.35.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.35.da.po',
            'timestamp' => 1445279053,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'da',
            'version' => '7.35',
            'type' => 'local',
            'filename' => 'drupal-7.35.da.po',
            'uri' => 'translations://drupal-7.35.da_0.po',
            'timestamp' => 1447669979,
            'directory' => 'translations://',
            'last_checked' => 1447669984,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity' => array(
      'da' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334695,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.da.po',
            'timestamp' => 1425100423,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://entity-7.x-1.6.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334695,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity_view_mode' => array(
      'da' => (object) array(
        'name' => 'entity_view_mode',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity_view_mode',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity_view_mode',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc1',
            'type' => 'remote',
            'filename' => 'entity_view_mode-7.x-1.0-rc1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity_view_mode/entity_view_mode-7.x-1.0-rc1.da.po',
          ),
          'local' => (object) array(
            'project' => 'entity_view_mode',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc1',
            'type' => 'local',
            'filename' => 'entity_view_mode-7.x-1.0-rc1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://entity_view_mode-7.x-1.0-rc1.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'entityreference' => array(
      'da' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334695,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.da.po',
            'timestamp' => 1412343728,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://entityreference-7.x-1.1.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334695,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'extlink' => array(
      'da' => (object) array(
        'name' => 'extlink',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.18',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'extlink',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669985,
        'last_checked' => 1447669984,
        'files' => array(
          'remote' => (object) array(
            'project' => 'extlink',
            'langcode' => 'da',
            'version' => '7.x-1.18',
            'type' => 'remote',
            'filename' => 'extlink-7.x-1.18.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/extlink/extlink-7.x-1.18.da.po',
            'timestamp' => 1407334098,
          ),
          'local' => (object) array(
            'project' => 'extlink',
            'langcode' => 'da',
            'version' => '7.x-1.18',
            'type' => 'local',
            'filename' => 'extlink-7.x-1.18.da.po',
            'uri' => 'translations://extlink-7.x-1.18.da.po',
            'timestamp' => 1447669985,
            'directory' => 'translations://',
            'last_checked' => 1447669984,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'faq' => array(
      'da' => (object) array(
        'name' => 'faq',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'faq',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669985,
        'last_checked' => 1447669986,
        'files' => array(
          'remote' => (object) array(
            'project' => 'faq',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'faq-7.x-1.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/faq/faq-7.x-1.0.da.po',
            'timestamp' => 1445169841,
          ),
          'local' => (object) array(
            'project' => 'faq',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'faq-7.x-1.0.da.po',
            'uri' => 'translations://faq-7.x-1.0.da_0.po',
            'timestamp' => 1447669985,
            'directory' => 'translations://',
            'last_checked' => 1447669986,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'features' => array(
      'da' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334696,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'da',
            'version' => '7.x-2.4',
            'type' => 'remote',
            'filename' => 'features-7.x-2.4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.4.da.po',
            'timestamp' => 1425707184,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'da',
            'version' => '7.x-2.4',
            'type' => 'local',
            'filename' => 'features-7.x-2.4.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://features-7.x-2.4.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334696,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'flag' => array(
      'da' => (object) array(
        'name' => 'flag',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'flag',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334698,
        'files' => array(
          'remote' => (object) array(
            'project' => 'flag',
            'langcode' => 'da',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'flag-7.x-3.6.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/flag/flag-7.x-3.6.da.po',
            'timestamp' => 1425532541,
          ),
          'local' => (object) array(
            'project' => 'flag',
            'langcode' => 'da',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'flag-7.x-3.6.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://flag-7.x-3.6.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334698,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'friendly_register' => array(
      'da' => (object) array(
        'name' => 'friendly_register',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'friendly_register',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'friendly_register',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'friendly_register-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/friendly_register/friendly_register-7.x-1.1.da.po',
          ),
          'local' => (object) array(
            'project' => 'friendly_register',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'friendly_register-7.x-1.1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://friendly_register-7.x-1.1.da.po',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'htmlmail' => array(
      'da' => (object) array(
        'name' => 'htmlmail',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.65',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'htmlmail',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435745230,
        'last_checked' => 1439213059,
        'files' => array(
          'remote' => (object) array(
            'project' => 'htmlmail',
            'langcode' => 'da',
            'version' => '7.x-2.65',
            'type' => 'remote',
            'filename' => 'htmlmail-7.x-2.65.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/htmlmail/htmlmail-7.x-2.65.da.po',
            'timestamp' => 1333748459,
          ),
          'local' => (object) array(
            'project' => 'htmlmail',
            'langcode' => 'da',
            'version' => '7.x-2.65',
            'type' => 'local',
            'filename' => 'htmlmail-7.x-2.65.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://htmlmail-7.x-2.65.da.po',
            'timestamp' => 1435745230,
            'last_checked' => 1439213059,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'i18n' => array(
      'da' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1431416163,
        'last_checked' => 1435668423,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'da',
            'version' => '7.x-1.12',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.12.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.12.da.po',
            'timestamp' => 1422507790,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'da',
            'version' => '7.x-1.12',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.12.da.po',
            'uri' => 'translations://i18n-7.x-1.12.da.po',
            'timestamp' => 1431416163,
            'directory' => 'translations://',
            'last_checked' => 1435668423,
            'language' => 'da',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'da',
      ),
    ),
    'imagemagick' => array(
      'da' => (object) array(
        'name' => 'imagemagick',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'imagemagick',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435668424,
        'last_checked' => 1435668423,
        'files' => array(
          'remote' => (object) array(
            'project' => 'imagemagick',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'imagemagick-7.x-1.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/imagemagick/imagemagick-7.x-1.0.da.po',
            'timestamp' => 1362244889,
          ),
          'local' => (object) array(
            'project' => 'imagemagick',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'imagemagick-7.x-1.0.da.po',
            'uri' => 'translations://imagemagick-7.x-1.0.da.po',
            'timestamp' => 1435668424,
            'directory' => 'translations://',
            'last_checked' => 1435668423,
            'language' => 'da',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'jquery_update' => array(
      'da' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435668425,
        'last_checked' => 1435668425,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'da',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.da.po',
            'timestamp' => 1432978180,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'da',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.da.po',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.da.po',
            'timestamp' => 1435668425,
            'directory' => 'translations://',
            'last_checked' => 1435668425,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'l10n_update' => array(
      'da' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669987,
        'last_checked' => 1447669986,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.da.po',
            'timestamp' => 1447602544,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.da.po',
            'uri' => 'translations://l10n_update-7.x-2.0.da_0.po',
            'timestamp' => 1447669987,
            'directory' => 'translations://',
            'last_checked' => 1447669986,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'mailsystem' => array(
      'da' => (object) array(
        'name' => 'mailsystem',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.34',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mailsystem',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435745230,
        'last_checked' => 1439213059,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mailsystem',
            'langcode' => 'da',
            'version' => '7.x-2.34',
            'type' => 'remote',
            'filename' => 'mailsystem-7.x-2.34.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mailsystem/mailsystem-7.x-2.34.da.po',
            'timestamp' => 1381368898,
          ),
          'local' => (object) array(
            'project' => 'mailsystem',
            'langcode' => 'da',
            'version' => '7.x-2.34',
            'type' => 'local',
            'filename' => 'mailsystem-7.x-2.34.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://mailsystem-7.x-2.34.da.po',
            'timestamp' => 1435745230,
            'last_checked' => 1439213059,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'masquerade' => array(
      'da' => (object) array(
        'name' => 'masquerade',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'masquerade',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'masquerade',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc7',
            'type' => 'remote',
            'filename' => 'masquerade-7.x-1.0-rc7.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/masquerade/masquerade-7.x-1.0-rc7.da.po',
          ),
          'local' => (object) array(
            'project' => 'masquerade',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc7',
            'type' => 'local',
            'filename' => 'masquerade-7.x-1.0-rc7.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://masquerade-7.x-1.0-rc7.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'mass_contact' => array(
      'da' => (object) array(
        'name' => 'mass_contact',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mass_contact',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mass_contact',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'mass_contact-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mass_contact/mass_contact-7.x-1.1.da.po',
          ),
          'local' => (object) array(
            'project' => 'mass_contact',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'mass_contact-7.x-1.1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://mass_contact-7.x-1.1.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'message' => array(
      'da' => (object) array(
        'name' => 'message',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'message',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334700,
        'files' => array(
          'remote' => (object) array(
            'project' => 'message',
            'langcode' => 'da',
            'version' => '7.x-1.9',
            'type' => 'remote',
            'filename' => 'message-7.x-1.9.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/message/message-7.x-1.9.da.po',
            'timestamp' => 1380229369,
          ),
          'local' => (object) array(
            'project' => 'message',
            'langcode' => 'da',
            'version' => '7.x-1.9',
            'type' => 'local',
            'filename' => 'message-7.x-1.9.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://message-7.x-1.9.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334700,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'message_notify' => array(
      'da' => (object) array(
        'name' => 'message_notify',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'message_notify',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334700,
        'files' => array(
          'remote' => (object) array(
            'project' => 'message_notify',
            'langcode' => 'da',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'message_notify-7.x-2.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/message_notify/message_notify-7.x-2.5.da.po',
            'timestamp' => 1366719195,
          ),
          'local' => (object) array(
            'project' => 'message_notify',
            'langcode' => 'da',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'message_notify-7.x-2.5.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://message_notify-7.x-2.5.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334700,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'message_subscribe' => array(
      'da' => (object) array(
        'name' => 'message_subscribe',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'message_subscribe',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334700,
        'files' => array(
          'remote' => (object) array(
            'project' => 'message_subscribe',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc2',
            'type' => 'remote',
            'filename' => 'message_subscribe-7.x-1.0-rc2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/message_subscribe/message_subscribe-7.x-1.0-rc2.da.po',
            'timestamp' => 1396203700,
          ),
          'local' => (object) array(
            'project' => 'message_subscribe',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc2',
            'type' => 'local',
            'filename' => 'message_subscribe-7.x-1.0-rc2.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://message_subscribe-7.x-1.0-rc2.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334700,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'mimemail' => array(
      'da' => (object) array(
        'name' => 'mimemail',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'mimemail',
        'langcode' => 'da',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'mimemail',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta4',
            'type' => 'remote',
            'filename' => 'mimemail-7.x-1.0-beta4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/mimemail/mimemail-7.x-1.0-beta4.da.po',
          ),
          'local' => (object) array(
            'project' => 'mimemail',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta4',
            'type' => 'local',
            'filename' => 'mimemail-7.x-1.0-beta4.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://mimemail-7.x-1.0-beta4.da.po',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'module_filter' => array(
      'da' => (object) array(
        'name' => 'module_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'module_filter',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1430994982,
        'last_checked' => 1435668425,
        'files' => array(
          'remote' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'module_filter-7.x-2.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/module_filter/module_filter-7.x-2.0.da.po',
            'timestamp' => 1424667425,
          ),
          'local' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'module_filter-7.x-2.0.da.po',
            'uri' => 'translations://module_filter-7.x-2.0.da.po',
            'timestamp' => 1430994982,
            'directory' => 'translations://',
            'last_checked' => 1435668425,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'panels' => array(
      'da' => (object) array(
        'name' => 'panels',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'panels',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435668425,
        'last_checked' => 1435668425,
        'files' => array(
          'remote' => (object) array(
            'project' => 'panels',
            'langcode' => 'da',
            'version' => '7.x-3.4',
            'type' => 'remote',
            'filename' => 'panels-7.x-3.4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/panels/panels-7.x-3.4.da.po',
            'timestamp' => 1412599529,
          ),
          'local' => (object) array(
            'project' => 'panels',
            'langcode' => 'da',
            'version' => '7.x-3.4',
            'type' => 'local',
            'filename' => 'panels-7.x-3.4.da.po',
            'uri' => 'translations://panels-7.x-3.4.da.po',
            'timestamp' => 1435668425,
            'directory' => 'translations://',
            'last_checked' => 1435668425,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'pathauto' => array(
      'da' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1446200276,
        'last_checked' => 1446200276,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.3.da.po',
            'timestamp' => 1444459398,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.3.da.po',
            'uri' => 'translations://pathauto-7.x-1.3.da.po',
            'timestamp' => 1446200276,
            'directory' => 'translations://',
            'last_checked' => 1446200276,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pathologic' => array(
      'da' => (object) array(
        'name' => 'pathologic',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathologic',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1439213060,
        'last_checked' => 1439213059,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathologic',
            'langcode' => 'da',
            'version' => '7.x-2.12',
            'type' => 'remote',
            'filename' => 'pathologic-7.x-2.12.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathologic/pathologic-7.x-2.12.da.po',
            'timestamp' => 1391122586,
          ),
          'local' => (object) array(
            'project' => 'pathologic',
            'langcode' => 'da',
            'version' => '7.x-2.12',
            'type' => 'local',
            'filename' => 'pathologic-7.x-2.12.da.po',
            'uri' => 'translations://pathologic-7.x-2.12.da.po',
            'timestamp' => 1439213060,
            'directory' => 'translations://',
            'last_checked' => 1439213059,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'profile2' => array(
      'da' => (object) array(
        'name' => 'profile2',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'profile2',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334700,
        'files' => array(
          'remote' => (object) array(
            'project' => 'profile2',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'profile2-7.x-1.3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/profile2/profile2-7.x-1.3.da.po',
            'timestamp' => 1412615547,
          ),
          'local' => (object) array(
            'project' => 'profile2',
            'langcode' => 'da',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'profile2-7.x-1.3.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://profile2-7.x-1.3.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334700,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'profile2_regpath' => array(
      'da' => (object) array(
        'name' => 'profile2_regpath',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'profile2_regpath',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1428501998,
        'last_checked' => 1435668425,
        'files' => array(
          'remote' => (object) array(
            'project' => 'profile2_regpath',
            'langcode' => 'da',
            'version' => '7.x-1.12',
            'type' => 'remote',
            'filename' => 'profile2_regpath-7.x-1.12.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/profile2_regpath/profile2_regpath-7.x-1.12.da.po',
            'timestamp' => 1351036302,
          ),
          'local' => (object) array(
            'project' => 'profile2_regpath',
            'langcode' => 'da',
            'version' => '7.x-1.12',
            'type' => 'local',
            'filename' => 'profile2_regpath-7.x-1.12.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://profile2_regpath-7.x-1.12.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1435668425,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'rate' => array(
      'da' => (object) array(
        'name' => 'rate',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rate',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334700,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rate',
            'langcode' => 'da',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'rate-7.x-1.7.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rate/rate-7.x-1.7.da.po',
            'timestamp' => 1392186655,
          ),
          'local' => (object) array(
            'project' => 'rate',
            'langcode' => 'da',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'rate-7.x-1.7.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://rate-7.x-1.7.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334700,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'registration_role' => array(
      'da' => (object) array(
        'name' => 'registration_role',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'registration_role',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1434634743,
        'last_checked' => 1434634742,
        'files' => array(
          'remote' => (object) array(
            'project' => 'registration_role',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'registration_role-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/registration_role/registration_role-7.x-1.1.da.po',
            'timestamp' => 1434185183,
          ),
          'local' => (object) array(
            'project' => 'registration_role',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'registration_role-7.x-1.1.da.po',
            'uri' => 'translations://registration_role-7.x-1.1.da.po',
            'timestamp' => 1434634743,
            'directory' => 'translations://',
            'last_checked' => 1434634742,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'rules' => array(
      'da' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334701,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'da',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.da.po',
            'timestamp' => 1426572765,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'da',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://rules-7.x-2.9.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334701,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'smart_trim' => array(
      'da' => (object) array(
        'name' => 'smart_trim',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'smart_trim',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669988,
        'last_checked' => 1447669986,
        'files' => array(
          'remote' => (object) array(
            'project' => 'smart_trim',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'smart_trim-7.x-1.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/smart_trim/smart_trim-7.x-1.5.da.po',
            'timestamp' => 1430548479,
          ),
          'local' => (object) array(
            'project' => 'smart_trim',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'smart_trim-7.x-1.5.da.po',
            'uri' => 'translations://smart_trim-7.x-1.5.da.po',
            'timestamp' => 1447669988,
            'directory' => 'translations://',
            'last_checked' => 1447669986,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'strongarm' => array(
      'da' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334701,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.da.po',
            'timestamp' => 1339605245,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://strongarm-7.x-2.0.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334701,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'taxonomy_manager' => array(
      'da' => (object) array(
        'name' => 'taxonomy_manager',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'taxonomy_manager',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1429103601,
        'files' => array(
          'remote' => (object) array(
            'project' => 'taxonomy_manager',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'taxonomy_manager-7.x-1.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/taxonomy_manager/taxonomy_manager-7.x-1.0.da.po',
            'timestamp' => 1369043465,
          ),
          'local' => (object) array(
            'project' => 'taxonomy_manager',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'taxonomy_manager-7.x-1.0.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://taxonomy_manager-7.x-1.0.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1429103601,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'token' => array(
      'da' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1428501998,
        'last_checked' => 1446200274,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.da.po',
            'timestamp' => 1425362384,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'da',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://token-7.x-1.6.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1446200274,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'user_picture_field' => array(
      'da' => (object) array(
        'name' => 'user_picture_field',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'user_picture_field',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1430391143,
        'last_checked' => 1435668426,
        'files' => array(
          'remote' => (object) array(
            'project' => 'user_picture_field',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc1',
            'type' => 'remote',
            'filename' => 'user_picture_field-7.x-1.0-rc1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/user_picture_field/user_picture_field-7.x-1.0-rc1.da.po',
            'timestamp' => 1344166912,
          ),
          'local' => (object) array(
            'project' => 'user_picture_field',
            'langcode' => 'da',
            'version' => '7.x-1.0-rc1',
            'type' => 'local',
            'filename' => 'user_picture_field-7.x-1.0-rc1.da.po',
            'uri' => 'translations://user_picture_field-7.x-1.0-rc1.da.po',
            'timestamp' => 1430391143,
            'directory' => 'translations://',
            'last_checked' => 1435668426,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'userpoints' => array(
      'da' => (object) array(
        'name' => 'userpoints',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'userpoints',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334701,
        'files' => array(
          'remote' => (object) array(
            'project' => 'userpoints',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'userpoints-7.x-1.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/userpoints/userpoints-7.x-1.0.da.po',
            'timestamp' => 1380244273,
          ),
          'local' => (object) array(
            'project' => 'userpoints',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'userpoints-7.x-1.0.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://userpoints-7.x-1.0.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334701,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'variable' => array(
      'da' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1431416163,
        'last_checked' => 1435668426,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'da',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.da.po',
            'timestamp' => 1412707046,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'da',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.da.po',
            'uri' => 'translations://variable-7.x-2.5.da.po',
            'timestamp' => 1431416163,
            'directory' => 'translations://',
            'last_checked' => 1435668426,
            'language' => 'da',
            'fileurl' => '',
            'status' => 1,
          ),
        ),
        'language' => 'da',
      ),
    ),
    'views' => array(
      'da' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1447669988,
        'last_checked' => 1447670004,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'da',
            'version' => '7.x-3.10',
            'type' => 'remote',
            'filename' => 'views-7.x-3.10.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.10.da.po',
            'timestamp' => 1445168640,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'da',
            'version' => '7.x-3.10',
            'type' => 'local',
            'filename' => 'views-7.x-3.10.da.po',
            'uri' => 'translations://views-7.x-3.10.da_0.po',
            'timestamp' => 1447669988,
            'directory' => 'translations://',
            'last_checked' => 1447670004,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_bulk_operations' => array(
      'da' => (object) array(
        'name' => 'views_bulk_operations',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_bulk_operations',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1456385679,
        'last_checked' => 1456385680,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_bulk_operations',
            'langcode' => 'da',
            'version' => '7.x-3.3',
            'type' => 'remote',
            'filename' => 'views_bulk_operations-7.x-3.3.da.po',
            'uri' => 'https://ftp.drupal.org/files/translations/7.x/views_bulk_operations/views_bulk_operations-7.x-3.3.da.po',
            'timestamp' => 1435819286,
          ),
          'local' => (object) array(
            'project' => 'views_bulk_operations',
            'langcode' => 'da',
            'version' => '7.x-3.3',
            'type' => 'local',
            'filename' => 'views_bulk_operations-7.x-3.3.da.po',
            'uri' => 'translations://views_bulk_operations-7.x-3.3.da.po',
            'timestamp' => 1456385679,
            'directory' => 'translations://',
            'last_checked' => 1456385680,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'voting_rules' => array(
      'da' => (object) array(
        'name' => 'voting_rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-alpha1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'voting_rules',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334706,
        'files' => array(
          'remote' => (object) array(
            'project' => 'voting_rules',
            'langcode' => 'da',
            'version' => '7.x-1.0-alpha1',
            'type' => 'remote',
            'filename' => 'voting_rules-7.x-1.0-alpha1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/voting_rules/voting_rules-7.x-1.0-alpha1.da.po',
            'timestamp' => 1380240748,
          ),
          'local' => (object) array(
            'project' => 'voting_rules',
            'langcode' => 'da',
            'version' => '7.x-1.0-alpha1',
            'type' => 'local',
            'filename' => 'voting_rules-7.x-1.0-alpha1.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://voting_rules-7.x-1.0-alpha1.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334706,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'votingapi' => array(
      'da' => (object) array(
        'name' => 'votingapi',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'votingapi',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1429087513,
        'last_checked' => 1431334703,
        'files' => array(
          'remote' => (object) array(
            'project' => 'votingapi',
            'langcode' => 'da',
            'version' => '7.x-2.12',
            'type' => 'remote',
            'filename' => 'votingapi-7.x-2.12.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/votingapi/votingapi-7.x-2.12.da.po',
            'timestamp' => 1408177357,
          ),
          'local' => (object) array(
            'project' => 'votingapi',
            'langcode' => 'da',
            'version' => '7.x-2.12',
            'type' => 'local',
            'filename' => 'votingapi-7.x-2.12.da.po',
            'directory' => 'translations://',
            'uri' => 'translations://votingapi-7.x-2.12.da.po',
            'timestamp' => 1428501998,
            'last_checked' => 1431334703,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'webform' => array(
      'da' => (object) array(
        'name' => 'webform',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-4.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'webform',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1435690354,
        'last_checked' => 1435690358,
        'files' => array(
          'remote' => (object) array(
            'project' => 'webform',
            'langcode' => 'da',
            'version' => '7.x-4.9',
            'type' => 'remote',
            'filename' => 'webform-7.x-4.9.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/webform/webform-7.x-4.9.da.po',
            'timestamp' => 1432882766,
          ),
          'local' => (object) array(
            'project' => 'webform',
            'langcode' => 'da',
            'version' => '7.x-4.9',
            'type' => 'local',
            'filename' => 'webform-7.x-4.9.da.po',
            'uri' => 'translations://webform-7.x-4.9.da.po',
            'timestamp' => 1435690354,
            'directory' => 'translations://',
            'last_checked' => 1435690358,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_answers_answer';
  $strongarm->value = '1';
  $export['language_content_type_answers_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_answers_question';
  $strongarm->value = '1';
  $export['language_content_type_answers_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_article';
  $strongarm->value = '1';
  $export['language_content_type_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '1';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 1;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'registration_role_roles';
  $strongarm->value = '8';
  $export['registration_role_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'myassist_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_myassist_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'no',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 1,
    'zen_wireframes' => 0,
  );
  $export['theme_myassist_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_field_source_bundle';
  $strongarm->value = 'ungeprofil,voksenprofil';
  $export['user_picture_field_source_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_field_source_entity';
  $strongarm->value = 'profile2';
  $export['user_picture_field_source_entity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_field_source_field';
  $strongarm->value = 'field_avatar';
  $export['user_picture_field_source_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
