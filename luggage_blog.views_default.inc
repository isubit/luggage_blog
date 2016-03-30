<?php
/**
 * @file
 * luggage_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'lug_blog' => 'lug_blog',
  );

  /* Display: Blog */
  $handler = $view->new_display('page', 'Blog', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ICM Blog';
  $handler->display->display_options['display_description'] = 'Displays all blog posts by all authors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_category' => 'field_category',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Alias Names (field_people_aliases) */
  $handler->display->display_options['relationships']['field_people_aliases_tid']['id'] = 'field_people_aliases_tid';
  $handler->display->display_options['relationships']['field_people_aliases_tid']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['relationships']['field_people_aliases_tid']['field'] = 'field_people_aliases_tid';
  /* Relationship: Content: Author(s) (field_lug_blog_author) */
  $handler->display->display_options['relationships']['field_lug_blog_author_tid']['id'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['relationships']['field_lug_blog_author_tid']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['relationships']['field_lug_blog_author_tid']['field'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = ' ';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_class'] = 'fa fa-tag';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_lug_blog_author']['id'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['field'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['label'] = '';
  $handler->display->display_options['fields']['field_lug_blog_author']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lug_blog_author']['alter']['path'] = 'blog/[field_lug_blog_author]';
  $handler->display->display_options['fields']['field_lug_blog_author']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_lug_blog_author']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_lug_blog_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lug_blog_author']['type'] = 'views_node_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lug_blog_author']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_lug_blog_author']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lug_blog_author']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'node-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="text-muted">Read more</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'blog/[field_lug_blog_author]/[title]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'lug_blog' => 'lug_blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Blog Posts */
  $handler = $view->new_display('block', 'Blog Posts', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );

  /* Display: Person Blog */
  $handler = $view->new_display('page', 'Person Blog', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ICM Blog';
  $handler->display->display_options['display_description'] = 'Displays blog posts for a person';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_lug_blog_author']['id'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['field'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lug_blog_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author(s) (field_lug_blog_author) */
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['id'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['field'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['validate_options']['vocabularies'] = array(
    'aliases' => 'aliases',
  );
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_lug_blog_author_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'lug_blog' => 'lug_blog',
  );
  /* Filter criterion: Content: Author(s) (field_lug_blog_author) */
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['id'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['field'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['value'] = '';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['expose']['operator_id'] = 'field_lug_blog_author_tid_op';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['expose']['operator'] = 'field_lug_blog_author_tid_op';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['expose']['identifier'] = 'field_lug_blog_author_tid';
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    12 => 0,
    6 => 0,
    3 => 0,
    13 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
    11 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_lug_blog_author_tid']['vocabulary'] = 'aliases';
  $handler->display->display_options['path'] = 'blog/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['blog'] = $view;

  return $export;
}
