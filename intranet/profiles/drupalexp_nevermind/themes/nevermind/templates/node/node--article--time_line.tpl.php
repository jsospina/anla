<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
 <div class="blog-columns">
  <!-- Begin blog Content -->
  <div class="blog-content">
    <div class="title">
      <h3><a title="" href="<?php print $node_url;?>"><?php print $title;?></a></h3>
    </div><!-- end title -->
    <p><?php print strip_tags(render($content['body']));?>..</p>
	  <span class="blog-date"><?php print date ('d M y', $created);?></span>
  </div> <!-- End blog Content -->
  </div>
  </div>