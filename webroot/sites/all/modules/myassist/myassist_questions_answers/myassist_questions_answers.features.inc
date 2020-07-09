<?php
/**
 * @file
 * myassist_questions_answers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myassist_questions_answers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function myassist_questions_answers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function myassist_questions_answers_default_message_type() {
  $items = array();
  $items['best_answer'] = entity_import('message_type', '{
    "name" : "best_answer",
    "description" : "Best answer",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : false,
    "message_text" : {
      "da" : [
        {
          "value" : "\\u003Cp\\u003EDit assist er blevet k\\u00e5ret som det mest brugbare!\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EDit assist er blevet k\\u00e5ret som det mest brugbare!\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EHej, Det ser ud som om du har talent for det her. \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003EDit assist\\u003C\\/a\\u003E p\\u00e5 sp\\u00f8rgsm\\u00e5let \\u003Ca href=\\u0022[message:field-node:answers-related-question:url]\\u0022\\u003E[message:field-node:answers-related-question:title]\\u003C\\/a\\u003E er blevet k\\u00e5ret som det mest brugbare.\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHej, Det ser ud som om du har talent for det her. \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003EDit assist\\u003C\\/a\\u003E p\\u00e5 sp\\u00f8rgsm\\u00e5let \\u003Ca href=\\u0022[message:field-node:answers-related-question:url]\\u0022\\u003E[message:field-node:answers-related-question:title]\\u003C\\/a\\u003E er blevet k\\u00e5ret som det mest brugbare.\\u003C\\/p\\u003E\\n"
        }
      ],
      "en" : [
        {
          "value" : "There is a new reply to the question: \\u003Ca href=\\u0022\\/node\\/[message:field-message-node-reference:nid]\\u0022\\u003E[message:field-message-node-reference:field_description]\\u003C\\/a\\u003E",
          "format" : "html"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['comment_created'] = entity_import('message_type', '{
    "name" : "comment_created",
    "description" : "Comment created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : { "da" : [
        {
          "value" : "\\u003Cp\\u003EDu har f\\u00e5et en kommentar! - MitAssist.dk\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EDu har f\\u00e5et en kommentar! - MitAssist.dk\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EHej, Du har f\\u00e5et en ny kommentar: \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHej, Du har f\\u00e5et en ny kommentar: \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['notify_advisor'] = entity_import('message_type', '{
    "name" : "notify_advisor",
    "description" : "Notify advisor",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : { "da" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: \\u0027Lucida Grande\\u0027, \\u0027Lucida Sans Unicode\\u0027, sans-serif; font-size: 12.006383895874px; line-height: 20.0063037872314px; background-color: rgb(243, 244, 238);\\u0022\\u003E[node:title]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: \\u0027Lucida Grande\\u0027, \\u0027Lucida Sans Unicode\\u0027, sans-serif; font-size: 12.006383895874px; line-height: 20.0063037872314px; background-color: rgb(243, 244, 238);\\u0022\\u003E[node:title]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: \\u0027Lucida Grande\\u0027, \\u0027Lucida Sans Unicode\\u0027, sans-serif; font-size: 12.006383895874px; line-height: 20.0063037872314px;\\u0022\\u003E[node:body]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(0, 0, 0); font-family: \\u0027Lucida Grande\\u0027, \\u0027Lucida Sans Unicode\\u0027, sans-serif; font-size: 12.006383895874px; line-height: 20.0063037872314px;\\u0022\\u003E[node:body]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['question_answered'] = entity_import('message_type', '{
    "name" : "question_answered",
    "description" : "Answer created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : { "da" : [
        {
          "value" : "\\u003Cp\\u003EDu har f\\u00e5et et assist! - MitAssist.dk\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EDu har f\\u00e5et et assist! - MitAssist.dk\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EHej, Du har f\\u00e5et et nyt assist p\\u00e5 dit sp\\u00f8rgsm\\u00e5l: \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EHej, Du har f\\u00e5et et nyt assist p\\u00e5 dit sp\\u00f8rgsm\\u00e5l: \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['upvoted_answer'] = entity_import('message_type', '{
    "name" : "upvoted_answer",
    "description" : "Upvoted answer",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : { "da" : [
        {
          "value" : "\\u003Cp\\u003EDer er folk der s\\u00e6tter pris p\\u00e5 din hj\\u00e6lp - MitAssist.dk\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EDer er folk der s\\u00e6tter pris p\\u00e5 din hj\\u00e6lp - MitAssist.dk\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EGodt g\\u00e5et! \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003EDit assist\\u003C\\/a\\u003E er blevet upvoted af en anden bruger p\\u00e5 MitAssist.dk.\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EGodt g\\u00e5et! \\u003Ca href=\\u0022[message:field-node:url]\\u0022\\u003EDit assist\\u003C\\/a\\u003E er blevet upvoted af en anden bruger p\\u00e5 MitAssist.dk.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
