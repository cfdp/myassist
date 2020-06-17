<?php

/**
 * Block callback; show the recent best achievers on global leaderboard.
 *
 * @param int $d
 *   The time interval in number of days we want the leaderboard to reflect
 * @return
 *   Rendered output
 */
function myassist_achievements_lb_table($d = NULL) {
  global $base_url;
  $achievers = array();

  $days = ($d !== NULL) ? $d : variable_get('myassist_achievements_lb_recent_time_interval', 30);

  $start_time = strtotime($days . ' days ago');
  $end_time = strtotime('now');

  $query = db_select('userpoints_txn', 'ut');
//  $query->addTag('achievement_totals')->join('users', 'u', 'u.uid = at.uid');
  $query->fields('ut', array('uid', 'points', 'time_stamp'))
      ->condition('time_stamp', array($start_time, $end_time), 'BETWEEN');
  $query->range(0, 5);
  $alias = $query->addExpression('SUM(points)', 'sum_of_points');
  $query->groupBy('uid');
  $query->orderBy('sum_of_points', 'DESC');

  $achievers = $query->execute()->fetchAllAssoc('uid');

  $table = array(
    '#theme' => 'table',
    '#rows'=> array(),
    '#attributes' => array('class' => array('achievement-leaderboard')),
  );

  $position = 0;
  foreach ($achievers as $item) {
    ++$position;
    $user = user_load($item->uid);
    $name = $user->name;

    if (!empty($user->picture)) {
      $image = theme('image_style', array('path' => $user->picture->uri, 'style_name' => 'leaderboard_thumb'));
    }
    else {
      $custom_default_image_path = 'public://default_image.png';
      $image = theme('image_style', array('path' => variable_get('user_picture_default', $custom_default_image_path), 'style_name' => 'leaderboard_thumb'));
    }

    $path =  $base_url . '/user/' . $item->uid;
    $image = l($image,$path, array('attributes' => array('class' =>'link-image'),'html' => true));
    $name = l($name,$path, array('attributes' => array('class' =>'link-name')));
    $point = l($item->sum_of_points,$path, array('attributes' => array('class' =>'achievement-leaderboard-points')));

    $table['#rows'][] = array(
      array('data' => $position, 'class' => 'achievement-leaderboard-rank'),
      array('data' => $image, 'class' => 'achievement-leaderboard-userpicture'),
      array('data' => $name, 'class' => 'achievement-leaderboard-username'),
      array('data' => $point, 'class' => 'achievement-leaderboard-points'),
    );
  }
  $content = drupal_render($table);

  $pre = myassist_achievements_lb_ajax_header($days);
  $header = drupal_render($pre);
  $content = $header . $content;
  $post = myassist_achievements_lb_ajax_footer();
  $footer = drupal_render($post);
  $content = $content . $footer;

  return $content;
}

/**
 * Generate the header for the recent activity leaderboard block
 *
 * @param int $days
 *   The time interval in number of days we want the leaderboard to reflect
 * @return
 *   Render array containing the time interval options for the user
 */function myassist_achievements_lb_ajax_header($days) {
  $url_week = '/achievements/leaderboard_recent/nojs/7';
  $url_month = '/achievements/leaderboard_recent/nojs/30';

  $output = array(
    'first_para' => array(
      '#type' => 'markup',
      '#markup' => l(t('This week'), $url_week, array(
        'attributes' => array(
          'id' => 'ajax-this-week',
          'class' => array('use-ajax','greenbtn','time-selection')
        )
      )) . l(t('This month'), $url_month, array(
        'attributes' => array(
          'id' => 'ajax-this-month',
          'class' => array('use-ajax','greenbtn', 'time-selection')
        )
      )),
    ),
  );
  return $output;
}

/**
 * Return block footer.
 *
 * @return
 *   Render array
 */
function myassist_achievements_lb_ajax_footer() {
  $url_see_more = '/achievements/leaderboard ';
  $output = array(
    '#type' => 'markup',
    '#markup' => '<div class="achievement-see-more">' . l(t('View full leaderboard »'), $url_see_more) . '</div>');
  return $output;
}
