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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blog */
  $handler = $view->new_display('page', 'Blog', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Read more link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Read more link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="text-muted">Read more</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Blog Author List Attachment */
  $handler = $view->new_display('attachment', 'Blog Author List Attachment', 'blog_author_list_attachment');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Alias Names (field_people_aliases) */
  $handler->display->display_options['relationships']['field_people_aliases_tid']['id'] = 'field_people_aliases_tid';
  $handler->display->display_options['relationships']['field_people_aliases_tid']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['relationships']['field_people_aliases_tid']['field'] = 'field_people_aliases_tid';
  /* Relationship: Taxonomy term: Content using Author(s) */
  $handler->display->display_options['relationships']['reverse_field_lug_blog_author_node']['id'] = 'reverse_field_lug_blog_author_node';
  $handler->display->display_options['relationships']['reverse_field_lug_blog_author_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_lug_blog_author_node']['field'] = 'reverse_field_lug_blog_author_node';
  $handler->display->display_options['relationships']['reverse_field_lug_blog_author_node']['relationship'] = 'field_people_aliases_tid';
  $handler->display->display_options['relationships']['reverse_field_lug_blog_author_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Alias Names */
  $handler->display->display_options['fields']['field_people_aliases']['id'] = 'field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['field'] = 'field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['label'] = '';
  $handler->display->display_options['fields']['field_people_aliases']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_aliases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_aliases']['delta_offset'] = '0';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_people_image']['alter']['path'] = 'blog/[field_people_aliases]';
  $handler->display->display_options['fields']['field_people_image']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_people_image']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'people_thumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'blog/[field_people_aliases]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'text-center';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_lug_blog_author_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'people' => 'people',
  );
  /* Filter criterion: Content: Alias Names (field_people_aliases) */
  $handler->display->display_options['filters']['field_people_aliases_tid']['id'] = 'field_people_aliases_tid';
  $handler->display->display_options['filters']['field_people_aliases_tid']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['filters']['field_people_aliases_tid']['field'] = 'field_people_aliases_tid';
  $handler->display->display_options['filters']['field_people_aliases_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_people_aliases_tid']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
  $handler->display->display_options['filters']['field_people_aliases_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_people_aliases_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_people_aliases_tid']['vocabulary'] = 'aliases';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'person_blog_page' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Person Blog */
  $handler = $view->new_display('page', 'Person Blog', 'person_blog_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ICM Blog';
  $handler->display->display_options['display_description'] = 'Displays blog posts for a person';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Read more link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Read more link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="text-muted">Read more</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = ' ';
  $handler->display->display_options['fields']['field_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_class'] = 'fa fa-tag';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'text-muted';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
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
  $handler->display->display_options['path'] = 'blog/%';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Hero Attachment */
  $handler = $view->new_display('attachment', 'Hero Attachment', 'person_blog_page_hero_attachment');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Biography */
  $handler->display->display_options['fields']['field_people_bio']['id'] = 'field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['table'] = 'field_data_field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['field'] = 'field_people_bio';
  $handler->display->display_options['fields']['field_people_bio']['label'] = '';
  $handler->display->display_options['fields']['field_people_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_bio']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: View profile link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'View profile link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View profile';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Alias Names (field_people_aliases) */
  $handler->display->display_options['arguments']['field_people_aliases_tid']['id'] = 'field_people_aliases_tid';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['field'] = 'field_people_aliases_tid';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_people_aliases_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['validate_options']['vocabularies'] = array(
    'aliases' => 'aliases',
  );
  $handler->display->display_options['arguments']['field_people_aliases_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_people_aliases_tid']['validate_options']['transform'] = TRUE;
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
    'people' => 'people',
  );
  $handler->display->display_options['displays'] = array(
    'person_blog_page' => 'person_blog_page',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
  );

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

  /* Display: Blog Author Block */
  $handler = $view->new_display('block', 'Blog Author Block', 'block_2');
  $handler->display->display_options['display_description'] = 'Displays recent authors of blogs';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="blog/authors">View all bloggers</a>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="blog/authors">View all bloggers</a>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'aliases' => 'aliases',
    'category' => 0,
    'people_category' => 0,
    'tags' => 0,
    'announcement_category' => 0,
    'announcement_type' => 0,
    'expertise' => 0,
    'crop' => 0,
    'event_type' => 0,
    'keywords' => 0,
    'meta_keywords' => 0,
    'news_type' => 0,
    'origin' => 0,
    'project_type' => 0,
    'resource_category' => 0,
    'tutorial_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/authors';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['sorts']['name']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
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

  /* Display: Blog Authors Page */
  $handler = $view->new_display('page', 'Blog Authors Page', 'people_grid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_people_image' => 'field_people_image',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'aliases' => 'aliases',
    'category' => 0,
    'people_category' => 0,
    'tags' => 0,
    'announcement_category' => 0,
    'announcement_type' => 0,
    'expertise' => 0,
    'crop' => 0,
    'event_type' => 0,
    'keywords' => 0,
    'meta_keywords' => 0,
    'news_type' => 0,
    'origin' => 0,
    'project_type' => 0,
    'resource_category' => 0,
    'tutorial_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Alias Names */
  $handler->display->display_options['fields']['field_people_aliases']['id'] = 'field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['table'] = 'field_data_field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['field'] = 'field_people_aliases';
  $handler->display->display_options['fields']['field_people_aliases']['label'] = '';
  $handler->display->display_options['fields']['field_people_aliases']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_aliases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_aliases']['delta_offset'] = '0';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_people_image']['alter']['path'] = 'blog/[field_people_aliases]';
  $handler->display->display_options['fields']['field_people_image']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_people_image']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'people_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_people_image']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div style="float:left">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'blog/[field_people_aliases]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_people_last_name']['id'] = 'field_people_last_name';
  $handler->display->display_options['fields']['field_people_last_name']['table'] = 'field_data_field_people_last_name';
  $handler->display->display_options['fields']['field_people_last_name']['field'] = 'field_people_last_name';
  $handler->display->display_options['fields']['field_people_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_people_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_people_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_people_last_name) */
  $handler->display->display_options['sorts']['field_people_last_name_value']['id'] = 'field_people_last_name_value';
  $handler->display->display_options['sorts']['field_people_last_name_value']['table'] = 'field_data_field_people_last_name';
  $handler->display->display_options['sorts']['field_people_last_name_value']['field'] = 'field_people_last_name_value';
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
    'people' => 'people',
  );
  $handler->display->display_options['path'] = 'blog/authors';
  $export['blog'] = $view;

  return $export;
}
