<div id="node-<?php print $node->nid; ?>" class="portfolio-teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
   
	<div class="portfolio-media">
      <?php print render($content['field_portfolio_images']); ?>
		<div class="overlay-zoom">
			<a href="<?php print $node_url;?>"><i class="fa fa-search"></i></a>
		</div>
    </div>
    <div class="portfolio-content">
      <h3 class="portfolio-title"><a href="<?php print $node_url;?>"><?php print $title;?></a></h3>
      <div class="portfolio-category">
			<i class="fa fa-folder-open-o"></i>
			<?php print render($content['field_portfolio_categories']);?>
		</div>
	 </div>
	 
</div>