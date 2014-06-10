<?php
/**
 * @file
 * social_media_links.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function social_media_links_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'social_media_links-social_media_links-field_sml_font_awesome_icon'
  $field_instances['social_media_links-social_media_links-field_sml_font_awesome_icon'] = array(
    'bundle' => 'social_media_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'social_media_links',
    'field_name' => 'field_sml_font_awesome_icon',
    'label' => 'Font Awesome Icon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'social_media_links-social_media_links-field_sml_url'
  $field_instances['social_media_links-social_media_links-field_sml_url'] = array(
    'bundle' => 'social_media_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'social_media_links',
    'field_name' => 'field_sml_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Font Awesome Icon');
  t('URL');

  return $field_instances;
}
