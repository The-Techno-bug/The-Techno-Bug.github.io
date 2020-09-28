$('body').append('<div style="" id="loadingDiv"><div class="loader">Loading...</div></div>');
$(window).on('load', function(){
  setTimeout(removeLoader, 1000); 
});
function removeLoader(){
  $( "#loadingDiv" ).fadeOut(500, function() {
  $( "#loadingDiv" ).remove();
});  
}