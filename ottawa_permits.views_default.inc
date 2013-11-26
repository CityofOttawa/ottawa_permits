<?php
/**
 * @file
 * ottawa_permits.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ottawa_permits_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'permit_application_license';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Permit, Application License';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'servicepane';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permit_application_and_licence' => 'permit_application_and_licence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;

  /* Display: Permit search pane */
  $handler = $view->new_display('panel_pane', 'Permit search pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_permit_type_value_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'title' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permit_application_and_licence' => 'permit_application_and_licence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filter criterion: Content: Permit type (field_permit_type) (translated) */
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['id'] = 'field_permit_type_value_i18n';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['table'] = 'field_data_field_permit_type';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['field'] = 'field_permit_type_value_i18n';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['value'] = array(
    'Building permits and renovating' => 'Building permits and renovating',
    'Business Licensing' => 'Business Licensing',
    'Health and Safety' => 'Health and Safety',
    'Parking Permits' => 'Parking Permits',
    'Right-of-way' => 'Right-of-way',
    'Signs' => 'Signs',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['group'] = 2;
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['operator_id'] = 'field_permit_type_value_i18n_op';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['label'] = 'Permits, Business Licences and Application Types';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['operator'] = 'field_permit_type_value_i18n_op';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['identifier'] = 'field_permit_type_value';
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    17 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_permit_type_value_i18n']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keyword Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'recherche-search1';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    16 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    17 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Permit listing */
  $handler = $view->new_display('panel_pane', 'Permit listing', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business licenses, applications, and permits';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Approximate Cost */
  $handler->display->display_options['fields']['field_approximate_cost']['id'] = 'field_approximate_cost';
  $handler->display->display_options['fields']['field_approximate_cost']['table'] = 'field_data_field_approximate_cost';
  $handler->display->display_options['fields']['field_approximate_cost']['field'] = 'field_approximate_cost';
  $handler->display->display_options['fields']['field_approximate_cost']['alter']['text'] = '[field_approximate_cost] == Content: Approximate Cost';
  $handler->display->display_options['fields']['field_approximate_cost']['element_type'] = '0';
  $handler->display->display_options['fields']['field_approximate_cost']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_approximate_cost']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_approximate_cost']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_approximate_cost']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_approximate_cost']['field_api_classes'] = TRUE;
  /* Field: Content: Approximate Timeline */
  $handler->display->display_options['fields']['field_approximate_timeline']['id'] = 'field_approximate_timeline';
  $handler->display->display_options['fields']['field_approximate_timeline']['table'] = 'field_data_field_approximate_timeline';
  $handler->display->display_options['fields']['field_approximate_timeline']['field'] = 'field_approximate_timeline';
  $handler->display->display_options['fields']['field_approximate_timeline']['label'] = 'Approximate timeline';
  $handler->display->display_options['fields']['field_approximate_timeline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_approximate_timeline']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_approximate_timeline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_approximate_timeline']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_approximate_timeline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_approximate_timeline']['field_api_classes'] = TRUE;
  /* Field: Content: Requirements */
  $handler->display->display_options['fields']['field_requirements']['id'] = 'field_requirements';
  $handler->display->display_options['fields']['field_requirements']['table'] = 'field_data_field_requirements';
  $handler->display->display_options['fields']['field_requirements']['field'] = 'field_requirements';
  $handler->display->display_options['fields']['field_requirements']['label'] = 'Permit Requirements';
  $handler->display->display_options['fields']['field_requirements']['element_type'] = '0';
  $handler->display->display_options['fields']['field_requirements']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_requirements']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_requirements']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_requirements']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_requirements']['field_api_classes'] = TRUE;
  /* Field: Content: Who to Contact */
  $handler->display->display_options['fields']['field_who_to_contact']['id'] = 'field_who_to_contact';
  $handler->display->display_options['fields']['field_who_to_contact']['table'] = 'field_data_field_who_to_contact';
  $handler->display->display_options['fields']['field_who_to_contact']['field'] = 'field_who_to_contact';
  $handler->display->display_options['fields']['field_who_to_contact']['element_type'] = '0';
  $handler->display->display_options['fields']['field_who_to_contact']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_who_to_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_who_to_contact']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_who_to_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_who_to_contact']['field_api_classes'] = TRUE;
  /* Field: Content: Where to Apply */
  $handler->display->display_options['fields']['field_where_to_apply']['id'] = 'field_where_to_apply';
  $handler->display->display_options['fields']['field_where_to_apply']['table'] = 'field_data_field_where_to_apply';
  $handler->display->display_options['fields']['field_where_to_apply']['field'] = 'field_where_to_apply';
  $handler->display->display_options['fields']['field_where_to_apply']['element_type'] = '0';
  $handler->display->display_options['fields']['field_where_to_apply']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_where_to_apply']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_where_to_apply']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_where_to_apply']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_where_to_apply']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permit_application_and_licence' => 'permit_application_and_licence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Permit download */
  $handler = $view->new_display('panel_pane', 'Permit download', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Application Form';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: PDF form */
  $handler->display->display_options['fields']['field_pdf_form']['id'] = 'field_pdf_form';
  $handler->display->display_options['fields']['field_pdf_form']['table'] = 'field_data_field_pdf_form';
  $handler->display->display_options['fields']['field_pdf_form']['field'] = 'field_pdf_form';
  $handler->display->display_options['fields']['field_pdf_form']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_form']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pdf_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_form']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pdf_form']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_form']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pdf_form']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permit_application_and_licence' => 'permit_application_and_licence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Related Permits  */
  $handler = $view->new_display('panel_pane', 'Related Permits ', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'You may be interested in';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Application type (field_application_type) (translated) */
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['id'] = 'field_application_type_tid_i18n';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['field'] = 'field_application_type_tid_i18n';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['default_argument_options']['vocabularies'] = array(
    'application_type' => 'application_type',
  );
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_application_type_tid_i18n']['validate_options']['vocabularies'] = array(
    'application_type' => 'application_type',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permit_application_and_licence' => 'permit_application_and_licence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $export['permit_application_license'] = $view;

  return $export;
}
