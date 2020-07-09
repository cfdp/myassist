<?php
/**
 * @file
 * myassist_achievements.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myassist_achievements_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'achievements_leaderboard_count_per_page';
  $strongarm->value = '20';
  $export['achievements_leaderboard_count_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'achievements_leaderboard_relative';
  $strongarm->value = 'disabled';
  $export['achievements_leaderboard_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'achievements_leaderboard_relative_nearby_ranks';
  $strongarm->value = '2';
  $export['achievements_leaderboard_relative_nearby_ranks'] = $strongarm;

  return $export;
}
