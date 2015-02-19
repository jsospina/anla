jQuery(document).ready(function($) {
 
  // Auto clear default value field
  $('.form-text,.form-textarea').cleardefault();
  // Tooltips 
  $('.bs-example-tooltips').tooltip({
    selector: "[data-toggle=tooltip]",
    container: "body"
  });
  $('.dtooltip').tooltip({
    container: 'body'
  });
  $("#bs-example a").popover();
  
  $(".stat-count").each(function() {
    //alert('ok');
    $(this).data('count', parseInt($(this).html(), 10));
    $(this).html('0');
    count($(this));
  });
  //Go to top
  $(window).scroll(function(){
    if($(this).scrollTop() > 100) {
      $('#go-to-top').css({
        bottom:"25px"
      });
    } else {
      $('#go-to-top').css({
        bottom:"-100px"
      });
    }
  });
  $('#go-to-top').click(function(){
    $('html, body').animate({
      scrollTop: '0px'
    }, 800);
    return false;
  });
 
});

function count($this) {
  var current = parseInt($this.html(), 10);
  current = current + 1; /* Where 50 is increment */

  $this.html(++current);
  if (current > $this.data('count')) {
    $this.html($this.data('count'));
  } else {
    setTimeout(function() {
      count($this)
    }, 50);
  }
}
jQuery.fn.cleardefault = function() {
  return this.focus(function() {
    if (this.value == this.defaultValue) {
      this.value = "";
    }
  }).blur(function() {
    if (!this.value.length) {
      this.value = this.defaultValue;
    }
  });
};