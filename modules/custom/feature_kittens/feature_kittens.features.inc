<?php
/**
 * @file
 * feature_kittens.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kittens_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kittens_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kittens_node_info() {
  $items = array(
    'kittens' => array(
      'name' => t('Kittens'),
      'base' => 'node_content',
      'description' => t('A content type for capturing information about what people think about kittens.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
