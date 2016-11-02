<?php

/**
 * @file
 * Plugin definition.
 */

$plugin = array(
  'title' => t('Comment Messages'),
  'description' => t('Comments Messages list.'),
  'category' => t('Yoni'),
  'hook theme' => 'ym_message_stack_p1_comments_messages_content_type_theme',
);

/**
 * Render callback.
 */
function ym_message_stack_p1_comments_messages_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->module = 'ym_message_stack_p1';

  // Finding all the Comments messages.
  $query = new EntityFieldQuery();
  $result = $query
    ->entityCondition('entity_type', 'message')
    ->entityCondition('bundle', 'user_comment_on_post')
    ->execute();

  if (empty($result['message'])) {
    // No messages found.
    return;
  }

  $messages = node_load_multiple(array_keys($result['message']));
  // Rendering the result to html.
  $messages = array_map('ym_message_stack_p1_comments_messages_render_message', $messages);

  $variables = array(
    'specialists' => $messages,
  );
  $block->content = theme('ym_message_stack_p1_comments_messages', $variables);
  return $block;

}

/**
 * Map message to html object.
 *
 * @param object $message
 *    The drupal official entity.
 *
 * @return string
 *    The rendered html.
 */
function ym_message_stack_p1_comments_messages_render_message($message) {
//  $wrapper = entity_metadata_wrapper('node', $message);

  $variables = array(
  );
  return theme('ym_message_stack_p1_comments_messages_tr', $variables);
}

/**
 * Delegated hook_theme().
 */
function ym_message_stack_p1_comments_messages_content_type_theme(&$theme, $plugin) {

  $theme['ym_message_stack_p1_comments_messages'] = array(
    'variables' => array(
      'specialists' => NULL,
    ),
    'path' => $plugin['path'],
    'template' => 'comments_messages',
  );

  $theme['ym_message_stack_p1_comments_messages_tr'] = array(
    'variables' => array(
      'name' => NULL,
      'position' => NULL,
      'description' => NULL,
      'image_url' => NULL,
      'linkedin_url' => NULL,
      'facebook_url' => NULL,
      'email' => NULL,
      'theme_path' => NULL,
    ),
    'path' => $plugin['path'],
    'template' => 'comments_messages_tr',
  );

}
