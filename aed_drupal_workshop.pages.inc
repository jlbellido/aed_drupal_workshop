<?php
/**
 * @file Contains page callbacks for aed_drupal_workshop module.
 */

/**
 * //@TODO: Complete
 * @param $param
 */
function aed_drupal_workshop_url_param($param) {
  $param = check_plain($param);

  $render = array(
    '#theme' => 'url_parameter',
    '#param' => $param,
    '#header_text' => t('This is the header text'),
  );

  // If param is numeric and node exists, render it!
  if (is_numeric($param) && aed_drupal_workshop_check_node_exists($param)) {
    $render['#node_rendered'] = node_view(node_load($param));
  }

  return $render;
}
