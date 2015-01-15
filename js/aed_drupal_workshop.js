(function ($) {
  Drupal.behaviors.aedDrupalWorkshop = {
    attach: function (context, settings) {
      // This is a basic example of how add js in Drupal, you can watch more info at:
      // Managing Javascript in Drupal 7: https://www.drupal.org/node/756722
      $('.click-span', context).once('aedDrupalWorkshop', function () {
        $('.text-toogle').hide();
        $(this, context).click(function(e){
          $('.text-toogle').toggle();
        });
      });
    }
  };
})(jQuery);