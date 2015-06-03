<?php
/**
 * @file
 * luggage_blog.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function luggage_blog_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recent_posts';
  $ds_field->label = 'Recent posts';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|blog-block_1',
    'block_render' => '2',
  );
  $export['recent_posts'] = $ds_field;

  return $export;
}
