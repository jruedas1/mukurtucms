<?php

/**
 * @file
 * template.php
 */
function mukurtu_starter_preprocess_field(&$variables, $hook) {
    $element = $variables['element'];

    // Add anchors for Person type full view
    if(!empty($element['#object']->type) && $element['#object']->type == 'person' && $element['#view_mode'] == 'full') {

        // Related People
        if($element['#field_name'] == 'field_related_people') {
            $variables['items'][key($variables['items'])]['#prefix'] = '<a name="related-people"></a>';
        }

        // Sections
        $section_number = 1;
        if($element['#field_name'] == 'field_sections') {
            foreach($element['#items'] as $index => $section) {
                foreach($variables['items'][$index]['entity']['paragraphs_item'] as $p_index => $paragraph) {
                    $variables['items'][$index]['entity']['paragraphs_item'][$p_index]['#prefix'] = '<a name="section-' . $section_number++ . '"></a>';
                }
            }
        }
    }
}

/**
* Implements hook_node_view_alter().
*/
function mukurtu_starter_node_view_alter(&$build) {
    // For DH items, only show author if user has edit rights
    if($build['#entity_type'] == 'node' && $build['#bundle'] == 'digital_heritage' && $build['#view_mode'] == 'full') {
        if(!user_is_logged_in() || !node_access('update', $build['#node'])) {
            $build['author']['#access'] = FALSE;
        }
    }
}