<?php
/**
 * @file
 * ym_message_stack_p1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ym_message_stack_p1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function ym_message_stack_p1_default_message_type() {
  $items = array();
  $items['user_comment_on_post'] = entity_import('message_type', '{
    "name" : "user_comment_on_post",
    "description" : "User comment on post",
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
          "value" : "[message:user:name] commented !comment_title on \\u003Ca href=\\u0027!node_url\\u0027\\u003E !node_title\\u003C\\/a\\u003E.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented !comment_title on \\u003Ca href=\\u0022!node_url\\u0022\\u003E !node_title\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:user:name] \\u05d1\\u05d7\\u05e8 \\u05dc\\u05d4\\u05d2\\u05d9\\u05d1  !comment_title \\u05e2\\u05dc  \\u003Ca href=\\u0027!node_url\\u0027\\u003E !node_title\\u003C\\/a\\u003E.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:user:name] \\u05d1\\u05d7\\u05e8 \\u05dc\\u05d4\\u05d2\\u05d9\\u05d1  !comment_title \\u05e2\\u05dc  \\u003Ca href=\\u0022!node_url\\u0022\\u003E !node_title\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "[message:user:name] commented !comment_title on \\u003Ca href=\\u0027!node_url\\u0027\\u003E !node_title\\u003C\\/a\\u003E.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:user:name] commented !comment_title on \\u003Ca href=\\u0022!node_url\\u0022\\u003E !node_title\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
