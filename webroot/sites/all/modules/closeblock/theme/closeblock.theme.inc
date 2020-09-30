<?php

/**
 * @file
 * Function to return block id string.
 */

/**
 * Get block id.
 *
 * @return string
 *   Block id string.
 */
function theme_closeblock_block_id($vars) {
  return ('block-' . str_replace('_', '-', $vars['module']) . '-' . str_replace('_', '-', $vars['delta']));
}
