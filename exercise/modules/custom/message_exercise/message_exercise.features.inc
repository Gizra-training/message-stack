<?php
/**
 * @file
 * message_exercise.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function message_exercise_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function message_exercise_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function message_exercise_default_message_type() {
  $items = array();
  $items['user_commented_on_node'] = entity_import('message_type', '{
    "name" : "user_commented_on_node",
    "description" : "user commented on a node",
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
          "value" : "[message:user:name] commented @{message:field-comment-title} on a  \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented @{message:field-comment-title} on a  \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:user:name] \\u05d4\\u05d2\\u05d9\\u05d1 @{message:field-comment-title} \\u05e2\\u05dc  \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:user:name] \\u05d4\\u05d2\\u05d9\\u05d1 @{message:field-comment-title} \\u05e2\\u05dc  \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
