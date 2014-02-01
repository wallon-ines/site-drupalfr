<?php
/**
 * @file
 * drupalfr_adhesion.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalfr_adhesion_user_default_roles() {
  $roles = array();

  // Exported role: adhérent.
  $roles['adhérent'] = array(
    'name' => 'adhérent',
    'weight' => '2',
  );

  return $roles;
}
