<?php
/**
 * @file
 * Provide views data and handlers for views_block_area.module
 */

/**
 * Implements hook_views_data()
 */
function views_block_area_views_data() {

  $data['views']['block'] = array(
    'area' => array(
      'title' => t('Block area'),
      'handler' => 'views_handler_area_block',
      'help' => t('Insert a block inside an area.'),
    ),
    'field' => array(
      'title' => t('Block field'),
      'handler' => 'views_handler_field_block',
      'help' => t('Insert a block inside a field.'),
    ),
  );

  return $data;

}
