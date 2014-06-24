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

  // Exported profile: html
  $profiles['html'] = array(
    'format' => 'html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Styles' => 1,
          'Table' => 1,
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
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'self',
      'css_path' => 'http://betabib.sonderborg.dk/profiles/ding2/themes/ddbasic/css/ddbasic.styles.css, %b%t/css/bibsdb.styles.css, %b%t/css/bibsdb.editor.css',
      'css_classes' => 'Brødtekst=p
Overskrift - stor=h4
Overskrift - middel=h5
Overskrift - lille=h6
Infoboks overskrift - grå=h4.bibsdb-infobox-header-gray 
Infoboks brødtekst - grå=p.bibsdb-infobox-body-gray ',
    ),
  );

  return $profiles;
}
