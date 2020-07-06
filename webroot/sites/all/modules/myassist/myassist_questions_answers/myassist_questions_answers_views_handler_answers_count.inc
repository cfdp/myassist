<?php

/**
 * A handler for question answer count
 *
 */
class myassist_questions_answers_views_handler_answers_count extends views_handler_sort {

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
      }

      $this->query->add_groupby('related_answers.answers_related_question_target_id');
//    $this->query->add_field(null, 'related_answers.answers_related_question_target_id', 'answer_count', array('count'=>true));
      $this->query->set_distinct(true);
      $this->query->add_orderby('related_answers', 'answers_related_question_target_id', $this->options['order'], 'answer_count', array('count'=>true));

    }
  }

}

