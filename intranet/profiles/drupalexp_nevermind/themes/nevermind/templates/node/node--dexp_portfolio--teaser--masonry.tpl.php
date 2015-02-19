<?php
  $image = '';
  if(isset($node->field_portfolio_images[$node->language])){
    $image = file_create_url($node->field_portfolio_images[$node->language][0]['uri']);
  }
	$portfolio_images = field_get_items('node', $node, 'field_portfolio_images');
	$image = '';
	if ($portfolio_images) {
		foreach ($portfolio_images as $k => $portfolio_image) {
			if ($k == 0) {
				$image = file_create_url($portfolio_image['uri']);
			}
		}
	}
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="portfolio-item-inner" style="background-image: url(<?php print $image;?>)">
    <div class="portfolio-item-overlay">
			<h3 class="portfolio-title"><a href="<?php print $node_url;?>"><?php print $title;?></a></h3>
			<div class="portfolio-category">
				<i class="fa fa-folder-open"></i>
				<?php print strip_tags(render($content['field_portfolio_categories']));?>
			</div>
		</div>
  </div>
</div>