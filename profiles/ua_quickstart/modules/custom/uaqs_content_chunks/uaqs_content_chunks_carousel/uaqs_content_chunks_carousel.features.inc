<?php
/**
 * @file
 * uaqs_content_chunks_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uaqs_content_chunks_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function uaqs_content_chunks_carousel_paragraphs_info() {
  $items = array(
    'uaqs_carousel' => array(
      'name' => 'Carousel',
      'bundle' => 'uaqs_carousel',
      'locked' => '1',
    ),
  );
  return $items;
}
