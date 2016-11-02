<?php
/**
 * @file
 * ym_message_stack_p1.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ym_message_stack_p1_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'comment_messages';
  $page->task = 'page';
  $page->admin_title = 'Comment messages';
  $page->admin_description = '';
  $page->path = 'coment-messages';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_comment_messages__panel';
  $handler->task = 'page';
  $handler->subtask = 'comment_messages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '55ecf898-1866-4424-9a16-be1d066f5f35';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a78ac7b9-b950-4976-9179-309468d0811c';
    $pane->panel = 'middle';
    $pane->type = 'comments_messages';
    $pane->subtype = 'comments_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a78ac7b9-b950-4976-9179-309468d0811c';
    $display->content['new-a78ac7b9-b950-4976-9179-309468d0811c'] = $pane;
    $display->panels['middle'][0] = 'new-a78ac7b9-b950-4976-9179-309468d0811c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a78ac7b9-b950-4976-9179-309468d0811c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['comment_messages'] = $page;

  return $pages;

}
