<?php
/**
 * @file
 * exercise_message.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function exercise_message_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'message-new_comment-field_comment'.
  $field_instances['message-new_comment-field_comment'] = array(
    'bundle' => 'new_comment',
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
    'field_name' => 'field_comment',
    'label' => 'Comment',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'message-new_comment-field_node'.
  $field_instances['message-new_comment-field_node'] = array(
    'bundle' => 'new_comment',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_node',
    'label' => 'Node',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment');
  t('Node');

  return $field_instances;
}
