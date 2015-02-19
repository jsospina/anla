<?php
/**
 * @file
 * dexp_eventus.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dexp_eventus_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dexp_eventus_node_info() {
  $items = array(
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'commercial' => array(
      'name' => t('Commercial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'expo_clients_' => array(
      'name' => t('Expo Clients'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Expo Clients '),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
