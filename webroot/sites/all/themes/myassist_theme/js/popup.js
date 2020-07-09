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

  // Add questionnaire popup
  Drupal.behaviors.addPopup = {
    attach: function (context, settings) {
      $('body', context).once('add-popup', function () {
        var popupCookieSet = Drupal.behaviors.getPopupCookie();
        if(popupCookieSet !== "yes") {
          $('#block-block-26').bPopup({
           speed: 650,
           transition: 'slideIn',
           transitionClose: 'slideBack'
        });
        $('#decline-popup').click(Drupal.behaviors.setPopupCookie);
        }
      });
    }
  };

  Drupal.behaviors.setPopupCookie = function() {
    var date = new Date();
    date.setDate(date.getDate() + 7);
    // Remember for one week
    var cookie = "popup-declined=yes;expires=" + date.toUTCString() + ";path=" + Drupal.settings.basePath;

    document.cookie = cookie;
  };

  /**
   * Check if a cookie has been set for the client
   *
   * Verbatim copy of Drupal.comment.getCookie().
   */
  Drupal.behaviors.getPopupCookie = function() {
    var search = "popup-declined=";
    var returnValue = '';

    if (document.cookie.length > 0) {
      offset = document.cookie.indexOf(search);
      if (offset != -1) {
        offset += search.length;
        var end = document.cookie.indexOf(';', offset);
        if (end == -1) {
          end = document.cookie.length;
        }
        returnValue = decodeURIComponent(document.cookie.substring(offset, end).replace(/\+/g, '%20'));
      }
    }

    return returnValue;
  };

})(jQuery, Drupal, this, this.document);

