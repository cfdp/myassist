<?php
/**
 * @file
 * myassist_questions_answers.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function myassist_questions_answers_default_rules_configuration() {
  $items = array();
  $items['answers_userpoints_voteup_answer_email'] = entity_import('rules_config', '{ "answers_userpoints_voteup_answer_email" : {
      "LABEL" : "Email bruger om voteup",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "myassist_notification", "voting_rules" ],
      "ON" : { "voting_rules_insert_node" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "answers_answer" : "answers_answer" } }
          }
        },
        { "data_is" : { "data" : [ "node:author:field-mail-on-voteup" ], "value" : "1" } }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "node:author" ],
            "messageType" : "upvoted_answer",
            "node" : [ "node" ]
          }
        }
      ]
    }
  }');
  $items['myassist_questions_answers_create_answer_email'] = entity_import('rules_config', '{ "myassist_questions_answers_create_answer_email" : {
      "LABEL" : "Email bruger om assist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "notify" ],
      "REQUIRES" : [ "rules", "myassist_notification" ],
      "ON" : { "node_insert--answers_answer" : { "bundle" : "answers_answer" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:author" ],
            "value" : [ "node:answers-related-question:author" ]
          }
        },
        { "data_is" : {
            "data" : [ "node:answers-related-question:author:field-mail-on-receive-assist" ],
            "value" : "1"
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "node:answers-related-question:author" ],
            "messageType" : "question_answered",
            "node" : [ "node:answers-related-question" ]
          }
        }
      ]
    }
  }');
  $items['myassist_questions_answers_create_comment_email'] = entity_import('rules_config', '{ "myassist_questions_answers_create_comment_email" : {
      "LABEL" : "Email bruger om kommentar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules", "myassist_notification", "comment" ],
      "ON" : {
        "comment_insert--comment_node_answers_question" : { "bundle" : "comment_node_answers_question" },
        "comment_insert--comment_node_answers_answer" : { "bundle" : "comment_node_answers_answer" }
      },
      "IF" : [
        { "data_is" : {
            "data" : [ "comment:node:author:field-mail-on-receive-comment" ],
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "comment:node:author" ],
            "messageType" : "comment_created",
            "node" : [ "comment:node" ]
          }
        }
      ]
    }
  }');
  $items['myassist_questions_answers_email_bruger_om_publiceret_assist'] = entity_import('rules_config', '{ "myassist_questions_answers_email_bruger_om_publiceret_assist" : {
      "LABEL" : "Email bruger om publiceret assist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "notify" ],
      "REQUIRES" : [ "rules", "myassist_notification" ],
      "ON" : { "node_update--answers_answer" : { "bundle" : "answers_answer" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:author" ],
            "value" : [ "node:answers-related-question:author" ]
          }
        },
        { "data_is" : {
            "data" : [ "node:answers-related-question:author:field-mail-on-receive-assist" ],
            "value" : "1"
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "node:answers-related-question:author" ],
            "messageType" : "question_answered",
            "node" : [ "node:answers-related-question" ]
          }
        }
      ]
    }
  }');
  $items['myassist_questions_answers_email_op_on_assist_comment'] = entity_import('rules_config', '{ "myassist_questions_answers_email_op_on_assist_comment" : {
      "LABEL" : "Email OP om kommentar p\\u00e5 assist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules", "myassist_notification", "comment" ],
      "ON" : { "comment_insert--comment_node_answers_answer" : { "bundle" : "comment_node_answers_answer" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment:node" ], "field" : "answers_related_question" } },
        { "data_is" : {
            "data" : [
              "comment:node:answers-related-question:author:field-mail-on-receive-comment"
            ],
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "comment:node:answers-related-question:author" ],
            "messageType" : "comment_created",
            "node" : [ "comment:node" ]
          }
        }
      ]
    }
  }');
  $items['myassist_questions_answers_notify_unge_profil_on_publish'] = entity_import('rules_config', '{ "myassist_questions_answers_notify_unge_profil_on_publish" : {
      "LABEL" : "Email ungeprofiler om publicering",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules", "myassist_user" ],
      "ON" : { "node_update--answers_question" : { "bundle" : "answers_question" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "nc@cyberhus.dk",
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey der\\r\\nEn anden bruger har oprettet et sp\\u00f8rgsm\\u00e5l...m\\u00e5ske er det dig der kender svaret?. \\r\\nKlik ind forbi og tjek sp\\u00f8rgsm\\u00e5let ud...og giv et assist.  \\r\\n\\r\\nMvh. Moderator-Teamet\\r\\n\\r\\nTitel p\\u00e5 sp\\u00f8rgsm\\u00e5l: [node:title]\\r\\n\\r\\nG\\u00e5 til sp\\u00f8rgsm\\u00e5l: [node:url]\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mail_to_users_of_role_with_field" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey der\\r\\nEn anden bruger har oprettet et sp\\u00f8rgsm\\u00e5l...m\\u00e5ske er det dig der kender svaret?. \\r\\nKlik ind forbi og tjek sp\\u00f8rgsm\\u00e5let ud...og giv et assist.\\r\\nMvh. Moderator-Teamet\\r\\n\\r\\nTitel p\\u00e5 sp\\u00f8rgsm\\u00e5l: [node:title]\\r\\n\\r\\nG\\u00e5 til sp\\u00f8rgsm\\u00e5l: [node:url]",
            "field" : "field_mail_on_new_question",
            "value" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_comment_delete'] = entity_import('rules_config', '{ "rules_comment_delete" : {
      "LABEL" : "Point ved sletning af kommentar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "userpoints_rules", "comment" ],
      "ON" : {
        "comment_delete--comment_node_answers_question" : { "bundle" : "comment_node_answers_question" },
        "comment_delete--comment_node_answers_answer" : { "bundle" : "comment_node_answers_answer" }
      },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "-1",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Remove comment",
            "display" : "1",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_create_answer'] = entity_import('rules_config', '{ "rules_create_answer" : {
      "LABEL" : "Point ved nyt assist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "node_insert--answers_answer" : { "bundle" : "answers_answer" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:author" ],
            "value" : [ "node:answers-related-question:author" ]
          }
        }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "10",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Du har svaret p\\u00e5 et sp\\u00f8rgsm\\u00e5l.",
            "operation" : "Insert",
            "reference" : "Du har svaret p\\u00e5 et sp\\u00f8rgsm\\u00e5let [node:title].",
            "display" : "0",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_create_comment'] = entity_import('rules_config', '{ "rules_create_comment" : {
      "LABEL" : "Point ved kommentar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "userpoints_rules", "comment" ],
      "ON" : {
        "comment_insert--comment_node_answers_question" : { "bundle" : "comment_node_answers_question" },
        "comment_insert--comment_node_answers_answer" : { "bundle" : "comment_node_answers_answer" }
      },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "comment:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "comment" ],
            "description" : "Du postede en kommentar.",
            "operation" : "Create comment",
            "display" : "1",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_create_question'] = entity_import('rules_config', '{ "rules_create_question" : {
      "LABEL" : "Point ved nyt sp\\u00f8rgsm\\u00e5l",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "node_insert--answers_question" : { "bundle" : "answers_question" } },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "10",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Du stillede et sp\\u00f8rgsm\\u00e5l.",
            "operation" : "Insert",
            "display" : "0",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_delete_answer'] = entity_import('rules_config', '{ "rules_delete_answer" : {
      "LABEL" : "Point ved sletning af assist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "node_delete--answers_answer" : { "bundle" : "answers_answer" } },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "-2",
            "tid" : "0",
            "entity" : [ "node" ],
            "description" : "Removed answer",
            "operation" : "Remove",
            "display" : "0",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_delete_question'] = entity_import('rules_config', '{ "rules_delete_question" : {
      "LABEL" : "Point ved sletning af sp\\u00f8rgsm\\u00e5l",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers", "points" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "node_delete--answers_question" : { "bundle" : "answers_question" } },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "-10",
            "tid" : "0",
            "entity" : [ "node" ],
            "operation" : "Remove",
            "reference" : "Question removed",
            "display" : "0",
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_flag_answers_best_answer_email'] = entity_import('rules_config', '{ "rules_flag_answers_best_answer_email" : {
      "LABEL" : "Email bruger om \\u0022best assist\\u0022",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answers" ],
      "REQUIRES" : [ "rules", "myassist_notification", "flag" ],
      "ON" : { "flag_flagged_best_answer" : [] },
      "IF" : [
        { "NOT data_is" : { "data" : [ "flagging-user" ], "value" : [ "flagged-node:author" ] } },
        { "data_is" : {
            "data" : [ "flagged-node:author:field-mail-on-best-assist" ],
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "myassist_notification_rules_process" : {
            "recipient" : [ "flagged-node:author" ],
            "messageType" : "best_answer",
            "node" : [ "flagged-node" ]
          }
        }
      ]
    }
  }');
  $items['rules_lock_question'] = entity_import('rules_config', '{ "rules_lock_question" : {
      "LABEL" : "lock_question",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_best_answer" : [] },
      "DO" : []
    }
  }');
  $items['rules_nattemoderation'] = entity_import('rules_config', '{ "rules_nattemoderation" : {
      "LABEL" : "Nattemoderation, kommentarer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "rules", "php", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "NOT php_eval" : { "code" : "\\/*we check if the content is posted inside opening hours*\\/\\r\\nreturn myassist_questions_answers_uf_open_to_posts();" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "comment:status" ], "value" : "0" } },
        { "drupal_message" : { "message" : "Mellem kl. 22 og 9 bliver nyt indhold ikke automatisk offentliggjort p\\u00e5 cyberhus.dk." } }
      ]
    }
  }');
  $items['rules_nattemoderation_nodes'] = entity_import('rules_config', '{ "rules_nattemoderation_nodes" : {
      "LABEL" : "Nattemoderation, nodes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : {
        "node_insert--answers_question" : { "bundle" : "answers_question" },
        "node_insert--answers_answer" : { "bundle" : "answers_answer" }
      },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "8" : "8" } }
          }
        },
        { "NOT php_eval" : { "code" : "\\/*we check if the content is posted inside opening hours*\\/\\r\\nreturn myassist_questions_answers_uf_open_to_posts();" } }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "redirect" : { "url" : "node_created" } },
        { "drupal_message" : { "message" : "Mellem kl. 22 og 9 bliver nyt indhold ikke automatisk offentliggjort p\\u00e5 mitassist.dk.\\r\\nDit indl\\u00e6g er sat i k\\u00f8 og vil blive offentliggjort s\\u00e5 snart det er godkendt af moderatorerne.\\r\\nVenlig hilsen mitassist.dk-teamet" } }
      ]
    }
  }');
  $items['rules_notify_advisor'] = entity_import('rules_config', '{ "rules_notify_advisor" : {
      "LABEL" : "Email coach om nyt sp\\u00f8rgsm\\u00e5l",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--answers_question" : { "bundle" : "answers_question" } },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "node:field-advisor:mail" ] } } ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-advisor:mail" ],
            "subject" : "[site:name] - En ung bruger beder om din assistance.",
            "message" : "[node:title]\\r\\n\\r\\n[node:url]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_on_all_new_content'] = entity_import('rules_config', '{ "rules_notify_on_all_new_content" : {
      "LABEL" : "Email moderator om nyt indhold",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules", "flag", "comment", "voting_rules" ],
      "ON" : {
        "node_insert" : [],
        "flag_flagged_best_answer" : [],
        "comment_insert" : [],
        "voting_rules_insert_node" : [],
        "voting_rules_insert_comment" : []
      },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "10" : "10" } },
            "subject" : "Nyt indhold p\\u00e5 MitAssist",
            "message" : "Hey\\r\\n\\r\\nDer er sket ny aktivitet i tr\\u00e5den her \\r\\n\\u0022[node:title]\\u0022 \\r\\n[node:body]\\r\\n\\r\\nG\\u00e5 til [node:url]"
          }
        }
      ]
    }
  }');
  $items['rules_notify_on_question_from_parents'] = entity_import('rules_config', '{ "rules_notify_on_question_from_parents" : {
      "LABEL" : "Email om sp\\u00f8rgsm\\u00e5l fra for\\u00e6ldre",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify", "webform" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--webform" : { "bundle" : "webform" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:title" ],
            "match" : "Sp\\u00f8rgsm\\u00e5l fra for\\u00e6ldre"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "info@mitassist.dk",
            "subject" : "Sp\\u00f8rgsm\\u00e5l fra for\\u00e6ldre",
            "message" : "Nyt sp\\u00f8rgsm\\u00e5l fra for\\u00e6ldre\\r\\n[node:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_user_on_new_question_cloned_'] = entity_import('rules_config', '{ "rules_notify_user_on_new_question_cloned_" : {
      "LABEL" : "Notify users with unge profil on new question",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--answers_question" : { "bundle" : "answers_question" } },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:body" ] } },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "nc@cyberhus.dk",
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey der\\r\\nEn anden bruger har oprettet et sp\\u00f8rgsm\\u00e5l...m\\u00e5ske er det dig der kender svaret?. \\r\\nKlik ind forbi og tjek sp\\u00f8rgsm\\u00e5let ud...og giv et assist.  \\r\\n\\r\\nMvh. Moderator-Teamet\\r\\n\\r\\nTitel p\\u00e5 sp\\u00f8rgsm\\u00e5l: [node:title]\\r\\n\\r\\nG\\u00e5 til sp\\u00f8rgsm\\u00e5l: [node:url]\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey der\\r\\nEn anden bruger har oprettet et sp\\u00f8rgsm\\u00e5l...m\\u00e5ske er det dig der kender svaret?. \\r\\nKlik ind forbi og tjek sp\\u00f8rgsm\\u00e5let ud...og giv et assist.\\r\\nMvh. Moderator-Teamet\\r\\n\\r\\nTitel p\\u00e5 sp\\u00f8rgsm\\u00e5l: [node:title]\\r\\n\\r\\nG\\u00e5 til sp\\u00f8rgsm\\u00e5l: [node:url]"
          }
        },
        { "drupal_message" : { "message" : "Tak fordi du oprettede et sp\\u00f8rgsm\\u00e5l. Vi har sendt en besked til [node:field-advisor:name]." } }
      ]
    }
  }');
  $items['rules_notify_users_with_unge_profil_on_new_question_individual_'] = entity_import('rules_config', '{ "rules_notify_users_with_unge_profil_on_new_question_individual_" : {
      "LABEL" : "Email ungeprofiler om nyt sp\\u00f8rgsm\\u00e5l",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "TAGS" : [ "notify" ],
      "REQUIRES" : [ "rules", "myassist_user" ],
      "ON" : { "node_insert--answers_question" : { "bundle" : "answers_question" } },
      "IF" : [
        { "AND" : [
            { "NOT data_is_empty" : { "data" : [ "node:body" ] } },
            { "node_is_published" : { "node" : [ "node" ] } }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "nc@cyberhus.dk",
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey der\\r\\nEn anden bruger har oprettet et sp\\u00f8rgsm\\u00e5l...m\\u00e5ske er det dig der kender svaret?. \\r\\nKlik ind forbi og tjek sp\\u00f8rgsm\\u00e5let ud...og giv et assist.  \\r\\n\\r\\nMvh. Moderator-Teamet\\r\\n\\r\\nTitel p\\u00e5 sp\\u00f8rgsm\\u00e5l: [node:title]\\r\\n\\r\\nG\\u00e5 til sp\\u00f8rgsm\\u00e5l: [node:url]\\r\\n",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "Tak fordi du oprettede et sp\\u00f8rgsm\\u00e5l.\\r\\nHvis du har valgt at sp\\u00f8rge en coach, har coachen nu f\\u00e5et direkte besked." } },
        { "mail_to_users_of_role_with_field" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "[site:name] - En anden bruger har brug for et assist.",
            "message" : "Hey\\r\\n\\r\\n[node:author] har postet sp\\u00f8rgsm\\u00e5let \\u0022[node:title]\\u0022\\r\\n\\r\\nSe sp\\u00f8rgsm\\u00e5let her:\\r\\n\\r\\n[node:body]\\r\\n\\r\\nKan du give et assist, s\\u00e5 g\\u00e5 til [node:url]",
            "field" : "field_mail_on_new_question",
            "value" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_ved_sletning_deaktivering_af_bruger'] = entity_import('rules_config', '{ "rules_ved_sletning_deaktivering_af_bruger" : {
      "LABEL" : "Ved sletning\\/deaktivering af bruger",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [], "user_delete" : [] },
      "IF" : [ { "user_is_blocked" : { "account" : [ "account" ] } } ],
      "DO" : [
        { "data_set" : { "data" : [ "account:field-mail-on-receive-assist" ], "value" : "0" } },
        { "data_set" : { "data" : [ "account:field-mail-on-receive-comment" ], "value" : "0" } },
        { "data_set" : { "data" : [ "account:field-mail-on-best-assist" ], "value" : "0" } },
        { "data_set" : { "data" : [ "account:field-mail-on-voteup" ], "value" : "0" } },
        { "data_set" : { "data" : [ "account:field-mail-on-new-question" ], "value" : "0" } }
      ]
    }
  }');
  return $items;
}
