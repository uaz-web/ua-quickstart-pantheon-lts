<?php
/**
 * @file
 * uaqs_content_chunks_carousel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uaqs_content_chunks_carousel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_uaqs_carousel'.
  $field_bases['field_uaqs_carousel'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_uaqs_carousel',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
