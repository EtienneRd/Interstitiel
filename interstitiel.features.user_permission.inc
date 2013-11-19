<?php
/**
 * @file
 * interstitiel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function interstitiel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create interstitiel content'.
  $permissions['create interstitiel content'] = array(
    'name' => 'create interstitiel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any interstitiel content'.
  $permissions['delete any interstitiel content'] = array(
    'name' => 'delete any interstitiel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own interstitiel content'.
  $permissions['delete own interstitiel content'] = array(
    'name' => 'delete own interstitiel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any interstitiel content'.
  $permissions['edit any interstitiel content'] = array(
    'name' => 'edit any interstitiel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own interstitiel content'.
  $permissions['edit own interstitiel content'] = array(
    'name' => 'edit own interstitiel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
