<?php
/**
 * @file
 * Filtered results pane plugin definition.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Subscribe to events button'),
  'description' => t('Represents a button for getting ICS file.'),
  'category' => t('Ding!'),
  'render callback' => 'ding_event_subscriptions_subscribe_pane_render',
  'all contexts' => TRUE,
);

/**
 * Calendar results custom pane renderer.
 */
function ding_event_subscriptions_subscribe_pane_render() {
  global $base_url;
  $path = drupal_get_path('module', 'ding_event_subscriptions');

  $block = new stdClass();
  $block->title = '';
  $os = ding_event_subscriptions_get_os();
  $reference = ding_event_subscriptions_generate_url();
  if (in_array($os, array('iOS', 'Mac'))) {
    $block->content = array(
      '#markup' => l(t('Download this calendar for mobile or PC'), $reference, array(
        'attributes' => array(
          'class' => array('ding-event-subscriptions'),
        ),
      )),
      '#attached' => array(
        'css' => array($path . '/css/ding_event_subscriptions.css'),
      ),
    );
  }
  else {
    $block->content = array(
      '#markup' => l(t('Download this calendar for mobile or PC'), '#', array(
        'attributes' => array(
          'class' => array('ding-event-subscriptions'),
          'data-reference' => $reference,
          'data-domain' => $base_url,
        ),
      )),
      '#attached' => array(
        'js' => array($path . '/js/ding_event_subscriptions.js'),
        'css' => array($path . '/css/ding_event_subscriptions.css'),
      ),
    );
  }

  return $block;
}
