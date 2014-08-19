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
    'roles' => array(),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'use text format html'.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
      'staff' => 'staff',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
