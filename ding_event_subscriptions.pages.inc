<?php
/**
 * @file
 * Contains all pages callback and related functions.
 */

/**
 * Page callback for processing and generating ICS file based on GET params.
 */
function ding_event_subscriptions_callback() {
  $output = '';
  $params = drupal_get_query_parameters();

  if (!empty($params['library'])) {
    $library = $params['library'];
  }
  else {
    $library = NULL;
  }

  if (!empty($params['category'])) {
    $category = $params['category'];
  }
  else {
    $category = NULL;
  }

  $events = ding_event_subscriptions_get_events($params);
  $output .= theme('ding_event_subscriptions_ics',
    array(
      'events' => $events,
      'library' => $library,
      'category' => $category,
    )
  );
  drupal_add_http_header('Content-type', 'text/calendar; charset=utf-8');
  drupal_add_http_header('Content-Disposition', 'inline; filename="calendar.ics"');

  echo $output;
  drupal_exit();
}
