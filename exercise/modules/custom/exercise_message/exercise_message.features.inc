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
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "...",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E...\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
