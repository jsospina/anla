<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
   <div class="team-box col-lg-4 col-md-4 col-sm-4"<?php print $content_attributes; ?>>
		<div class="team-image">
			 <?php print render($content['field_team_image']); ?>
		</div> 
		<h3><?php print $title; ?></h3>
		<span class="team-position"><?php print render($content['field_team_position']); ?></span>
   </div>
	<div class="col-lg-8 col-md-8 col-sm-8">
		<div class="team-body">
			<p><?php print render($content['body']); ?></p>
		</div>
	</div>
</div> 