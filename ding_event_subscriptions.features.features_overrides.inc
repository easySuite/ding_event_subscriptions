<?php
/**
 * @file
 * ding_event_subscriptions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_event_subscriptions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_left|node|ding_event|default.data|children|4"] = 'field_ding_event_subscriptions';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__ding_event.value|extra_fields|display|field_ding_event_subscriptions"] = array(
    'default' => array(
      'weight' => 7,
      'visible' => TRUE,
    ),
  );

 return $overrides;
}
