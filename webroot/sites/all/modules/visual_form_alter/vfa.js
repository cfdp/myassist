/**
 * @file
 * Javascript for showing the edit buttons for forms
 */

(function ($) {
  "use strict";

  Drupal.behaviors.heatMapShow = {
    attach: function (context, settings) {
      $('.vfa-pre').on('mouseover', function() {
          $(this).children('.vfa-link').show();
      });
      
      $('.vfa-pre').on('mouseout', function() {
          $(this).children('.vfa-link').hide();
      });
    }
  }
})(jQuery);
   