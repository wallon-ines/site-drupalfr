<?php
/**
 * @file
 * drupalfr_adhesion.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalfr_adhesion_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_adhesion-comment_body'.
  $fields['comment-comment_node_adhesion-comment_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'comment',
      ),
      'field_name' => 'comment_body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'comment_node_adhesion',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'comment',
      'field_name' => 'comment_body',
      'label' => 'Comment',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'commerce_customer_profile-billing-commerce_customer_address'.
  $fields['commerce_customer_profile-billing-commerce_customer_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_customer_profile',
      ),
      'field_name' => 'commerce_customer_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'billing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'administrator' => array(
          'label' => 'hidden',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => -10,
        ),
        'customer' => array(
          'label' => 'hidden',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => -10,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => -10,
        ),
      ),
      'entity_type' => 'commerce_customer_profile',
      'field_name' => 'commerce_customer_address',
      'label' => 'Adresse',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            0 => 'address',
            1 => 'name-oneline',
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '-10',
      ),
    ),
  );

  // Exported field: 'commerce_customer_profile-billing-field_carte_adherent'.
  $fields['commerce_customer_profile-billing-field_carte_adherent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_carte_adherent',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Ma carte d\'adhérent me sera remise lors d\'un événement à venir',
          1 => 'Je souhaite recevoir par courrier ma carte d\'adhérent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'billing',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => -9,
        ),
      ),
      'entity_type' => 'commerce_customer_profile',
      'field_name' => 'field_carte_adherent',
      'label' => 'Carte d\'adhérent',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'commerce_customer_profile-billing-field_groupe_local'.
  $fields['commerce_customer_profile-billing-field_groupe_local'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_groupe_local',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'paris' => 'Paris',
          'lyon' => 'Lyon',
          'marseille' => 'Marseille',
          'montpellier' => 'Montpellier',
          'toulouse' => 'Toulouse',
          'rouen' => 'Rouen',
          'belgique' => 'Belgique',
          'autre' => 'Autre',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'billing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Saisissez le groupe local auprès duquel vous êtes le plus proche. Si vous pourrez sans doute récupérer votre carte d\'adhérent lors d\'une des rencontres de ce groupe.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => -8,
        ),
      ),
      'entity_type' => 'commerce_customer_profile',
      'field_name' => 'field_groupe_local',
      'label' => 'Groupe local',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'commerce_line_item-product-commerce_display_path'.
  $fields['commerce_line_item-product-commerce_display_path'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_line_item',
      ),
      'field_name' => 'commerce_display_path',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '1',
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'display' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_line_item',
      'field_name' => 'commerce_display_path',
      'label' => 'Display path',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'commerce_line_item-product-commerce_product'.
  $fields['commerce_line_item-product-commerce_product'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_line_item',
      ),
      'field_name' => 'commerce_product',
      'foreign keys' => array(
        'product_id' => array(
          'columns' => array(
            'product_id' => 'product_id',
          ),
          'table' => 'commerce_product',
        ),
      ),
      'indexes' => array(
        'product_id' => array(
          0 => 'product_id',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_product_reference',
      'settings' => array(
        'options_list_limit' => NULL,
      ),
      'translatable' => '0',
      'type' => 'commerce_product_reference',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_product_reference',
          'settings' => array(),
          'type' => 'commerce_product_reference_title_link',
          'weight' => 2,
        ),
        'display' => array(
          'label' => 'hidden',
          'module' => 'commerce_product_reference',
          'settings' => array(),
          'type' => 'commerce_product_reference_title_link',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_line_item',
      'field_name' => 'commerce_product',
      'label' => 'Product',
      'required' => TRUE,
      'settings' => array(
        'field_injection' => TRUE,
        'referenceable_types' => array(),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_product_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'commerce_product/autocomplete',
          'size' => 60,
        ),
        'type' => 'commerce_product_reference_autocomplete',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'commerce_line_item-product-commerce_total'.
  $fields['commerce_line_item-product-commerce_total'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_line_item',
      ),
      'field_name' => 'commerce_total',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
        'display' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'commerce_line_item',
      'field_name' => 'commerce_total',
      'label' => 'Total',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'commerce_line_item-product-commerce_unit_price'.
  $fields['commerce_line_item-product-commerce_unit_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_line_item',
      ),
      'field_name' => 'commerce_unit_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'display' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_line_item',
      'field_name' => 'commerce_unit_price',
      'label' => 'Unit price',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'commerce_order-commerce_order-commerce_customer_billing'.
  $fields['commerce_order-commerce_order-commerce_customer_billing'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_order',
      ),
      'field_name' => 'commerce_customer_billing',
      'foreign keys' => array(
        'profile_id' => array(
          'columns' => array(
            'profile_id' => 'profile_id',
          ),
          'table' => 'commerce_customer_profile',
        ),
      ),
      'indexes' => array(
        'profile_id' => array(
          0 => 'profile_id',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_customer',
      'settings' => array(
        'options_list_limit' => 50,
        'profile_type' => 'billing',
      ),
      'translatable' => '0',
      'type' => 'commerce_customer_profile_reference',
    ),
    'field_instance' => array(
      'bundle' => 'commerce_order',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'administrator' => array(
          'label' => 'above',
          'module' => 'commerce_customer',
          'settings' => array(),
          'type' => 'commerce_customer_profile_reference_display',
          'weight' => -5,
        ),
        'customer' => array(
          'label' => 'above',
          'module' => 'commerce_customer',
          'settings' => array(),
          'type' => 'commerce_customer_profile_reference_display',
          'weight' => -5,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_customer',
          'settings' => array(),
          'type' => 'commerce_customer_profile_reference_display',
          'weight' => -5,
        ),
      ),
      'entity_type' => 'commerce_order',
      'field_name' => 'commerce_customer_billing',
      'label' => 'Informations de facturation',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_customer',
        'settings' => array(),
        'type' => 'commerce_customer_profile_manager',
        'weight' => -5,
      ),
    ),
  );

  // Exported field: 'commerce_order-commerce_order-commerce_line_items'.
  $fields['commerce_order-commerce_order-commerce_line_items'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_order',
      ),
      'field_name' => 'commerce_line_items',
      'foreign keys' => array(
        'line_item_id' => array(
          'columns' => array(
            'line_item_id' => 'line_item_id',
          ),
          'table' => 'commerce_line_item',
        ),
      ),
      'indexes' => array(
        'line_item_id' => array(
          0 => 'line_item_id',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_line_item',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_line_item_reference',
    ),
    'field_instance' => array(
      'bundle' => 'commerce_order',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'administrator' => array(
          'label' => 'hidden',
          'module' => 'commerce_line_item',
          'settings' => array(
            'view' => 'commerce_line_item_table|default',
          ),
          'type' => 'commerce_line_item_reference_view',
          'weight' => -10,
        ),
        'customer' => array(
          'label' => 'hidden',
          'module' => 'commerce_line_item',
          'settings' => array(
            'view' => 'commerce_line_item_table|default',
          ),
          'type' => 'commerce_line_item_reference_view',
          'weight' => -10,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_line_item',
          'settings' => array(
            'view' => 'commerce_line_item_table|default',
          ),
          'type' => 'commerce_line_item_reference_view',
          'weight' => -10,
        ),
      ),
      'entity_type' => 'commerce_order',
      'field_name' => 'commerce_line_items',
      'label' => 'Eléments de commande',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_line_item',
        'settings' => array(),
        'type' => 'commerce_line_item_manager',
        'weight' => -10,
      ),
    ),
  );

  // Exported field: 'commerce_order-commerce_order-commerce_order_total'.
  $fields['commerce_order-commerce_order-commerce_order_total'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_order',
      ),
      'field_name' => 'commerce_order_total',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'commerce_order',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'administrator' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
        'customer' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_components',
          'weight' => -8,
        ),
      ),
      'entity_type' => 'commerce_order',
      'field_name' => 'commerce_order_total',
      'label' => 'Total de la commande',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => -8,
      ),
    ),
  );

  // Exported field: 'commerce_product-product-commerce_price'.
  $fields['commerce_product-product-commerce_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_product',
      ),
      'field_name' => 'commerce_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'commerce_line_item_diff_standard' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'commerce_line_item_display' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'commerce_line_item_token' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'diff_standard' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'line_item' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_price',
      'label' => 'Price',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-adhesion-body'.
  $fields['node-adhesion-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'adhesion',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-adhesion-field_adhesion'.
  $fields['node-adhesion-field_adhesion'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_adhesion',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'product_id' => array(
          'columns' => array(
            'product_id' => 'product_id',
          ),
          'table' => 'commerce_product',
        ),
      ),
      'indexes' => array(
        'product_id' => array(
          0 => 'product_id',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_product_reference',
      'settings' => array(
        'options_list_limit' => '',
      ),
      'translatable' => '0',
      'type' => 'commerce_product_reference',
    ),
    'field_instance' => array(
      'bundle' => 'adhesion',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => TRUE,
            'default_quantity' => 1,
            'line_item_type' => 'product',
            'show_quantity' => FALSE,
            'show_single_product_attributes' => FALSE,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_adhesion',
      'label' => 'Adhésion',
      'required' => 0,
      'settings' => array(
        'field_injection' => 1,
        'referenceable_types' => array(
          'product' => 'product',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adhésion');
  t('Adresse');
  t('Body');
  t('Carte d\'adhérent');
  t('Comment');
  t('Display path');
  t('Eléments de commande');
  t('Groupe local');
  t('Informations de facturation');
  t('Price');
  t('Product');
  t('Saisissez le groupe local auprès duquel vous êtes le plus proche. Si vous pourrez sans doute récupérer votre carte d\'adhérent lors d\'une des rencontres de ce groupe.');
  t('Total');
  t('Total de la commande');
  t('Unit price');

  return $fields;
}
