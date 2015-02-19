<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="forum-header">
		<div class="forum-reply-author">Author</div><!-- .forum-reply-author -->
		<div class="forum-reply-content">Posts</div><!-- .forum-reply-content -->
  </div><!-- .forum-header -->
  <div class="forum-body">
  
    <div class="forum-reply-header">
      <div class="forum-meta">
				<span class="forum-reply-post-date"><?php print format_date($created, 'custom', 'M d, Y'); ?> at <?php print format_date($created, 'custom', 'h:i a'); ?></span>
				<a class="forum-reply-permalink" href="#">#<?php print $comment; ?></a>	
			</div>
    </div><!-- .forum-reply-header -->
    
    <div class="forum-primary">
      <div class="forum-reply-author">
          <a rel="nofollow" class="forum-author-avatar" title="View admin's profile" href="<?php print url('user/'.$uid); ?>"><?php print $user_picture; ?></a><br />
          <a rel="nofollow" class="forum-author-name" title="View admin's profile" href="<?php print url('user/'.$uid); ?>"><?php print $name; ?></a><br />
      </div>
      
      <div class="forum-content">
        <?php print render($content['body']); ?>
      </div>
      
    </div><!-- .forum-primary -->
    
  </div><!-- .forum-body -->
  
  <div class="forum-footer">
		<div class="forum-reply-author">Author</div><!-- .forum-reply-author -->
		<div class="forum-reply-content">Posts</div><!-- .forum-reply-content -->
  </div><!-- .forum-footer-->
  
  <div class="forum-comments">
    <?php print render($content['links']); ?>
    <?php print render($content['comments']); ?>
  </div><!-- .forum-comments -->
  
</div>