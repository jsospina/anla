<?php if( count($items) <= 1 || $element['#view_mode']=="teaser" ):?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php if (!$label_hidden): ?>
<div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
<?php endif; ?>
<div class="field-items"<?php print $content_attributes; ?>>
<?php foreach ($items as $delta => $item): ?>
  <?php if($delta==0) : ?>
<div class="field-imges-overlay field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
  <?php print render($item); ?>
  <?php $node = $element['#object'];?>
  <?php if ($element['#view_mode'] == 'dexp_portfolio' && $node->field_type[$node->language][0]['value'] == 'fa-picture-o'):?>
  <div class="overlay">
      <a href="<?php print url("node/".$node->nid);?>" title="Read this article...">
        <i class="fa fa-plus"></i>
      </a>
  </div>
  <?php endif;?>
</div>
  <?php endif; ?>
<?php endforeach; ?>
</div>
</div> 
<?php else:
  $carousel_id = drupal_html_id('dexp_carousel');
?>
<div id="<?php print $carousel_id;?>" class="carousel slide dexp_carousel <?php print $classes; ?>"<?php print $attributes; ?> data-ride="carousel">
  <!-- Wrapper for slides -->
  <div class="carousel-inner">
    <?php foreach ($items as $delta => $item): ?>
    <div class="item field-item <?php print $delta == 0 ? 'active':'';?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
    <?php endforeach; ?>
  </div>

  <!-- Controls -->
  <a class="left carousel-control" href="#<?php print $carousel_id;?>" data-slide="prev">
    <span class="fa fa-angle-left"></span>
  </a>
  <a class="right carousel-control" href="#<?php print $carousel_id;?>" data-slide="next">
    <span class="fa fa-angle-right"></span>
  </a>
</div>
<?php endif;?>