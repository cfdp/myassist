<?php
/**
 * @file
 * myassist_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function myassist_user_default_rules_configuration() {
  $items = array();
  $items['rules_first_time_login'] = entity_import('rules_config', '{ "rules_first_time_login" : {
      "LABEL" : "first time login",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "data_is_empty" : { "data" : [ "site:current-user:last-access" ] } },
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Velkommen til MitAssist.\\r\\nSkift din adgangskode med det samme. Bagefter kan du udfylde din profil." } },
        { "redirect" : { "url" : "node\\\\\\/add\\\\\\/sess?destination=\\\\\\/admin\\\\\\/dashboard" } }
      ]
    }
  }');
  $items['rules_notify_on_new_user_account'] = entity_import('rules_config', '{ "rules_notify_on_new_user_account" : {
      "LABEL" : "Email moderator om ny bruger",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notify", "user" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "10" : "10" } },
            "subject" : "Ny bruger registreret p\\u00e5 [site:name]",
            "message" : "Hej\\r\\n\\r\\nNy bruger [account:name] er registreret d. [account:created].\\r\\nSe brugerens profil p\\u00e5 [account:url]\\r\\n\\r\\n"
          }
        }
      ]
    }
  }');
  $items['rules_prune_profile'] = entity_import('rules_config', '{ "rules_prune_profile" : {
      "LABEL" : "Rens ungeprofil",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_view" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "8" : "8" } } } },
        { "entity_is_of_bundle" : {
            "entity" : [ "profile2" ],
            "type" : "profile2",
            "bundle" : { "value" : { "ungeprofil" : "ungeprofil" } }
          }
        }
      ],
      "DO" : [ { "entity_delete" : { "data" : [ "profile2" ] } } ]
    }
  }');
  return $items;
}
