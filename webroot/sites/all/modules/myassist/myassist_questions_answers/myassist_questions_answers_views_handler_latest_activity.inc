<?php

/**
 * A handler for question answer count
 *
 */
class myassist_questions_answers_views_handler_latest_activity extends views_handler_sort {

  function query() {
    $sortname = isset($this->view->exposed_raw_input['sort_by']) ? $this->view->exposed_raw_input['sort_by'] : NULL;

    if (isset($sortname) && $this->view->display_handler->handlers['sort'][$sortname] == $this) {
    
      $this->ensure_my_table();

      if (!isset($this->query->relationships['related_answers'])) {
        $join = new views_join();
        $join->table = 'field_revision_answers_related_question';
        $join->field = 'answers_related_question_target_id';
        $join->left_table = 'node';
        $join->left_field = 'nid';
        $join->type = 'left';
        $this->query->add_relationship('related_answers', $join, 'node');

        $join = new views_join();
        $join->table = 'node';
        $join->field = 'nid';
        $join->left_table = 'related_answers';
        $join->left_field = 'entity_id';
        $join->type = 'left';
        $this->query->add_relationship('answer', $join, 'field_revision_answers_related_question');
      }

      $this->query->add_groupby('nid');
      $this->query->set_distinct(true);
      $this->query->add_orderby(null, 'IF (answer.changed is NULL, node.created, GREATEST(node.changed,max(answer.changed)))', $this->options['order'], 'created');
    }
  }

}

