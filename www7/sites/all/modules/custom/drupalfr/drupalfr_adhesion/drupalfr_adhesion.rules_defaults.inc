<?php
/**
 * @file
 * drupalfr_adhesion.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalfr_adhesion_default_rules_configuration() {
  $items = array();
  $items['rules_achater_une_deuxieme_adhesion_pour_un_adherent'] = entity_import('rules_config', '{ "rules_achater_une_deuxieme_adhesion_pour_un_adherent" : {
      "LABEL" : "achat d\\u0027une deuxi\\u00e8me adh\\u00e9sion pour un adh\\u00e9rent",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "adh\\u00e9sion" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "15" : "15" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Vous \\u00eates d\\u00e9j\\u00e0 adh\\u00e9rent \\u00e0 l\\u0027association Drupal France et francophonie. Vous pouvez retrouver cette information dans votre profil utilisateur. Cette adh\\u00e9sion est valable 1 an \\u00e0 partir de votre premier achat. Cette adh\\u00e9sion est personnelle et elle est reli\\u00e9e \\u00e0 votre profil sur le site. Celle-ci ne peut pas \\u00eatre c\\u00e9d\\u00e9e \\u00e0 un autre utilisateur." } },
        { "commerce_cart_empty" : { "commerce_order" : [ "commerce_order" ] } },
        { "redirect" : { "url" : "profil\\/[site:current-user]" } }
      ]
    }
  }');
  $items['rules_ajouter_une_adhesion_redirection_sur_le_panier'] = entity_import('rules_config', '{ "rules_ajouter_une_adhesion_redirection_sur_le_panier" : {
      "LABEL" : "Ajout d\\u0027une adhesion redirection sur le panier",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "adh\\u00e9sion" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "15" : "15" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "cart" } } ]
    }
  }');
  $items['rules_associer_le_role_adherent_apres_le_paiement_d_une_adhesion'] = entity_import('rules_config', '{ "rules_associer_le_role_adherent_apres_le_paiement_d_une_adhesion" : {
      "LABEL" : "Associer le r\\u00f4le adh\\u00e9rent apr\\u00e8s le paiement d\\u0027une adh\\u00e9sion",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "adh\\u00e9sion" ],
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce_order" ],
            "product_id" : "ADHESION-SIMPLE",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "15" : "15" } }
          }
        }
      ]
    }
  }');
  $items['rules_paypal_wps'] = entity_import('rules_config', '{ "rules_paypal_wps" : {
      "LABEL" : "Paypal WPS",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "anne-sophie@commerceguys.com",
                  "currency_code" : "EUR",
                  "allow_supported_currencies" : 0,
                  "language" : "FR",
                  "server" : "sandbox",
                  "payment_action" : "sale",
                  "ipn_logging" : "notification",
                  "receiver_emails" : "",
                  "ipn_create_billing_profile" : 0,
                  "show_payment_instructions" : 0
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
