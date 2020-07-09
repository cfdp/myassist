<?php

/**
 * @file
 * Theme an answers_answer node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<?php
  // Remove the "Add new comment" link. Later, we add a pseudo-link to open the comment form
  unset($content['links']['comment']['#links']['comment-add']);
?>



<?php

  $question = NULL;
    foreach ($node->answers_related_question as $key => $value) {
      try {
        $question_node_id = $value[0]['target_id'];
        if ($question_node_id) {
          $question = node_load($question_node_id);
          break;
        }
      } catch (Exception $e) {
      }
    }

  $question_locked = false;
  if ($question) {
    foreach ($question->question_locks as $key => $value) {
      foreach ($value as $v) {
        if (count($v) > 0){
          $question_locked = true;
          break;
        }
      }
      if ($question_locked) {break;}
    }
  }

  // Hide these items to render when we choose.
  hide($content['links']['statistics']);
  hide($content['comments']);
  hide($content['links']);
  hide($content['best_answer']);
?>

<div class="node-answers-wrapper">

  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix" <?php print $attributes; ?>>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2 <?php print $title_attributes; ?>>
        <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
      </h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>


	<div class="answers-widgets-wrapper">
      
      <div class="answers-widgets">
	    <div class="mystery-hack"></div>
      <?php
      if(isset($content['best_answer'])):
        print render($content['best_answer']);
      endif;
      ?>
      <?php
      if(isset($content['answersRateWidget'])):
        print render($content['answersRateWidget']);
      endif;
      ?>
      </div>
    </div>

    <div class="answers-body-wrapper">
      <div class="answers-body">
        <div class="content clearfix" <?php print $content_attributes; ?>>
          <?php print render($content); ?>
          
          <div class="answers-submitted">
            <?php print $user_picture; ?>
            <div class="author-name"><?php print $name; ?></div>
            <div class="author-details">
              <?php if (module_exists('myassist_achievements') && myassist_user_has_youth_profile($node->uid)){ ?>
                <p class="author-level">
                  <?php print myassist_achievements_get_user_level_name($node->uid); ?>
                </p>
              <?php } ?>

              <p class="author-gender-age">
                <?php
                $gender = myassist_user_get_gender($node->uid);
                $gender_icon = "/sites/all/themes/myassist_theme/images/icons/gender_$gender.svg";
                ?>
                <img src="<?php print $gender_icon ?>" class="gendericon"/>
                <?php print format_plural(myassist_user_get_age($node->uid), '1 year', '@count years'); ?>
              </p>

              <!--
                <?php if (module_exists('answers_userpoints')){ ?>
                  <p class="author-points">
                    <?php print userpoints_get_current_points($node->uid); print ' ' . t('points'); ?>
                  </p>
                <?php } ?>
                -->

            </div>
          </div>
          
          <span class="submitted-time">
            <?php print ' - ' . format_interval(time() - $node->created, 1) . t(' ago.'); ?>
          </span>
        </div>
      </div>

      <div class="answers-body-toolbar">
        <?php
          if ($view_mode !== 'full') {
            print '<a id="answers-btn-answer" class="answers-btn-primary btn" href="' . $node_url . '">' . t("Go to answer") . '</a>';
          }
        ?>
        <?php
          $links = render($content['links']);
          if ($links || user_access('post comments')):
        ?>
        <div class="link-wrapper">
          <?php 
            print $links;
            if (user_access('post comments') && $view_mode === 'answers_full_node' && !$question_locked) {
			  // Add a "pseudo-link" to open the comment form. This is done using jquery
              print '<ul class="links"><li class="answers-comment-button"><a>' . t('Comment') . '</a></li></ul>';
            }
          ?>
        </div>
        <?php endif; ?>
      </div>
      <?php print render($content['comments']); ?>
    </div>  
  </div>
</div>


		
    
