<?php

/**
 * @file
 * uaqs_content_chunks_extra_info.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_content_chunks_extra_info_defaultconfig_features() {
  return array(
    'uaqs_content_chunks_extra_info' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_content_chunks_extra_info_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__uaqs_extra_info';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'uaqs_align_left' => array(
        'custom_settings' => TRUE,
      ),
      'uaqs_align_right' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__uaqs_extra_info'] = $strongarm;

  return $export;
}
