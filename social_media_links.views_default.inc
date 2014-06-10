<?php
/**
 * @file
 * social_media_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function social_media_links_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'social_media_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_social_media_links';
  $view->human_name = 'Social Media Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'inline-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'right';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Social Media Links: URL */
  $handler->display->display_options['fields']['field_sml_url']['id'] = 'field_sml_url';
  $handler->display->display_options['fields']['field_sml_url']['table'] = 'field_data_field_sml_url';
  $handler->display->display_options['fields']['field_sml_url']['field'] = 'field_sml_url';
  $handler->display->display_options['fields']['field_sml_url']['label'] = '';
  $handler->display->display_options['fields']['field_sml_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sml_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sml_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sml_url']['type'] = 'link_absolute';
  /* Field: Social Media Links: Font Awesome Icon */
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['id'] = 'field_sml_font_awesome_icon';
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['table'] = 'field_data_field_sml_font_awesome_icon';
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['field'] = 'field_sml_font_awesome_icon';
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['label'] = '';
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['alter']['text'] = '<a href="[field_sml_url]">[field_sml_font_awesome_icon-value]</a>';
  $handler->display->display_options['fields']['field_sml_font_awesome_icon']['element_label_colon'] = FALSE;
  /* Filter criterion: Social Media Links: social_media_links type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_social_media_links';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'social_media_links' => 'social_media_links',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['social_media_links'] = $view;

  return $export;
}
