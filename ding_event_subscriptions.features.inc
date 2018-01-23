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
    $data['group_left|node|ding_event|default']->data['children']['4'] = 'field_ding_event_subscriptions'; /* WAS: 'field_place2book_tickets' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ding_event_subscriptions_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context_3'])) {
    $data['node_view_panel_context_3']->conf['display']->content['new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context_3']->conf['display']->content['new-0d5ac3d3-3666-431f-8672-226f8d6b8694']->position = 3; /* WAS: 2 */
    $data['node_view_panel_context_3']->conf['display']->hide_title = 2; /* WAS: 0 */
    $data['node_view_panel_context_3']->conf['display']->panels['attachment_1_1']['2'] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'; /* WAS: 'new-0d5ac3d3-3666-431f-8672-226f8d6b8694' */
    $data['node_view_panel_context_3']->conf['display']->panels['attachment_1_1']['3'] = 'new-0d5ac3d3-3666-431f-8672-226f8d6b8694'; /* WAS: '' */
  }
  if (isset($data['term_view_panel_context'])) {
    $data['term_view_panel_context']->conf['display']->content['new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'] = (object) array(
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
        ); /* WAS: '' */
    $data['term_view_panel_context']->conf['display']->content['new-3cb95651-0650-42f1-a8bd-e56688d1a4aa']->position = 3; /* WAS: 2 */
    $data['term_view_panel_context']->conf['display']->hide_title = 2; /* WAS: 1 */
    $data['term_view_panel_context']->conf['display']->panels['main_content']['2'] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'; /* WAS: 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa' */
    $data['term_view_panel_context']->conf['display']->panels['main_content']['3'] = 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function ding_event_subscriptions_default_page_manager_pages_alter(&$data) {
  if (isset($data['ding_events'])) {
    $data['ding_events']->default_handlers['page_ding_events_panel_context']->conf['display']->content['new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'] = (object) array(
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
        ); /* WAS: '' */
    $data['ding_events']->default_handlers['page_ding_events_panel_context']->conf['display']->content['new-5d683c57-a79e-4d16-9046-d2dc04a557d5']->position = 1; /* WAS: 0 */
    $data['ding_events']->default_handlers['page_ding_events_panel_context']->conf['display']->panels['main_content']['0'] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'; /* WAS: 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5' */
    $data['ding_events']->default_handlers['page_ding_events_panel_context']->conf['display']->panels['main_content']['1'] = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5'; /* WAS: '' */
    $data['ding_events']->default_handlers['page_ding_events_panel_context']->conf['display']->title_pane = 0; /* WAS: 'new-585c8154-7b8f-4b93-95cf-b4109fe22671' */
  }
  if (isset($data['ding_events_library'])) {
    $data['ding_events_library']->default_handlers['page_ding_events_library_panel_context']->conf['display']->content['new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'] = (object) array(
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
        ); /* WAS: '' */
    $data['ding_events_library']->default_handlers['page_ding_events_library_panel_context']->conf['display']->content['new-9bb644a0-3601-4ce3-a16a-c32dd13c12da']->position = 2; /* WAS: 1 */
    $data['ding_events_library']->default_handlers['page_ding_events_library_panel_context']->conf['display']->panels['main_content']['1'] = 'new-05a7891f-60a5-4df6-9537-ac832dd3fdbd'; /* WAS: 'new-9bb644a0-3601-4ce3-a16a-c32dd13c12da' */
    $data['ding_events_library']->default_handlers['page_ding_events_library_panel_context']->conf['display']->panels['main_content']['2'] = 'new-9bb644a0-3601-4ce3-a16a-c32dd13c12da'; /* WAS: '' */
  }
}
