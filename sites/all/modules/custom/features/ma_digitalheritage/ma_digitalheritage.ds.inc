<?php
/**
 * @file
 * ma_digitalheritage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_digitalheritage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|community_record';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'community_record';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '9',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '27',
      'label' => 'above',
      'format' => 'author',
    ),
    'field_licence_trad' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clearfix',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|community_record'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'dh_related_items_teasers' => array(
      'weight' => '12',
      'label' => 'above',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '31',
      'label' => 'above',
      'format' => 'author_linked',
    ),
    'field_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_community_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_dh_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_related_dh_items' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Related Items',
        ),
      ),
    ),
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_licence_trad' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clearfix',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|map_popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'map_popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|digital_heritage|map_popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_media_asset' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'col-md-4 col-md-push-8',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|taxonomy_record_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'taxonomy_record_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|digital_heritage|taxonomy_record_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_media_asset' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|digital_heritage|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_digitalheritage_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dh_related_items_teasers';
  $ds_field->label = 'Related Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'digital_heritage|full';
  $ds_field->properties = array(
    'block' => 'views|dh_related_items_teasers-block',
    'block_render' => '3',
  );
  $export['dh_related_items_teasers'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_digitalheritage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|community_record';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'community_record';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_people',
        6 => 'field_transcription',
        7 => 'group_transcription_cr',
        8 => 'field_coverage',
        9 => 'field_coverage_description',
        10 => 'field_related_dh_items',
        12 => 'field_related_dictionary_words',
      ),
      'right' => array(
        11 => 'title',
        13 => 'field_community_ref',
        14 => 'og_group_ref',
        15 => 'field_category',
        16 => 'field_tags',
        17 => 'field_date',
        18 => 'field_creator',
        19 => 'field_contributor',
        20 => 'field_language',
        21 => 'field_rights',
        22 => 'field_licence_trad',
        23 => 'field_licence_std_cc',
        24 => 'field_source',
        25 => 'field_publisher',
        26 => 'field_identifier',
        27 => 'field_subject',
        28 => 'field_dh_type',
        29 => 'field_format',
        30 => 'author',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_people' => 'left',
      'field_transcription' => 'left',
      'group_transcription_cr' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'field_related_dh_items' => 'left',
      'title' => 'right',
      'field_related_dictionary_words' => 'left',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
      'author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|digital_heritage|community_record'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_tabs',
        1 => 'group_essentials',
        2 => 'group_mukurtu_core',
        3 => 'title',
        5 => 'group_licensing',
        7 => 'group_dublin',
        9 => 'group_relations',
        11 => 'body',
        12 => 'field_tk_body',
        13 => 'field_description',
        14 => 'field_tags',
        15 => 'field_format',
        16 => 'field_dh_type',
        17 => 'field_collection',
        18 => 'field_related_dh_items',
        19 => 'field_identifier',
        20 => 'field_related_dictionary_words',
        21 => 'field_language',
        22 => 'field_source',
        23 => 'field_community_record_children',
        24 => 'field_book_children',
        25 => 'field_subject',
        26 => 'field_people',
        27 => 'field_book_parent',
        28 => 'field_transcription',
        29 => 'field_coverage',
        30 => 'field_coverage_description',
        31 => 'field_publisher',
        32 => 'field_rights',
        33 => 'field_licence_trad',
        34 => 'field_licence_std_cc',
        35 => 'field_summary',
        36 => 'field_media_asset',
        37 => 'og_group_ref',
        38 => 'field_item_privacy_setting',
        39 => 'field_category',
        40 => 'field_creator',
        41 => 'field_contributor',
        42 => 'field_date',
      ),
      'hidden' => array(
        4 => 'field_community_record_parent',
        6 => 'path',
        8 => 'field_community_ref',
        10 => 'redirect',
        43 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_tabs' => 'ds_content',
      'group_essentials' => 'ds_content',
      'group_mukurtu_core' => 'ds_content',
      'title' => 'ds_content',
      'field_community_record_parent' => 'hidden',
      'group_licensing' => 'ds_content',
      'path' => 'hidden',
      'group_dublin' => 'ds_content',
      'field_community_ref' => 'hidden',
      'group_relations' => 'ds_content',
      'redirect' => 'hidden',
      'body' => 'ds_content',
      'field_tk_body' => 'ds_content',
      'field_description' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_format' => 'ds_content',
      'field_dh_type' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_related_dh_items' => 'ds_content',
      'field_identifier' => 'ds_content',
      'field_related_dictionary_words' => 'ds_content',
      'field_language' => 'ds_content',
      'field_source' => 'ds_content',
      'field_community_record_children' => 'ds_content',
      'field_book_children' => 'ds_content',
      'field_subject' => 'ds_content',
      'field_people' => 'ds_content',
      'field_book_parent' => 'ds_content',
      'field_transcription' => 'ds_content',
      'field_coverage' => 'ds_content',
      'field_coverage_description' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_licence_trad' => 'ds_content',
      'field_licence_std_cc' => 'ds_content',
      'field_summary' => 'ds_content',
      'field_media_asset' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_item_privacy_setting' => 'ds_content',
      'field_category' => 'ds_content',
      'field_creator' => 'ds_content',
      'field_contributor' => 'ds_content',
      'field_date' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_people',
        6 => 'group_transcription',
        7 => 'field_coverage',
        8 => 'field_coverage_description',
        9 => 'field_related_dh_items',
        10 => 'field_related_dictionary_words',
        11 => 'field_transcription',
        12 => 'comments',
      ),
      'right' => array(
        13 => 'dh_related_items_teasers',
        14 => 'field_community_ref',
        15 => 'og_group_ref',
        16 => 'field_category',
        17 => 'field_tags',
        18 => 'field_collection',
        19 => 'field_date',
        20 => 'field_creator',
        21 => 'field_contributor',
        22 => 'field_language',
        23 => 'field_rights',
        24 => 'field_licence_trad',
        25 => 'field_licence_std_cc',
        26 => 'field_source',
        27 => 'field_publisher',
        28 => 'field_identifier',
        29 => 'field_subject',
        30 => 'field_dh_type',
        31 => 'field_format',
        32 => 'author',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_people' => 'left',
      'group_transcription' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'field_related_dh_items' => 'left',
      'field_related_dictionary_words' => 'left',
      'field_transcription' => 'left',
      'comments' => 'left',
      'dh_related_items_teasers' => 'right',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_collection' => 'right',
      'field_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
      'author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|digital_heritage|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|map_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'map_popup';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_media_asset',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_media_asset' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|map_popup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media_asset',
        1 => 'title',
        2 => 'group_list_view_fields',
        3 => 'field_community_ref',
        4 => 'field_category',
        5 => 'field_summary',
      ),
    ),
    'fields' => array(
      'field_media_asset' => 'ds_content',
      'title' => 'ds_content',
      'group_list_view_fields' => 'ds_content',
      'field_community_ref' => 'ds_content',
      'field_category' => 'ds_content',
      'field_summary' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|taxonomy_record_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'taxonomy_record_teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'group_media_div',
        2 => 'field_media_asset',
        3 => 'group_metadata_div',
        4 => 'field_description',
        5 => 'field_date',
        6 => 'group_location_div',
        7 => 'field_community_ref',
        8 => 'field_coverage',
        9 => 'field_coverage_description',
        10 => 'field_category',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'group_media_div' => 'central',
      'field_media_asset' => 'central',
      'group_metadata_div' => 'central',
      'field_description' => 'central',
      'field_date' => 'central',
      'group_location_div' => 'central',
      'field_community_ref' => 'central',
      'field_coverage' => 'central',
      'field_coverage_description' => 'central',
      'field_category' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|digital_heritage|taxonomy_record_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_summary',
        2 => 'field_community_ref',
        3 => 'field_category',
      ),
      'right' => array(
        4 => 'field_media_asset',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_summary' => 'left',
      'field_community_ref' => 'left',
      'field_category' => 'left',
      'field_media_asset' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|digital_heritage|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ma_digitalheritage_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'community_record';
  $ds_view_mode->label = 'Community Record';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['community_record'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_popup';
  $ds_view_mode->label = 'Map Popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_popup'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'taxonomy_record_teaser';
  $ds_view_mode->label = 'Taxonomy Record Teaser';
  $ds_view_mode->entities = array(
    'scald_atom' => 'scald_atom',
    'node' => 'node',
  );
  $export['taxonomy_record_teaser'] = $ds_view_mode;

  return $export;
}
