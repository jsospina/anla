<?php $has_sub_title = false;
if (strpos($content, '~')):
  $has_sub_title = true;
  $title_array = explode('~', $content);
  $main_title = $title_array[0];
  $sub_title = $title_array[1];
endif; ?>
<div class="<?php print $class; ?>">
<?php if ($has_sub_title): ?>
        <h2 class="block-title"><span><?php print $main_title; ?></span></h2>
        <p class="lead"><?php print $sub_title; ?></p>
    <?php else: ?>
        <h2 class="block-title"><span><?php print $content; ?></span></h2>
<?php endif; ?>
</div> 