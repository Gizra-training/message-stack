<?php
/**
 * @file
 * exercise_message.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exercise_message_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'comment_message';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Comment message';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comment message';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'comment';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'comment-message';
  $translatables['comment_message'] = array(
    t('Master'),
    t('Comment message'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Message ID'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['comment_message'] = $view;

  return $export;
}
