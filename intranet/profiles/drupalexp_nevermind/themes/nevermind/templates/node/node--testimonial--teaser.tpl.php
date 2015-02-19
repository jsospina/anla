<div id="<?php print $node->nid; ?>" class="testimonials-wrap <?php print $classes; ?>">
		<div class="testimonial-image">
		<?php print render($content['field_testimonial_image']); ?>	
		</div>
		<h3 class="testimonial-name"><?php print strip_tags(render($content['field_testimonial_name'])); ?></h3>
		<div class="testimonial-content">
			<?php print render($content['body']); ?>
		</div>
</div>