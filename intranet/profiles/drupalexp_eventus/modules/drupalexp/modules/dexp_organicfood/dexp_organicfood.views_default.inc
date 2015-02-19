<?php
/**
 * @file
 * dexp_organicfood.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dexp_organicfood_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog Home Farm';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Blog */
  $handler = $view->new_display('page', 'Blog', 'page_blog');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'blog';

  /* Display: From The Blog */
  $handler = $view->new_display('block', 'From The Blog', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'REFRESH THE BLOG';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'refresh-blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Blog Slider Front */
  $handler = $view->new_display('block', 'Blog Slider Front', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slider-post';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '4000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '6';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '4';
  $handler->display->display_options['style_options']['moveslides'] = '1';
  $handler->display->display_options['style_options']['slidewidth'] = '200';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'slider';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $export['blog'] = $view;

  $view = new view();
  $view->name = 'clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '4000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '30';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '6';
  $handler->display->display_options['style_options']['moveslides'] = '0';
  $handler->display->display_options['style_options']['slidewidth'] = '150';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<span data-toggle="tooltip" data-container="body" data-placement="top" title="[title]">[field_image]</span>
';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clients' => 'clients',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Clients';
  $export['clients'] = $view;

  $view = new view();
  $view->name = 'modern_organic_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Modern Organic Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products That We Produce';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '4000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '0';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '6';
  $handler->display->display_options['style_options']['moveslides'] = '0';
  $handler->display->display_options['style_options']['slidewidth'] = '120';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organic_products' => 'organic_products',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['modern_organic_products'] = $view;

  $view = new view();
  $view->name = 'recipes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recipes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 col-lg-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-unstyled clearfix';
  $handler->display->display_options['style_options']['wrapper_class'] = 'row';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipes' => 'recipes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'healthy-eating/recipes';
  $export['recipes'] = $view;

  $view = new view();
  $view->name = 'team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'dexp_grid2';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['grid_bootstrap'] = '1';
  $handler->display->display_options['style_options']['grid_cols_lg'] = '3';
  $handler->display->display_options['style_options']['grid_cols_md'] = '3';
  $handler->display->display_options['style_options']['grid_cols_sm'] = '3';
  $handler->display->display_options['style_options']['grid_cols_xs'] = '1';
  $handler->display->display_options['style_options']['grid_margin'] = '30';
  $handler->display->display_options['style_options']['grid_itemWidth'] = '360';
  $handler->display->display_options['style_options']['grid_itemHeight'] = '220';
  $handler->display->display_options['style_options']['grid_phoneWidth'] = '768';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'team' => 'team',
  );

  /* Display: Our Team 2 first */
  $handler = $view->new_display('block', 'Our Team 2 first', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'team-style-1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_grid2';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['grid_bootstrap'] = '1';
  $handler->display->display_options['style_options']['grid_cols_lg'] = '2';
  $handler->display->display_options['style_options']['grid_cols_md'] = '2';
  $handler->display->display_options['style_options']['grid_cols_sm'] = '2';
  $handler->display->display_options['style_options']['grid_cols_xs'] = '1';
  $handler->display->display_options['style_options']['grid_margin'] = '30';
  $handler->display->display_options['style_options']['grid_itemWidth'] = '360';
  $handler->display->display_options['style_options']['grid_itemHeight'] = '220';
  $handler->display->display_options['style_options']['grid_phoneWidth'] = '768';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Other Team Member's */
  $handler = $view->new_display('block', 'Other Team Member\'s', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'team-style-1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_grid2';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['grid_bootstrap'] = '1';
  $handler->display->display_options['style_options']['grid_cols_lg'] = '2';
  $handler->display->display_options['style_options']['grid_cols_md'] = '2';
  $handler->display->display_options['style_options']['grid_cols_sm'] = '2';
  $handler->display->display_options['style_options']['grid_cols_xs'] = '1';
  $handler->display->display_options['style_options']['grid_margin'] = '30';
  $handler->display->display_options['style_options']['grid_itemWidth'] = '360';
  $handler->display->display_options['style_options']['grid_itemHeight'] = '220';
  $handler->display->display_options['style_options']['grid_phoneWidth'] = '768';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $export['team'] = $view;

  $view = new view();
  $view->name = 'testimonial';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonial';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['auto'] = '1';
  $handler->display->display_options['style_options']['pause'] = '6000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '0';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '0';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '1';
  $handler->display->display_options['style_options']['moveslides'] = '1';
  $handler->display->display_options['style_options']['slidewidth'] = '1000';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="color-white">Our Happy Customers</h3>
<p>Do eiusmod tempor incididunt ut labore dolore.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Testimonial Home */
  $handler = $view->new_display('block', 'Testimonial Home', 'block_1');
  $handler->display->display_options['display_description'] = 'Organic Farm Home: Testimonial';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '6000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '0';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '1';
  $handler->display->display_options['style_options']['moveslides'] = '1';
  $handler->display->display_options['style_options']['slidewidth'] = '200';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['label'] = '';
  $handler->display->display_options['fields']['field_client']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_client']['alter']['text'] = '<i class="fa fa-user"></i>[field_client]';
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Testimonial Home';

  /* Display: Testimonial Bottom */
  $handler = $view->new_display('block', 'Testimonial Bottom', 'block_2');
  $handler->display->display_options['display_description'] = 'Testimonial Bottom';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '6000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '0';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '0';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '1';
  $handler->display->display_options['style_options']['maxslides'] = '1';
  $handler->display->display_options['style_options']['moveslides'] = '1';
  $handler->display->display_options['style_options']['slidewidth'] = '200';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['label'] = '';
  $handler->display->display_options['fields']['field_client']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_client']['alter']['text'] = '<i class="fa fa-user"></i>[field_client]';
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Testimonial Bottom';
  $export['testimonial'] = $view;

  return $export;
}
