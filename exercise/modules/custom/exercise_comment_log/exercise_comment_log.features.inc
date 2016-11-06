<?php
/**
 * @file
 * exercise_comment_log.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exercise_comment_log_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function exercise_comment_log_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function exercise_comment_log_default_message_type() {
  $items = array();
  $items['comment_log'] = entity_import('message_type', '{
    "name" : "comment_log",
    "description" : "Comment Log",
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
          "value" : "[message:field-comment:author] commented \\u003Ca href=\\u0022[message:field-comment:url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E on [message:field-comment:node:title]",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field-comment:author] commented \\u003Ca href=\\u0022url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E on [message:field-comment:node:title]\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "[message:field-comment:author] \\u05d4\\u05d2\\u05d9\\u05d1 \\u003Ca href=\\u0022[message:field-comment:url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E \\u05e2\\u05dc [message:field-comment:node:title]",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field-comment:author] \\u05d4\\u05d2\\u05d9\\u05d1 \\u003Ca href=\\u0022url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E \\u05e2\\u05dc [message:field-comment:node:title]\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "[message:field-comment:author] commented \\u003Ca href=\\u0022[message:field-comment:url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E on [message:field-comment:node:title]",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E[message:field-comment:author] commented \\u003Ca href=\\u0022[message:field-comment:url]\\u0022\\u003E@{message:field-comment:title}\\u003C\\/a\\u003E on [message:field-comment:node:title]\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function exercise_comment_log_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
