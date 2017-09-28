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

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_3.conf|display|content|new-05a7891f-60a5-4df6-9537-ac832dd3fdbd"] = (object) array(
      'pid' => 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd',
      'panel' => 'attachment_1_1',
      'type' => 'des_subscribe',
      'subtype' => 'des_subscribe',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '05a7891f-60a5-4df6-9537-ac832dd3fdbd',
    );
  $overrides["page_manager_handlers.node_view_panel_context_3.conf|display|content|new-0d5ac3d3-3666-431f-8672-226f8d6b8694|position"] = 3;
  $overrides["page_manager_handlers.node_view_panel_context_3.conf|display|hide_title"] = 2;
  $overrides["page_manager_handlers.node_view_panel_context_3.conf|display|panels|attachment_1_1|2"] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd';
  $overrides["page_manager_handlers.node_view_panel_context_3.conf|display|panels|attachment_1_1|3"] = 'new-0d5ac3d3-3666-431f-8672-226f8d6b8694';
  $overrides["page_manager_handlers.term_view_panel_context.conf|display|content|new-05a7891f-60a5-4df6-9537-ac832dd3fdbd"] = (object) array(
      'pid' => 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd',
      'panel' => 'main_content',
      'type' => 'des_subscribe',
      'subtype' => 'des_subscribe',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '05a7891f-60a5-4df6-9537-ac832dd3fdbd',
    );
  $overrides["page_manager_handlers.term_view_panel_context.conf|display|content|new-3cb95651-0650-42f1-a8bd-e56688d1a4aa|position"] = 3;
  $overrides["page_manager_handlers.term_view_panel_context.conf|display|hide_title"] = 2;
  $overrides["page_manager_handlers.term_view_panel_context.conf|display|panels|main_content|2"] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd';
  $overrides["page_manager_handlers.term_view_panel_context.conf|display|panels|main_content|3"] = 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_events.default_handlers|page_ding_events_panel_context|conf|display|content|new-05a7891f-60a5-4df6-9537-ac832dd3fdbd"] = (object) array(
      'pid' => 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd',
      'panel' => 'main_content',
      'type' => 'des_subscribe',
      'subtype' => 'des_subscribe',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '05a7891f-60a5-4df6-9537-ac832dd3fdbd',
    );
  $overrides["page_manager_pages.ding_events.default_handlers|page_ding_events_panel_context|conf|display|content|new-5d683c57-a79e-4d16-9046-d2dc04a557d5|position"] = 1;
  $overrides["page_manager_pages.ding_events.default_handlers|page_ding_events_panel_context|conf|display|panels|main_content|0"] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd';
  $overrides["page_manager_pages.ding_events.default_handlers|page_ding_events_panel_context|conf|display|panels|main_content|1"] = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5';
  $overrides["page_manager_pages.ding_events.default_handlers|page_ding_events_panel_context|conf|display|title_pane"] = 0;
  $overrides["page_manager_pages.ding_events_library.default_handlers|page_ding_events_library_panel_context|conf|display|content|new-05a7891f-60a5-4df6-9537-ac832dd3fdbd"] = (object) array(
      'pid' => 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd',
      'panel' => 'main_content',
      'type' => 'des_subscribe',
      'subtype' => 'des_subscribe',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '05a7891f-60a5-4df6-9537-ac832dd3fdbd',
    );
  $overrides["page_manager_pages.ding_events_library.default_handlers|page_ding_events_library_panel_context|conf|display|content|new-9bb644a0-3601-4ce3-a16a-c32dd13c12da|position"] = 2;
  $overrides["page_manager_pages.ding_events_library.default_handlers|page_ding_events_library_panel_context|conf|display|panels|main_content|1"] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd';
  $overrides["page_manager_pages.ding_events_library.default_handlers|page_ding_events_library_panel_context|conf|display|panels|main_content|2"] = 'new-9bb644a0-3601-4ce3-a16a-c32dd13c12da';

 return $overrides;
}
