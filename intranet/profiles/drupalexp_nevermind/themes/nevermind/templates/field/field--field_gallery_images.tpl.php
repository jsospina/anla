<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php $gid = drupal_html_id('gallery'); ?>
	<?php foreach ($items as $delta => $item): ?>
		<?php
			$path = file_create_url($item['#item']['uri']);
		?>
		<?php if( $delta == 0 ) : ?>
			<a href="<?php print $path; ?>" rel="lightbox[<?php print $gid; ?>]">
				<?php print render($item); ?>
			</a>
		<?php else : ?>
			<a href="<?php print $path; ?>" rel="lightbox[<?php print $gid; ?>]" style="display: none;">
				<?php print render($item); ?>
			</a>
		<?php endif; ?>
	<?php endforeach; ?>
</div>