<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
   
	<div class="portfolio-media">
      <a href="<?php print $node_url;?>"><?php print render($content['field_portfolio_images']); ?></a>
		
		<div class="portfolio-overlay">
			<h3 class="portfolio-title"><a href="<?php print $node_url;?>"><?php print $title;?></a></h3>
			<div class="portfolio-category">
				<i class="fa fa-folder-open-o"></i>
				<?php print strip_tags(render($content['field_portfolio_categories']));?>
			</div>
		</div>
   </div>
	 
</div>