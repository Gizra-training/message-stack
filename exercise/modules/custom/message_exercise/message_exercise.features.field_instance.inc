<?php
/**
 * @file
 * message_exercise.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function message_exercise_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'message-user_commented_on_node-field_comment_title'.
  $field_instances['message-user_commented_on_node-field_comment_title'] = array(
    'bundle' => 'user_commented_on_node',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_comment_title',
    'label' => 'comment_title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'message-user_commented_on_node-field_node_ref'.
  $field_instances['message-user_commented_on_node-field_node_ref'] = array(
    'bundle' => 'user_commented_on_node',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_node_ref',
    'label' => 'node_ref',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('comment_title');
  t('node_ref');

  return $field_instances;
}
