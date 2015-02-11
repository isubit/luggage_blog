<?php
/**
 * @file
 * luggage_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lug_blog content'.
  $permissions['create lug_blog content'] = array(
    'name' => 'create lug_blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lug_blog content'.
  $permissions['delete any lug_blog content'] = array(
    'name' => 'delete any lug_blog content',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lug_blog content'.
  $permissions['delete own lug_blog content'] = array(
    'name' => 'delete own lug_blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lug_blog content'.
  $permissions['edit any lug_blog content'] = array(
    'name' => 'edit any lug_blog content',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lug_blog content'.
  $permissions['edit own lug_blog content'] = array(
    'name' => 'edit own lug_blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
