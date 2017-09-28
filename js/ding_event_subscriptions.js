(function ($) {
  'use strict';

  Drupal.behaviors.dingEventSubscriptions = {
    attach: function (context, settings) {
      $('.page-arrangementer .pane-des-subscribe').once().insertAfter('.separator-title:first');

      $('.ding-event-subscriptions', context).on('click', function (e) {
        e.preventDefault();
        window.location.href = $(this).data('reference');
      })
    }
  };

})(jQuery);
