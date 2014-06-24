<?php
/**
 * @file
 * bibsdb_editor_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function bibsdb_editor_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Bibsdb.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'Bibsdb',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
