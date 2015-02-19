<div id="node-<?php print $node->nid; ?>" class="portfolio-wrap <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <!-- Begin title blog region teaser mode!-->
  <!-- Begin media blog or quote -->
  <div class="portfolio-media">
    <?php print render($content['field_portfolio_images']); ?>
    <div class="portfolio-overlay">
        <a href="<?php print $node_url;?>" title="">
          <i class="fa fa-plus"></i>
        </a>
    </div>
  </div>
  <!-- End media blog or quote -->
  <div class="portfolio-detail">
      <h3><a title="<?php print $title;?>" href="<?php print $node_url;?>"><?php print $title;?></a></h3>
		<div class="portfolio-body"><?php print render($content['body']); ?></div>
    <div class="portfolio-category">
				<i class="fa fa-folder-open-o"></i>
				<?php print strip_tags(render($content['field_portfolio_categories']));?>
			</div>
  </div>
  <!-- End title blog region teaser mode!-->
  
</div>