<?php
/**
 * @file
 * drupalfr_adhesion.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalfr_adhesion_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_liste_adherents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Administration liste des adhérents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste des adhérents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_id' => 'order_id',
    'created' => 'created',
    'commerce_customer_address_name_line' => 'commerce_customer_address_name_line',
    'mail' => 'mail',
    'commerce_customer_address_locality' => 'commerce_customer_address_locality',
    'field_groupe_local' => 'field_groupe_local',
    'field_carte_adherent' => 'field_carte_adherent',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_address_name_line' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_groupe_local' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_carte_adherent' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relation: Commande Drupal Commerce : Profil client référencé */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relation: Profil Client Commerce : Propriétaire */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_customer_profile';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_customer_billing_profile_id';
  /* Champ: Commande Drupal Commerce : Identifiant (ID) de la commande */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Commande';
  /* Champ: Profil Client Commerce : Date de création */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_customer_profile';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Champ: Profil client Commerce : Adresse - Nom complet */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Nom';
  /* Champ: Utilisateur : Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Champ: Profil client Commerce : Adresse - Locality (i.e. City) */
  $handler->display->display_options['fields']['commerce_customer_address_locality']['id'] = 'commerce_customer_address_locality';
  $handler->display->display_options['fields']['commerce_customer_address_locality']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_locality']['field'] = 'commerce_customer_address_locality';
  $handler->display->display_options['fields']['commerce_customer_address_locality']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address_locality']['label'] = 'Ville';
  /* Champ: Profil client Commerce : Groupe local */
  $handler->display->display_options['fields']['field_groupe_local']['id'] = 'field_groupe_local';
  $handler->display->display_options['fields']['field_groupe_local']['table'] = 'field_data_field_groupe_local';
  $handler->display->display_options['fields']['field_groupe_local']['field'] = 'field_groupe_local';
  $handler->display->display_options['fields']['field_groupe_local']['relationship'] = 'commerce_customer_billing_profile_id';
  /* Champ: Profil client Commerce : Carte d'adhérent */
  $handler->display->display_options['fields']['field_carte_adherent']['id'] = 'field_carte_adherent';
  $handler->display->display_options['fields']['field_carte_adherent']['table'] = 'field_data_field_carte_adherent';
  $handler->display->display_options['fields']['field_carte_adherent']['field'] = 'field_carte_adherent';
  $handler->display->display_options['fields']['field_carte_adherent']['relationship'] = 'commerce_customer_billing_profile_id';
  /* Champ: Profil Client Commerce : Lien de modification */
  $handler->display->display_options['fields']['edit_customer_profile']['id'] = 'edit_customer_profile';
  $handler->display->display_options['fields']['edit_customer_profile']['table'] = 'commerce_customer_profile';
  $handler->display->display_options['fields']['edit_customer_profile']['field'] = 'edit_customer_profile';
  $handler->display->display_options['fields']['edit_customer_profile']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['edit_customer_profile']['label'] = 'Modifier';
  /* Critère de filtrage: Commande Drupal Commerce : Type de commande */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Rôles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    13 => 0,
    11 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    15 => 0,
  );
  /* Critère de filtrage: Commande Drupal Commerce : Date de création */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value']['value'] = '+1 year';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Critère de filtrage: Profil client Commerce : Carte d&#039;adhérent (field_carte_adherent) */
  $handler->display->display_options['filters']['field_carte_adherent_value']['id'] = 'field_carte_adherent_value';
  $handler->display->display_options['filters']['field_carte_adherent_value']['table'] = 'field_data_field_carte_adherent';
  $handler->display->display_options['filters']['field_carte_adherent_value']['field'] = 'field_carte_adherent_value';
  $handler->display->display_options['filters']['field_carte_adherent_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_carte_adherent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_carte_adherent_value']['expose']['operator_id'] = 'field_carte_adherent_value_op';
  $handler->display->display_options['filters']['field_carte_adherent_value']['expose']['label'] = 'Carte d\'adhérent';
  $handler->display->display_options['filters']['field_carte_adherent_value']['expose']['operator'] = 'field_carte_adherent_value_op';
  $handler->display->display_options['filters']['field_carte_adherent_value']['expose']['identifier'] = 'field_carte_adherent_value';
  $handler->display->display_options['filters']['field_carte_adherent_value']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    13 => 0,
    11 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    15 => 0,
  );
  /* Critère de filtrage: Profil client Commerce : Groupe local (field_groupe_local) */
  $handler->display->display_options['filters']['field_groupe_local_value']['id'] = 'field_groupe_local_value';
  $handler->display->display_options['filters']['field_groupe_local_value']['table'] = 'field_data_field_groupe_local';
  $handler->display->display_options['filters']['field_groupe_local_value']['field'] = 'field_groupe_local_value';
  $handler->display->display_options['filters']['field_groupe_local_value']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['field_groupe_local_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_groupe_local_value']['expose']['operator_id'] = 'field_groupe_local_value_op';
  $handler->display->display_options['filters']['field_groupe_local_value']['expose']['label'] = 'Groupe local';
  $handler->display->display_options['filters']['field_groupe_local_value']['expose']['operator'] = 'field_groupe_local_value_op';
  $handler->display->display_options['filters']['field_groupe_local_value']['expose']['identifier'] = 'field_groupe_local_value';
  $handler->display->display_options['filters']['field_groupe_local_value']['expose']['remember_roles'] = array(
    2 => '2',
    4 => 0,
    1 => 0,
    13 => 0,
    11 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    15 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/liste-adherents';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Adhérents';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-outils';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['admin_liste_adherents'] = array(
    t('Master'),
    t('Liste des adhérents'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Customer profile referenced by commerce_customer_billing'),
    t('Profil client'),
    t('Commande'),
    t('Date de création'),
    t('Nom'),
    t('Courriel'),
    t('Ville'),
    t('Groupe local'),
    t('Carte d\'adhérent'),
    t('Modifier'),
    t('Rôles'),
    t('Page'),
  );
  $export['admin_liste_adherents'] = $view;

  return $export;
}
