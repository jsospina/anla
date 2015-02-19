<?php 
$has_sidebar = count(block_list('sidebar')) > 0; 
$class_image = "clearfix";
$class_content = "clearfix";
if(!$has_sidebar) {
  $class_image  = "col-lg-8 col-md-8 col-sm-6 col-xs-12";
  $class_content = "col-lg-4 col-md-4 -col-sm-6 col-xs-12";
}

?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content row"<?php print $content_attributes; ?>>

		<div class="portfolio-image <?php print $class_image; ?>">
			<?php print render($content['field_portfolio_images']) ?>
		</div>
		<div class="portfolio-content <?php print $class_content; ?>">
			<h3 class="portfolio-detail"><?php print t('Item Description');?></h3>
			<?php print render($content['body']); ?>
      <hr />
      
      <div class="panel-group default" id="dexp-accordions-wrapper-<?php print $node->nid; ?>">
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-<?php print $node->nid; ?>--1" data-toggle="collapse" data-parent="#dexp-accordions-wrapper-<?php print $node->nid; ?>" class="">Item Details
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-<?php print $node->nid; ?>--1" class="panel-collapse collapse in">
            <div class="panel-body">
              <ul class="portfolio-details">
                <li><strong>Date :</strong> <?php print format_date($created, 'custom', 'm Y'); ?></li>
                <li><strong>Client :</strong> <?php print strip_tags(render($content['field_portfolio_client'])); ?></li>
                <li><strong>Website :</strong> <?php print strip_tags(render($content['field_portfolio_url'])); ?></li>
                <li><strong>Skills :</strong> <?php print strip_tags(render($content['field_portfolio_skills'])); ?></li>
                <li><strong>Category:</strong> <?php print strip_tags(render($content['field_portfolio_categories'])); ?></li>
              </ul>
            </div>
          </div>
        </div>
        
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-<?php print $node->nid; ?>--2" data-toggle="collapse" data-parent="#dexp-accordions-wrapper-<?php print $node->nid; ?>" class="collapsed">
              Need Similar Project?
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-<?php print $node->nid; ?>--2" class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_portfolio_similar']); ?>
              <p><a class="btn btn-primary btn-sm" href="#">Get a Quote</a></p>
            </div>
          </div>
        </div>
      </div>
  </div>
  <?php print render($content['links']); ?>
  <?php 
  //print render($content['comments']); 
  ?>
  </div>
</div>