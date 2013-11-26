<?php
/**
 * @file
 * ottawa_permits.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ottawa_permits_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Permit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Book parent',
        'keyword' => 'book_parent',
        'name' => 'book_parent',
        'type' => 'parent',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'permit_application_and_licence' => 'permit_application_and_licence',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Permits, Business Licences and Applications
%node:title',
    'panels_breadcrumbs_paths' => 'permits-licenses-and-applications
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'cityott_two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'cityott_two_66_33_top' => NULL,
      'cityott_two_66_33_first' => NULL,
      'cityott_two_66_33_second' => NULL,
      'cityott_two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b59b316e-3a50-e314-19ac-c794200441a6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2eae2b35-b2a1-5814-d58b-973b59ca78e7';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pdf_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Application Form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2eae2b35-b2a1-5814-d58b-973b59ca78e7';
    $display->content['new-2eae2b35-b2a1-5814-d58b-973b59ca78e7'] = $pane;
    $display->panels['cityott_two_66_33_first'][0] = 'new-2eae2b35-b2a1-5814-d58b-973b59ca78e7';
    $pane = new stdClass();
    $pane->pid = 'new-3d84f484-64da-3134-f5a2-12814b8698ad';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_additional_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'fallback_format' => 'text_default',
        'click_to_edit' => 0,
        'empty_text' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Testing',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d84f484-64da-3134-f5a2-12814b8698ad';
    $display->content['new-3d84f484-64da-3134-f5a2-12814b8698ad'] = $pane;
    $display->panels['cityott_two_66_33_first'][1] = 'new-3d84f484-64da-3134-f5a2-12814b8698ad';
    $pane = new stdClass();
    $pane->pid = 'new-b871b3b1-60ce-b9f4-bd2c-b4558ff4d658';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'permit_application_license-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b871b3b1-60ce-b9f4-bd2c-b4558ff4d658';
    $display->content['new-b871b3b1-60ce-b9f4-bd2c-b4558ff4d658'] = $pane;
    $display->panels['cityott_two_66_33_first'][2] = 'new-b871b3b1-60ce-b9f4-bd2c-b4558ff4d658';
    $pane = new stdClass();
    $pane->pid = 'new-43f15654-5b1a-1b14-edce-3da9dce5acb3';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'boxes-permit_testing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '43f15654-5b1a-1b14-edce-3da9dce5acb3';
    $display->content['new-43f15654-5b1a-1b14-edce-3da9dce5acb3'] = $pane;
    $display->panels['cityott_two_66_33_first'][3] = 'new-43f15654-5b1a-1b14-edce-3da9dce5acb3';
    $pane = new stdClass();
    $pane->pid = 'new-8ad64a70-5bcb-bc14-61b8-ed5e3802f192';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_service_icon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'custom_formatters_wetkit_lightbox',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style_destination' => 'thumbnail',
        'image_style_source' => 'thumbnail',
        'custom_class' => 'image-actual',
        'image_style' => 'panopoly_image_thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ad64a70-5bcb-bc14-61b8-ed5e3802f192';
    $display->content['new-8ad64a70-5bcb-bc14-61b8-ed5e3802f192'] = $pane;
    $display->panels['cityott_two_66_33_second'][0] = 'new-8ad64a70-5bcb-bc14-61b8-ed5e3802f192';
    $pane = new stdClass();
    $pane->pid = 'new-e07e3420-df81-d2e4-69a7-2cda510e9fe4';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e07e3420-df81-d2e4-69a7-2cda510e9fe4';
    $display->content['new-e07e3420-df81-d2e4-69a7-2cda510e9fe4'] = $pane;
    $display->panels['cityott_two_66_33_second'][1] = 'new-e07e3420-df81-d2e4-69a7-2cda510e9fe4';
    $pane = new stdClass();
    $pane->pid = 'new-4bfeccc2-9f06-7074-497d-e632620a1cd9';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4bfeccc2-9f06-7074-497d-e632620a1cd9';
    $display->content['new-4bfeccc2-9f06-7074-497d-e632620a1cd9'] = $pane;
    $display->panels['cityott_two_66_33_second'][2] = 'new-4bfeccc2-9f06-7074-497d-e632620a1cd9';
    $pane = new stdClass();
    $pane->pid = 'new-9a823610-d6e9-80d4-9d4b-d6be571aa8c8';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9a823610-d6e9-80d4-9d4b-d6be571aa8c8';
    $display->content['new-9a823610-d6e9-80d4-9d4b-d6be571aa8c8'] = $pane;
    $display->panels['cityott_two_66_33_second'][3] = 'new-9a823610-d6e9-80d4-9d4b-d6be571aa8c8';
    $pane = new stdClass();
    $pane->pid = 'new-825e79c0-f6d3-e504-817e-13f210b6ecbe';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'permit_application_license-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '825e79c0-f6d3-e504-817e-13f210b6ecbe';
    $display->content['new-825e79c0-f6d3-e504-817e-13f210b6ecbe'] = $pane;
    $display->panels['cityott_two_66_33_second'][4] = 'new-825e79c0-f6d3-e504-817e-13f210b6ecbe';
    $pane = new stdClass();
    $pane->pid = 'new-12aac651-acd7-e484-ed95-afaa938a76b0';
    $pane->panel = 'cityott_two_66_33_top';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12aac651-acd7-e484-ed95-afaa938a76b0';
    $display->content['new-12aac651-acd7-e484-ed95-afaa938a76b0'] = $pane;
    $display->panels['cityott_two_66_33_top'][0] = 'new-12aac651-acd7-e484-ed95-afaa938a76b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a823610-d6e9-80d4-9d4b-d6be571aa8c8';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ottawa_permits_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'permits_application_and_license';
  $page->task = 'page';
  $page->admin_title = 'Permits, Business Licences and Applications';
  $page->admin_description = '';
  $page->path = 'permits-licenses-and-applications';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_permits_application_and_license_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'permits_application_and_license';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'cityott_two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'cityott_two_66_33_top' => NULL,
      'cityott_two_66_33_first' => NULL,
      'cityott_two_66_33_second' => NULL,
      'cityott_two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Permits, Business Licences and Applications';
  $display->uuid = '02d28f14-5cab-3204-999c-9240c2281298';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24e454f3-b770-dcc4-7549-9e07ba1129dc';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-43b1e4469e3cb49a109d8773d694bbfc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dark-gray',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24e454f3-b770-dcc4-7549-9e07ba1129dc';
    $display->content['new-24e454f3-b770-dcc4-7549-9e07ba1129dc'] = $pane;
    $display->panels['cityott_two_66_33_first'][0] = 'new-24e454f3-b770-dcc4-7549-9e07ba1129dc';
    $pane = new stdClass();
    $pane->pid = 'new-021ad7ed-833a-cca4-d1bd-bb5cb723711e';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:8abf375d-ac5a-e664-89bc-5b6df2b6c60c';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dark-gray-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '021ad7ed-833a-cca4-d1bd-bb5cb723711e';
    $display->content['new-021ad7ed-833a-cca4-d1bd-bb5cb723711e'] = $pane;
    $display->panels['cityott_two_66_33_second'][0] = 'new-021ad7ed-833a-cca4-d1bd-bb5cb723711e';
    $pane = new stdClass();
    $pane->pid = 'new-67e369b8-159e-15d4-75bb-83433084abdc';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'permit_application_license-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67e369b8-159e-15d4-75bb-83433084abdc';
    $display->content['new-67e369b8-159e-15d4-75bb-83433084abdc'] = $pane;
    $display->panels['cityott_two_66_33_second'][1] = 'new-67e369b8-159e-15d4-75bb-83433084abdc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['permits_application_and_license'] = $page;

  return $pages;

}
