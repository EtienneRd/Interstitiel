<?php
/**
 * @file
 * interstitiel.features.inc
 */

/**
 * Implements hook_node_info().
 */
function interstitiel_node_info() {
  $items = array(
    'interstitiel' => array(
      'name' => t('Interstitiel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
