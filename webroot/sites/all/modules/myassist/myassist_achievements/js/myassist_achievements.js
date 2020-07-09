(function ($) {
  /**
  * Update the recent leaderboard activity block with correct css classes after ajax call
  *
  **/
  Drupal.behaviors.myassist_achievements_behaviors = {
    attach: function (context, settings) {
      $('#load-leaderboard-lb-block').once('myassist_achievements_lb', function () {
        $time_selector_week = '#load-leaderboard-lb-block #ajax-this-week';
        $time_selector_month = '#load-leaderboard-lb-block #ajax-this-month';
        $( $time_selector_month ).addClass('active');
        $( $time_selector_week ).removeClass('active');
        // Add / remove classes when ajax call finishes
        $(document).ajaxComplete(function (e, xhr, settings) {
          if (settings.url === '/da/achievements/leaderboard_recent/ajax/7') {
            $( $time_selector_week ).addClass('active');
            $( $time_selector_month ).removeClass('active');
          }
          else if (settings.url === '/da/achievements/leaderboard_recent/ajax/30') {
            $( $time_selector_month ).addClass('active');
            $( $time_selector_week ).removeClass('active');
          }
        });
      });
    }
  }
})(jQuery);
