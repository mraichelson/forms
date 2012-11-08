<?php
/**
 * @file
 * feature_kittens.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_kittens_taxonomy_default_vocabularies() {
  return array(
    'kitten_types' => array(
      'name' => 'Kinds of Kittens',
      'machine_name' => 'kitten_types',
      'description' => NULL,
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
