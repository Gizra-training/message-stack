<?php
/**
 * @file
 * exercise_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exercise_message_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function exercise_message_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function exercise_message_default_message_type() {
  $items = array();
  $items['exercise_message_comment_added'] = entity_import('message_type', '{
    "name" : "exercise_message_comment_added",
    "description" : "Exercise Message Comment Added",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "he",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "[message:user:name] commented [message:field-comment-field:title] on \\u003Ca href=\\u0022[message:field-comment-field:node:url]\\u0022\\u003E[message:field-comment-field:node:title]\\u003C\\/a\\u003E.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented [message:field-comment-field:title] on \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-comment-field:node:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "[message:user:name] \\u05d4\\u05e2\\u05d9\\u05e8 [message:field-comment-field:title] \\u05e2\\u05dc  \\u003Ca href=\\u0022[message:field-comment-field:node:url]\\u0022\\u003E[message:field-comment-field:node:title]\\u003C\\/a\\u003E.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u05d4\\u05e2\\u05d9\\u05e8 [message:field-comment-field:title] \\u05e2\\u05dc  \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-comment-field:node:title]\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
