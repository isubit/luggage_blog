<?php
/**
 * @file example_module/example_module.views.inc
 * Defines a custom contextual filter validator
 */
function luggage_blog_views_plugins() {
  return array(
    'argument validator' => array(
      'blog' => array(
        'title' => t('Blog'),
        'handler' => 'luggage_blog_plugin_argument_validate_url',
        'path' => drupal_get_path('module', 'luggage_blog') . '/views-plugins',
      ),
    ),
  );
}
