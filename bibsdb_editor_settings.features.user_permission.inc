<?php
/**
 * @file
 * bibsdb_editor_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibsdb_editor_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'use text format html'.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'guest blogger' => 'guest blogger',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
