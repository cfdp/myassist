<?php

/**
 * @file
 * Theme an answers_question node.
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
  // Remove the "Add new comment" link on the teaser page or if the comment
  unset($content['links']['comment']['#links']['comment-add']);
?>

<?php

  $locked = array_key_exists('lock_message', $content) || array_key_exists('question_locks', $content);

  // Hide these items to render when we choose.
  // See template.php for the graceful function
  graceful_hide($content['links']['statistics']);
  graceful_hide($content['comments']);
  graceful_hide($content['links']);
  graceful_hide($content['best_answer']);
  graceful_hide($content['answers_list']);
  graceful_hide($content['new_answer_form']);
  graceful_hide($content['lock_message']);
  graceful_hide($content['question_locks']);
  graceful_hide($content['advisor']);

?>


<div class="node-answers-wrapper">
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix" <?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if (!$page){ ?>
      <?php
      if ($view_mode == 'user_activity_list_entry') {
        print "<h4>" . t("Question") . "</h4>";
      }
      ?>
      <h2<?php print $title_attributes; ?>>
        <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
      </h2>
    <?php } ?>
    <?php print render($title_suffix); ?>
	<div class="answers-widgets-wrapper">
      
      <div class="answers-widgets">
        <?php
          if(isset($content['best_answer'])) {
            print render($content['best_answer']);
          }
          ?>
          <?php
          if(isset($content['answersRateWidget'])) {
            print render($content['answersRateWidget']);
          }
        ?>
      </div>
    </div>
    <div class="answers-body-wrapper">
      <div class="answers-body">
        <div class="content clearfix" <?php print $content_attributes; ?>>
          <?php print render($content); ?>
          <span class="submitted-time">
            <?php print t('Posted @time ago.', array("@time" => format_interval(time() - $node->created, 1))); ?>
          </span>
          <span class="answer_count">
            <?php
            $answers = answers_question_answers($node);
            print format_plural(count($answers), '1 answer', '@count answers.');
            ?>
          </span>
          <?php
            if ($locked) {
              print '<em class="question_locked" title="' . t("[Solved]") . '">&#10004;</em>';
              print '<em class="question_locked">' . t("[Solved]") . '</em>';
            }
          ?>
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
          </div>
          
          <?php if (module_exists('statistics')) {
            $statistics = statistics_get($node->nid);
			if ($statistics['totalcount'] > 0) {  
              print '<span class="views">';
              print format_plural($statistics['totalcount'], '1 view.', '@count views.');
              print '</span>';
			}
		  }
          ?>

      </div>

      <div class="answers-body-toolbar">
        <?php
          if ($view_mode !== 'full') {
            print '<a id="answers-btn-answer" class="answers-btn-primary btn" href="' . $node_url . '">' . t("Go to question") . '</a>';
          }

          if (!$locked && $view_mode !== 'user_activity_list_entry') {
            print '<a id="answers-btn-answer" class="answers-btn-primary btn" href="' . $node_url_answer . '">' . t("Answer") . '</a>';
          }
        ?>

        <?php
        if ($view_mode === 'full') {
          if ($user->uid === $node->uid && !$locked) {
            print '<a id="answers-btn-lock" class="answers-btn-primary btn" href="/node/' . $node->nid . '/lock" data-dialog-text="' . t("lock_question_confirmation") . '">' . t("Lock question") . '</a>';
          }
        }
        ?>
          <div class="link-wrapper">
          <?php
            if (user_access('post comments') && $view_mode === 'full' && !$locked) {
              // Add a "pseudo-link" to open the comment dialog. This is done using jquery.
              print '<ul class="links"><li class="answers-comment-button"><a>' . t("Comment") . '</a></li></ul>';
            }
          ?>
          </div>

      </div>
      <?php
      print render($content['advisor']);
        print render($content['comments']);
      ?>
    </div>
  </div>

  <?php if(isset($content['answers_list'])){ ?>
    <div class="answers-list">
      <?php print render($content['answers_list']); ?>
    </div>
  <?php } ?>
  
  <?php if(isset($content['new_answer_form'])) { ?>
    <div id="new-answer-form"><a name="new-answer-form"></a>
      <?php print render($content['new_answer_form']); ?>
      <script>
        jQuery(function(){
          if (document.location.hash === "#new-answer-form") {
            setTimeout(function(){
              jQuery("#edit-body textarea").focus();
            },0);
          }
        });
      </script>
    </div>
  <?php } ?>
</div>
