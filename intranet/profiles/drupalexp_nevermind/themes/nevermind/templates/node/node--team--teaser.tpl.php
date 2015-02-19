<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="text-center dexp-shortcodes-box box-none box-custom">
    <div class="box-image icn-main-container">
      <?php print render($content['field_team_image']); ?>
    </div>
    <h3><?php print $title; ?></h3>
    <span class="box-position"><?php print strip_tags(render($content['field_team_position'])); ?></span>
    <p><?php print render($content['body']); ?></p>
  </div>
</div>
