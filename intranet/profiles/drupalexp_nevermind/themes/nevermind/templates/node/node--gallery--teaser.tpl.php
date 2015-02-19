<div id="<?php print $node->nid; ?>" class="gallery-box <?php print $classes; ?>">
	<div class="gallery-images">
		<?php print render($content['field_gallery_images']); ?>
	</div>
	<div class="gallery-titles">
		<h3><?php print $title; ?></h3>
	</div>
</div>