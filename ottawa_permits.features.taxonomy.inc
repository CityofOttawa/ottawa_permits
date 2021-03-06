<?php
/**
 * @file
 * ottawa_permits.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ottawa_permits_taxonomy_default_vocabularies() {
  return array(
    'application_type' => array(
      'name' => 'Application Type',
      'machine_name' => 'application_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'permit_type' => array(
      'name' => 'Permit Type',
      'machine_name' => 'permit_type',
      'description' => 'Type of Permit, Application and license',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
