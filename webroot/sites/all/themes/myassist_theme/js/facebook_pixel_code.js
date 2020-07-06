(function ($) {
  var path_name= $(location).attr('pathname');

  /* FB pixel implementation guide: https://www.facebook.com/business/help/952192354843755 */
  !function(f,b,e,v,n,t,s){if(f.fbq)return;n=f.fbq=function(){n.callMethod?
  n.callMethod.apply(n,arguments):n.queue.push(arguments)};if(!f._fbq)f._fbq=n;
  n.push=n;n.loaded=!0;n.version='2.0';n.queue=[];t=b.createElement(e);t.async=!0;
  t.src=v;s=b.getElementsByTagName(e)[0];s.parentNode.insertBefore(t,s)}(window,
  document,'script','//connect.facebook.net/en_US/fbevents.js');
  fbq('init', '563165187542561');
  fbq('track', "PageView");

  // If a user has completed registration, track event
  if (path_name == "/node/561" || path_name == "/din-bruger-er-oprettet") {
    fbq('track', 'CompleteRegistration');
  }
})(jQuery);
