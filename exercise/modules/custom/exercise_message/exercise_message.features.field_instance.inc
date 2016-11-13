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

  // Exported field_instance:
  // 'message-exercise_message_comment_added-field_comment_field'.
  $field_instances['message-exercise_message_comment_added-field_comment_field'] = array(
    'bundle' => 'exercise_message_comment_added',
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
    'field_name' => 'field_comment_field',
    'label' => 'Comment Field',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment Field');

  return $field_instances;
}
