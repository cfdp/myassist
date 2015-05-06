/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Toggle menu on small screens
    $('.mm-toggle').click(function() {
      $('#mm').toggleClass('open');
    });

  }
};


  Drupal.behaviors.searchResponsive = {
    attach: function(context, settings) {

      $("#block-search-form .search-minimized").click(function(event){
        $("#block-search-form").addClass("forceShow");
      });

      $(document).click(function(event) {
        if(!$(event.target).closest("#block-search-form").length) {
          $("#block-search-form").removeClass("forceShow");
        }
      })

    }
  };

})(jQuery, Drupal, this, this.document);
