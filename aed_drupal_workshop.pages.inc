<?php
/**
 * @file Contains page callbacks for aed_drupal_workshop module.
 */

/**
 * Return the render output for aed-drupal-workshop/url-param/% path.
 * @param $param
 */
function aed_drupal_workshop_url_param($param) {
  // Sanitize the URL param to avoid user attacks. You can see more Sanitization functions at
  // https://api.drupal.org/api/drupal/includes!common.inc/group/sanitization/7
  $param = check_plain($param);
  $module_path = drupal_get_path('module', 'aed_drupal_workshop');

  // We fefine an array which will use for get a HTML output using Drupal Render API.
  $render = array(
    '#theme' => 'url_parameter',
    '#param' => $param,
    '#header_text' => t('This is the header text'),
    '#attached' => array(
      'css' => array($module_path . '/css/aed_drupal_workshop.css'),
      'js' => array($module_path . '/js/aed_drupal_workshop.js'),
    ),
  );

  // If param is numeric and node exists, render it!
  if (is_numeric($param) && aed_drupal_workshop_check_node_exists($param)) {
    // Here we use:
    //  * node_view: For getting a node ready to be displayed.
    //  * node_load: For load the hole node information.
    $render['#node_rendered'] = node_view(node_load($param));
  }

  return $render;
}
