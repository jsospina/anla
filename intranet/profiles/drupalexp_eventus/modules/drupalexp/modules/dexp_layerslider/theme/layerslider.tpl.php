<?php
/*
 * $sid: slide id
 * $slides: list of slide
 * $settings: global settings
 */
 global $base_url;
 $slide_id = drupal_html_id("dexp_layerslider");
?>
<div class="layerslider-bannercontainer" id="<?php print $slide_id;?>" style="max-height: <?php $settings->startheight;?>px">
  <div class="layerslider-banner">
    <ul>
      <?php foreach ($slides as $slide): ?>
        <li <?php print $slide->slide_link ? "data-link=\"$slide->slide_link\"" : ""  ?>
          data-transition = "<?php print $slide->data_transition; ?>"
          data-masterspeed = "<?php print $slide->data_masterspeed; ?>">
          <img src="<?php print $slide->background_image;?>" alt=""/>
          <?php foreach ($slide->layers as $layer): ?>
            <div class="caption <?php print $layer->incomingclasses?$layer->incomingclasses:""?> <?php print $layer->outgoingclasses?$layer->outgoingclasses:""?> <?php print ($layer->type=="text" && $layer->text_style)?$layer->text_style:""?>"
                 data-x="<?php print $layer->left;?>"
                 data-y="<?php print $layer->top;?>"
                 data-speed="<?php print $layer->data_speed;?>"
                 data-start="<?php print $layer->data_start;?>"
                 style="<?php print isset($layer->custom_css)?$layer->custom_css:'';?>"
                 <?php if($layer->incomingclasses == 'customin'):?>
                 data-customin="<?php print isset($layer->customin)?$layer->customin:'';?>"
                 <?php endif;?>
                 <?php if($layer->outgoingclasses == 'customout'):?>
                 data-customout="<?php print isset($layer->customout)?$layer->customout:'';?>"
                 <?php endif;?>
                 <?php if($layer->data_end):?>
                 data-end="<?php print $layer->data_end;?>"
                 <?php endif;?>
                 data-easing="<?php print $layer->data_easing;?>"
                 data-endeasing="<?php print $layer->data_endeasing;?>">
                 <?php if($layer->link):?>
                 <a href="<?php print url($layer->link)?>">
                 <?php endif;?>
                 <?php if ($layer->type == 'text'):?>
                 <?php print $layer->text;?>
                 <?php endif;?>
                 <?php if ($layer->type == 'image'):?>
                   <img data-lazyload="<?php print $layer->image;?>" src="<?php print drupal_get_path('module', 'dexp_layerslider').'/plugins/rs-plugin/assets/loader.gif';?>" alt=""/>
                 <?php endif;?>
                 <?php if ($layer->type == 'video'):?>
                  <?php if ($layer->video_type == 'vimeo'):?>
                    <iframe width="<?php print $layer->width;?>" height="<?php print $layer->height;?>" frameborder="0" src="http://player.vimeo.com/video/<?php print $layer->video;?>?title=0&amp;byline=0&amp;portrait=0;api=1"></iframe>
                  <?php else:?>
                    <iframe width="<?php print $layer->width;?>" height="<?php print $layer->height;?>" src="http://www.youtube.com/embed/<?php print $layer->video;?>?hd=1&amp;wmode=opaque&amp;controls=1&amp;showinfo=0" frameborder="0" allowfullscreen></iframe>
                  <?php endif;?>
                 <?php endif;?>
                 <?php if($layer->link):?>
                 </a>
                 <?php endif;?>
            </div>
          <?php endforeach; ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
</div>
<?php
$slidesetting = new stdClass();
$slidesetting->delay = $settings->delay;
$slidesetting->startheight = $settings->startheight;
$slidesetting->startwidth = $settings->startwidth;
//$slidesetting->hideThumbs = $settings->hideThumbs;
//$slidesetting->thumbWidth = $settings->thumbWidth;
//$slidesetting->thumbHeight = $settings->thumbHeight;
//$slidesetting->thumbAmount = $settings->thumbAmount;
$slidesetting->navigationType = $settings->navigationType;
$slidesetting->navigationArrows = $settings->navigationArrows;
$slidesetting->navigationStyle = $settings->navigationStyle;
$slidesetting->navigationHAlign = $settings->navigationHAlign;
$slidesetting->navigationVAlign = $settings->navigationVAlign;
$slidesetting->navigationHOffset = 0; //not done
$slidesetting->navigationVOffset = 20; //not done
$slidesetting->soloArrowLeftHalign = "left"; //not done
$slidesetting->soloArrowLeftValign = "center"; //not done
$slidesetting->soloArrowLeftHOffset = 0; //not done
$slidesetting->soloArrowLeftVOffset = 0; //not done
$slidesetting->soloArrowRightHalign = "right"; //not done
$slidesetting->soloArrowRightValign = "center"; //not done
$slidesetting->soloArrowRightHOffset = 0; //not done
$slidesetting->soloArrowRightVOffset = 0; //not done
$slidesetting->touchenabled = "on"; //not done
$slidesetting->onHoverStop = $settings->onHoverStop;
$slidesetting->stopAtSlide = -1; //not done
$slidesetting->stopAfterLoops = -1; //not done
$slidesetting->hideCaptionAtLimit = 0; //not done
$slidesetting->hideAllCaptionAtLilmit = 0; //not done
$slidesetting->hideSliderAtLimit = 0; //not done
$slidesetting->shadow = $settings->shadow;
$slidesetting->fullWidth = $settings->fullWidth;
$slidesetting->fullScreen = $settings->fullScreen;
$slidesetting->fullScreenOffsetContainer = $settings->fullScreenOffsetContainer;
$slidesetting->lazyLoad = 'on';
$slidesetting->soloArrowLeftHOffset =20;
$slidesetting->soloArrowRightHOffset =20;
$slidesetting = json_encode($slidesetting);
$js = "jQuery(document).ready(function($){if($.fn.cssOriginal!=undefined)$.fn.css = $.fn.cssOriginal;$('#{$slide_id} .layerslider-banner').revolution({$slidesetting});})";
//drupal_add_js($js, array('type' => 'inline'));
if ($settings->fullWidth == 'on') {
  $css = ".dexp_layerslider_wapper_{$sid}{width:100% !important;position:relative;padding:0;max-height:{$settings->startheight}px;height:{$settings->startheight}px;overflow:hidden;}";
} else {
  $css = ".dexp_layerslider_wapper_{$sid}{width:{$settings->startWidth}px;position:relative;padding:0;max-height:{$settings->startheight}px;overflow:hidden;}";
}
//$css .= "#dexp_layerslider_{$sid}{width:{$settings->startwidth}px;height:{$settings->startheight}px;position:relative;overflow:hidden;}";
//drupal_add_css($css, array('type' => 'inline'));
//print "<div class=\"{$bannercontainerclass} dexp_layerslider_wapper_{$sid}\" style=\"max-height:{$settings->startheight}px\">{$html}</div>";
?>
<script type="text/javascript">
<!--//--><![CDATA[//><!--
<?php print $js; ?>
//--><!]]>
</script>