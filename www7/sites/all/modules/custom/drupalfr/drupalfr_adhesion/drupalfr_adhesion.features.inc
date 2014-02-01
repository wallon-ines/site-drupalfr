<?php
/**
 * @file
 * drupalfr_adhesion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalfr_adhesion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalfr_adhesion_node_info() {
  $items = array(
    'adhesion' => array(
      'name' => t('Adhésion'),
      'base' => 'node_content',
      'description' => t('Adhésion à l\'association Drupal France et francophonie'),
      'has_title' => '1',
      'title_label' => t('Adhésion'),
      'help' => '',
    ),
  );
  return $items;
}
