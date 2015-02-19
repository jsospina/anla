<?php
function drupalexp_profile_blocks(&$blocks,$default_theme){
	$blocks[] = array(
      'module' => 'dexp_menu',
      'delta' => 'dexp_menu_block_1',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'navigation',
      'pages' => '',
      'cache' => -1,
    );
	$blocks[] = array(
      'module' => 'system',
      'delta' => 'main',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'content',
      'pages' => '',
      'cache' => -1,
    );
  $blocks[] = array(
      'module' => 'search',
      'delta' => 'form',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => -1,
      'region' => 'sidebar',
      'pages' => '',
      'cache' => -1,
    );
	$blocks[] = array(
      'module' => 'user',
      'delta' => 'login',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'sidebar',
      'pages' => '',
      'cache' => -1,
    );
   $blocks[] = array(
      'module' => 'system',
      'delta' => 'powered-by',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 10,
      'region' => 'copyright',
      'pages' => '',
      'cache' => -1,
    );

}