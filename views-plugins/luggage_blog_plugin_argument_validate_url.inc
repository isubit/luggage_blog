<?php
/**
 * @file example_module/plugins/example_module_plugin_argument_validate_url.inc
 * Contains the taxonomy url alias contextual filter validation plugin.
 */

/**
 * Validate whether an argument (contextual filter) is a valid
 * @ingroup views_argument_validate_plugins
 */
class luggage_blog_plugin_argument_validate_url extends views_plugin_argument_validate {

  function validate_argument($argument) {
    $view = &$this->view;
    $handler = &$this->argument;

    if (!empty($view->args)) {
      $arg = 'people/'.$argument;
      $np = explode('/', drupal_lookup_path('source', $arg));
      if (!empty($np[1])) {
        $nid = $np[1];
        $node = node_load($nid);
        $handler->argument = $nid;
        $handler->validated_title = "Blog - " . $node->title;
        return TRUE;
      } else {
        return FALSE;
      }
    }
    else {
      return FALSE;
    }
  }
}