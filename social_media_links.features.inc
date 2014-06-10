<?php
/**
 * @file
 * social_media_links.features.inc
 */

/**
 * Implements hook_views_api().
 */
function social_media_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function social_media_links_eck_bundle_info() {
  $items = array(
  'social_media_links_social_media_links' => array(
  'machine_name' => 'social_media_links_social_media_links',
  'entity_type' => 'social_media_links',
  'name' => 'social_media_links',
  'label' => 'Social Media Links',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function social_media_links_eck_entity_type_info() {
$items = array(
       'social_media_links' => array(
  'name' => 'social_media_links',
  'label' => 'Social Media Links',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
  );
  return $items;
}
