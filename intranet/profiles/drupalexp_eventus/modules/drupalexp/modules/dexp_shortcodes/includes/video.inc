<?php

/**
 * Definition of Video Shortcode
 */

/**
 * Implements hook_shortcode_info
 */
function dexp_shortcodes_video_shortcode_info(&$shortcodes) {
	$shortcodes['video'] = array(
		'title' => t('Video'),
		'description' => t('Embed youtube/vimeo video'),
		'process callback' => 'dexp_shortcodes_video',
	);
	return $shortcodes;
}

/**
 * Icon Content
 */
function dexp_shortcodes_video($attrs, $text) {
	$attrs = shortcode_attrs(array(
			'type' => 'youtube',
			'ratio' => '1.776',
			'video_id' => ''
		),
		$attrs
	);
	
	return theme('dexp_shortcodes_video',$attrs);
}

/**
 * Video theme
 */
function dexp_shortcodes_video_theme(&$themes) {
	$path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_video'] = array(
      'template' => 'video',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_video',
      ),
      'variables' => array(
          'type' => '',
      )
  );
}

function dexp_shortcodes_preprocess_shortcode_video(&$vars){
	$type = $vars['type'];
	$video_id = $vars['video_id'];
	$vars['html_id'] = drupal_html_id('dexp_shortcode_video_'.REQUEST_TIME);
	if($type == 'youtube'){
		$vars['url'] = "https://www.youtube.com/embed/{$video_id}";
	}else{
		$vars['url'] = "http://player.vimeo.com/video/{$video_id}";
	}
	$vars['theme_hook_suggestions'][] = 'shortcode__video__' . $type;
}