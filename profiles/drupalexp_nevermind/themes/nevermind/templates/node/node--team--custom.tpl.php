<div id="node-<?php print $node->nid; ?>" class="team-custom <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
		<div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
      <figure class="inverse">
				<?php print render($content['field_team_image']); ?>
  			<figcaption>
  			<h3><?php print $title; ?></h3>
  			<small><?php print strip_tags(render($content['field_team_position'])); ?></small><br>
  			<a title="" href="#">@<?php print $title; ?></a>
  			</figcaption>
			</figure>

   </div>
   <div class="col-lg-8 col-md-8 col-sm-8 col-xs-12">
			<div class="team-decs">
				<p><?php print render($content['body']); ?></p>
			</div>
		</div>
</div> 
