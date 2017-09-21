<?php
/**
 * @file
 * ding_event_subscriptions.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function ding_event_subscriptions_field_group_info_alter(&$data) {
  if (isset($data['group_left|node|ding_event|default'])) {
    $data['group_left|node|ding_event|default']->data['children']['4'] = 'field_ding_event_subscriptions'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ding_event_subscriptions_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__ding_event'])) {
    $data['field_bundle_settings_node__ding_event']->value['extra_fields']['display']['field_ding_event_subscriptions'] = array(
      'default' => array(
        'weight' => 7,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
  }
}
