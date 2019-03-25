<?php
/**
 * @file
 * bibsdb_editor_settings.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function bibsdb_editor_settings_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: html.
  $profiles['html'] = array(
    'format' => 'html',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'da',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Styles' => 1,
          'Table' => 1,
          'SelectAll' => 1,
          'CreateDiv' => 1,
          'Maximize' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => 'config.disallowedContent = \'h4\';',
      'css_setting' => 'self',
      'css_path' => '/profiles/ding2/themes/ddbasic/css/ddbasic.wysiwyg.css',
      'stylesSet' => 'Brødtekst=p
Overskrift - stor=h2
Overskrift - lille=h3
',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 1,
    ),
    'preferences' => array(
      'add_to_summaries' => 1,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '4.9.2.95e5d83',
    ),
    'name' => 'formathtml',
  );

  return $profiles;
}
