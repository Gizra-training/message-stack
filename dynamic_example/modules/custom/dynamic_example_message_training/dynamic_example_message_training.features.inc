<?php
/**
 * @file
 * dynamic_example_message_training.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dynamic_example_message_training_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dynamic_example_message_training_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function dynamic_example_message_training_default_message_type() {
  $items = array();
  $items['new_comment'] = entity_import('message_type', '{
    "name" : "new_comment",
    "description" : "New comment",
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
          "value" : "[message:user:name] commented @{message:field-comment:title} on \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented @{message:field-comment:title} on \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "[message:user:name] \\u05d4\\u05d2\\u05d9\\u05d1 @{message:field-comment:title} \\u05e2\\u05dc \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] \\u05d4\\u05d2\\u05d9\\u05d1 @{message:field-comment:title} \\u05e2\\u05dc \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "[message:user:name] commented @{message:field-comment:title} on \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented @{message:field-comment:title} on \\u003Ca href=\\u0022url]\\u0022\\u003E[message:field-node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
