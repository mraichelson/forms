<?php
/**
 * @file
 * feature_kittens.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_kittens_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kittens_list';
  $view->description = 'Shows the content submitted through the custom form.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kittens List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kittens List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Likes Kittens? */
  $handler->display->display_options['fields']['field_likes_kittens']['id'] = 'field_likes_kittens';
  $handler->display->display_options['fields']['field_likes_kittens']['table'] = 'field_data_field_likes_kittens';
  $handler->display->display_options['fields']['field_likes_kittens']['field'] = 'field_likes_kittens';
  /* Field: Content: What kind of kittens do you like? */
  $handler->display->display_options['fields']['field_taxonomy_kittens']['id'] = 'field_taxonomy_kittens';
  $handler->display->display_options['fields']['field_taxonomy_kittens']['table'] = 'field_data_field_taxonomy_kittens';
  $handler->display->display_options['fields']['field_taxonomy_kittens']['field'] = 'field_taxonomy_kittens';
  $handler->display->display_options['fields']['field_taxonomy_kittens']['label'] = 'What kind of kittens they like';
  $handler->display->display_options['fields']['field_taxonomy_kittens']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kittens' => 'kittens',
  );
  /* Filter criterion: Content: Likes Kittens? (field_likes_kittens) */
  $handler->display->display_options['filters']['field_likes_kittens_value']['id'] = 'field_likes_kittens_value';
  $handler->display->display_options['filters']['field_likes_kittens_value']['table'] = 'field_data_field_likes_kittens';
  $handler->display->display_options['filters']['field_likes_kittens_value']['field'] = 'field_likes_kittens_value';
  $handler->display->display_options['filters']['field_likes_kittens_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_likes_kittens_value']['expose']['operator_id'] = 'field_likes_kittens_value_op';
  $handler->display->display_options['filters']['field_likes_kittens_value']['expose']['label'] = 'Likes Kittens?';
  $handler->display->display_options['filters']['field_likes_kittens_value']['expose']['operator'] = 'field_likes_kittens_value_op';
  $handler->display->display_options['filters']['field_likes_kittens_value']['expose']['identifier'] = 'field_likes_kittens_value';
  $handler->display->display_options['filters']['field_likes_kittens_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: What kind of kittens do you like? (field_taxonomy_kittens) */
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['id'] = 'field_taxonomy_kittens_tid';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['table'] = 'field_data_field_taxonomy_kittens';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['field'] = 'field_taxonomy_kittens_tid';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['expose']['operator_id'] = 'field_taxonomy_kittens_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['expose']['label'] = 'What kind of kittens they like';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['expose']['operator'] = 'field_taxonomy_kittens_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['expose']['identifier'] = 'field_taxonomy_kittens_tid';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_kittens_tid']['vocabulary'] = 'kitten_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'kittens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Show Submissions';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['kittens_list'] = $view;

  return $export;
}
