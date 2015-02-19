<?php
/**
* @file field.tpl.php
* Default template implementation to display the value of a field.
*
* This file is not used and is here as a starting point for customization only.
* @see theme_field()
*
* Available variables:
* - $items: An array of field values. Use render() to output them.
* - $label: The item label.
* - $label_hidden: Whether the label display is set to 'hidden'.
* - $classes: String of classes that can be used to style contextually through
* CSS. It can be manipulated through the variable $classes_array from
* preprocess functions. The default values can be one or more of the
* following:
* - field: The current template type, i.e., "theming hook".
* - field-name-[field_name]: The current field name. For example, if the
* field name is "field_description" it would result in
* "field-name-field-description".
* - field-type-[field_type]: The current field type. For example, if the
* field type is "text" it would result in "field-type-text".
* - field-label-[label_display]: The current label position. For example, if
* the label position is "above" it would result in "field-label-above".
*
* Other variables:
* - $element['#object']: The entity to which the field is attached.
* - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
* - $element['#field_name']: The field name.
* - $element['#field_type']: The field type.
* - $element['#field_language']: The field language.
* - $element['#field_translatable']: Whether the field is translatable or not.
* - $element['#label_display']: Position of label display, inline, above, or
* hidden.
* - $field_name_css: The css-compatible field name.
* - $field_type_css: The css-compatible field type.
* - $classes_array: Array of html class attribute values. It is flattened
* into a string within the variable $classes.
*
* @see template_preprocess_field()
* @see theme_field()
*
* @ingroup themeable
*/
?>
<?php $has_sidebar = count(block_list('sidebar')) > 0; ?> 
<div class="product-images <?php print $classes; ?>"<?php print $attributes; ?>>
      <?php
      $num_images = count($items);
      $lightboxrel = "product_".$num_images;
		if( $has_sidebar ) : 
         foreach ($items as $delta => $item): 
				$path_image = file_create_url($item['#item']['uri']);
				if ($delta == 0) :?>
					<div class="ImageWrapper image-wrap">
						<img class="img-thumbnail" src="<?php print $path_image;?>" alt="" />
						<div class="overlay">
							<a href="<?php print $path_image;?>" class="zoom clearfix" title="" rel="lightbox[<?php print $lightboxrel;?>]">				
								<span><i class="fa fa-expand"></i></span>
							</a>
						</div>
					</div>   
			<?php else:?>    
				 <?php if ($delta == 1) :?>
				 <div class="thumbnails-side clearfix has-sidebar">
					<ul class="product-bxslider list-unstyled">
				 <?php endif; ?>
						<li class="col-lg-4 col-md-4 col-sm-6 col-xs-6">
							<div class="image-wrap has-sidebar">
								<img class="img-thumbnail" src="<?php print $path_image;?>" alt="" />
								<div class="overlay">
									<a href="<?php print $path_image;?>" class="zoom clearfix" title="" rel="lightbox[<?php print $lightboxrel;?>]">				
										<span><i class="fa fa-expand"></i></span>
									</a>
								</div>
							</div>
						</li>
				 <?php if ($delta == $num_images - 1) :?>
					</ul>
				 </div>
				 <?php endif; ?>    
			<?php endif; ?>
		<?php 
			endforeach;
		else :
			foreach ($items as $delta => $item): 
				 $path_image = file_create_url($item['#item']['uri']);
				if($num_images > 1):
					if ($delta == 0) : ?>
						<div class="col-lg-9 col-md-9 col-sm-9 col-xs-9">
							<div class="ImageWrapper image-wrap">
								<img class="img-thumbnail" src="<?php print $path_image;?>" alt="" />
								<div class="overlay">
									<a href="<?php print $path_image;?>" class="zoom clearfix" title="" rel="lightbox[<?php print $lightboxrel;?>]">				
										<span><i class="fa fa-expand"></i></span>
									</a>
								</div>
							</div>   
						</div>
					<?php else:?>    
						 <?php if ($delta == 1) :?>
						 <div class="thumbnails-side col-lg-3 col-md-3 col-sm-3 col-xs-3">
						 <?php endif; ?>
							<div class="image-wrap">
								<img class="img-thumbnail" src="<?php print $path_image;?>" alt="" />
								<div class="overlay">
									<a href="<?php print $path_image;?>" class="zoom clearfix" title="" rel="lightbox[<?php print $lightboxrel;?>]">				
										<span><i class="fa fa-expand"></i></span>
									</a>
								</div>
							</div>
						 <?php if ($delta == $num_images - 1) :?>      
						 </div>
						 <?php endif; ?>    
					<?php endif; ?>
				<?php else : ?>
					<div class="ImageWrapper image-wrap">
						<img class="img-thumbnail" src="<?php print $path_image;?>" alt="" />
						<div class="overlay">
							<a href="<?php print $path_image;?>" class="zoom clearfix" title="" rel="lightbox[<?php print $lightboxrel;?>]">				
								<span><i class="fa fa-expand"></i></span>
							</a>
						</div>
					</div>
				<?php endif; ?>
			<?php endforeach; ?>
		<?php endif; ?>
</div> 