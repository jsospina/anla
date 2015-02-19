<div id="<?php print $element_id;?>" class="skill-bar row" data-percent="<?php print $percent;?>">
  <?php if ($content) :?>
	<div class="skill-bar-title col-md-4 col-lg-4 col-sm-12 col-xs-12 text-center"><span><?php print $content." - ".$percent."%";?></span></div>
  <?php endif;?>
  <?php if($percent):?>
  <div class="bar-wrap progress col-md-8  col-lg-4 col-sm-12 col-xs-12">
    <span class="background" style="width: 0"></span>
  </div>
  <?php endif;?>
</div>
<script type="text/javascript">
  jQuery(document).ready(function($){
    var $skillbar = $('#<?php print $element_id;?>');
    var percent = $skillbar.data('percent');
    //Make sure appear plugin is loaded
    if(typeof $.fn.appear == 'function'){
      $skillbar.appear(function(){
        $skillbar.find('.background').css({width:percent+'%'});
      });
    }else{
      $skillbar.find('.background').css({width:percent+'%'});
    }
  });
</script> 