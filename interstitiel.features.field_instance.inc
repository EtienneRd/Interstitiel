<?php
/**
 * @file
 * interstitiel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function interstitiel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-interstitiel-field_interstl_content'
  $field_instances['node-interstitiel-field_interstl_content'] = array(
    'bundle' => 'interstitiel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interstl_content',
    'label' => 'Interstitiel content',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-interstitiel-field_interstl_displayonpages'
  $field_instances['node-interstitiel-field_interstl_displayonpages'] = array(
    'bundle' => 'interstitiel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List pages url where this box has to be displayed. One url by line.
Keep empty to display box in all pages',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interstl_displayonpages',
    'label' => 'Display on pages',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-interstitiel-field_interstl_notdisplayonpages'
  $field_instances['node-interstitiel-field_interstl_notdisplayonpages'] = array(
    'bundle' => 'interstitiel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List pages url where this box has not to be displayed. One url by line.
Keep empty to display box in all pages',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interstl_notdisplayonpages',
    'label' => 'Not display on pages',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-interstitiel-field_interstl_persistence'
  $field_instances['node-interstitiel-field_interstl_persistence'] = array(
    'bundle' => 'interstitiel',
    'default_value' => array(
      0 => array(
        'value' => 'first',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interstl_persistence',
    'label' => 'Persistence',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display on pages');
  t('Interstitiel content');
  t('List pages url where this box has not to be displayed. One url by line.
Keep empty to display box in all pages');
  t('List pages url where this box has to be displayed. One url by line.
Keep empty to display box in all pages');
  t('Not display on pages');
  t('Persistence');

  return $field_instances;
}
