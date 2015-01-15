<?php
/**
 * @file Contains page callbacks for aed_drupal_workshop module.
 */

/**
 * //@TODO: Complete
 * @param $param
 */
function aed_drupal_workshop_url_param($param) {
  $render = array(
    '#theme' => 'url_parameter',
    '#param' => check_plain($param),
    '#header_text' => t('This is the header text'),
  );

  return $render;
}
