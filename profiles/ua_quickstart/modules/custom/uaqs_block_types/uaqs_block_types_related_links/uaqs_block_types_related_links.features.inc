<?php

/**
 * @file
 * uaqs_block_types_related_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uaqs_block_types_related_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
