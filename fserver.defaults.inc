<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _fserver_content_default_fields() {
  $fields = array();

  // Exported field: field_fserver_drushmake
  $fields[] = array(
    'field_name' => 'field_fserver_drushmake',
    'type_name' => 'fserver_distro',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fserver_drushmake][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Drush Make Script',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_fserver_name
  $fields[] = array(
    'field_name' => 'field_fserver_name',
    'type_name' => 'fserver_distro',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fserver_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Machine name',
      'weight' => '-4',
      'description' => 'The machine-readable name for your project. This name must contain only lowercase letters, numbers, and underscores. <strong>Example:</strong> cooking_recipes.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fserver_method
  $fields[] = array(
    'field_name' => 'field_fserver_method',
    'type_name' => 'fserver_project',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options("method");',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Packaging method',
      'weight' => '-2',
      'description' => 'Choose the packaging method to use for this project.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_name
  $fields[] = array(
    'field_name' => 'field_fserver_name',
    'type_name' => 'fserver_project',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fserver_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Machine name',
      'weight' => '-4',
      'description' => 'The machine-readable name for your project. This name must contain only lowercase letters, numbers, and underscores. <strong>Example:</strong> cooking_recipes.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fserver_repository
  $fields[] = array(
    'field_name' => 'field_fserver_repository',
    'type_name' => 'fserver_project',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fserver_repository][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Repository URL',
      'weight' => '-1',
      'description' => 'Example: git://github.com/myname/myproject.git',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fserver_type
  $fields[] = array(
    'field_name' => 'field_fserver_type',
    'type_name' => 'fserver_project',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'type\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_api
  $fields[] = array(
    'field_name' => 'field_fserver_api',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-10',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'core\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '6.x',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Core compatibility',
      'weight' => '-10',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_file
  $fields[] = array(
    'field_name' => 'field_fserver_file',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-13',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'tgz tar gz',
      'file_path' => 'fserver',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Package',
      'weight' => '-13',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_fserver_project
  $fields[] = array(
    'field_name' => 'field_fserver_project',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-11',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'fserver_distro' => 'fserver_distro',
      'fserver_project' => 'fserver_project',
      'page' => 0,
      'fserver_release' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project',
      'weight' => '-11',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_fserver_recommended
  $fields[] = array(
    'field_name' => 'field_fserver_recommended',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'recommended\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Recommended',
      'weight' => '-6',
      'description' => 'The recommended releases will be displayed on the project page. The latest recommended release per major version will be offered for update status.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_security
  $fields[] = array(
    'field_name' => 'field_fserver_security',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'security\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Not a security release',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Security release',
      'weight' => '-5',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_versionextra
  $fields[] = array(
    'field_name' => 'field_fserver_versionextra',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fserver_versionextra][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Extra version',
      'weight' => '-7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fserver_versionmajor
  $fields[] = array(
    'field_name' => 'field_fserver_versionmajor',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'major\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Major version',
      'weight' => '-9',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_fserver_versionpatch
  $fields[] = array(
    'field_name' => 'field_fserver_versionpatch',
    'type_name' => 'fserver_release',
    'display_settings' => array(
      'weight' => '-8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return fserver_cck_options(\'patch\');',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Patch version',
      'weight' => '-8',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Core compatibility'),
    t('Drush Make Script'),
    t('Extra version'),
    t('Machine name'),
    t('Major version'),
    t('Package'),
    t('Packaging method'),
    t('Patch version'),
    t('Project'),
    t('Recommended'),
    t('Repository URL'),
    t('Security release'),
    t('Type'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _fserver_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-project';
  $context->description = 'Feature Server Releases';
  $context->tag = 'fserver';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        '0' => 'fserver_project',
        '1' => 'fserver_distro',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fserver_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'fserver_releases-block_1',
          'weight' => 7,
          'region' => 'content',
          'status' => '0',
          'label' => 'fserver_releases: Recommended releases',
          'type' => 'context_ui',
        ),
      ),
    ),
  );

  $export['fserver-section-project'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _fserver_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "system" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _fserver_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Projects',
    'path' => 'fserver',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Projects'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _fserver_user_default_permissions() {
  $permissions = array();

  // Exported permission: create fserver_distro content
  $permissions[] = array(
    'name' => 'create fserver_distro content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: create fserver_project content
  $permissions[] = array(
    'name' => 'create fserver_project content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: create fserver_release content
  $permissions[] = array(
    'name' => 'create fserver_release content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_distro content
  $permissions[] = array(
    'name' => 'delete own fserver_distro content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_project content
  $permissions[] = array(
    'name' => 'delete own fserver_project content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_release content
  $permissions[] = array(
    'name' => 'delete own fserver_release content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_distro content
  $permissions[] = array(
    'name' => 'edit own fserver_distro content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_project content
  $permissions[] = array(
    'name' => 'edit own fserver_project content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_release content
  $permissions[] = array(
    'name' => 'edit own fserver_release content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _fserver_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_update_type_fserver_distro';
  $strongarm->value = 1;

  $export['atrium_update_type_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_update_type_fserver_project';
  $strongarm->value = 1;

  $export['atrium_update_type_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_update_type_fserver_release';
  $strongarm->value = 1;

  $export['atrium_update_type_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fserver_distro';
  $strongarm->value = 0;

  $export['comment_anonymous_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fserver_project';
  $strongarm->value = 0;

  $export['comment_anonymous_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fserver_release';
  $strongarm->value = 0;

  $export['comment_anonymous_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fserver_distro';
  $strongarm->value = '3';

  $export['comment_controls_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fserver_project';
  $strongarm->value = '3';

  $export['comment_controls_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fserver_release';
  $strongarm->value = '3';

  $export['comment_controls_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fserver_distro';
  $strongarm->value = '4';

  $export['comment_default_mode_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fserver_project';
  $strongarm->value = '4';

  $export['comment_default_mode_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fserver_release';
  $strongarm->value = '4';

  $export['comment_default_mode_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fserver_distro';
  $strongarm->value = '1';

  $export['comment_default_order_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fserver_project';
  $strongarm->value = '1';

  $export['comment_default_order_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fserver_release';
  $strongarm->value = '1';

  $export['comment_default_order_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fserver_distro';
  $strongarm->value = '50';

  $export['comment_default_per_page_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fserver_project';
  $strongarm->value = '50';

  $export['comment_default_per_page_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fserver_release';
  $strongarm->value = '50';

  $export['comment_default_per_page_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fserver_distro';
  $strongarm->value = '0';

  $export['comment_form_location_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fserver_project';
  $strongarm->value = '0';

  $export['comment_form_location_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fserver_release';
  $strongarm->value = '0';

  $export['comment_form_location_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fserver_distro';
  $strongarm->value = '0';

  $export['comment_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fserver_project';
  $strongarm->value = '0';

  $export['comment_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fserver_release';
  $strongarm->value = '0';

  $export['comment_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fserver_distro';
  $strongarm->value = '1';

  $export['comment_preview_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fserver_project';
  $strongarm->value = '1';

  $export['comment_preview_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fserver_release';
  $strongarm->value = '1';

  $export['comment_preview_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fserver_distro';
  $strongarm->value = '1';

  $export['comment_subject_field_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fserver_project';
  $strongarm->value = '1';

  $export['comment_subject_field_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fserver_release';
  $strongarm->value = '1';

  $export['comment_subject_field_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_fserver_distro';
  $strongarm->value = '0';

  $export['comment_upload_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_fserver_project';
  $strongarm->value = '0';

  $export['comment_upload_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_fserver_release';
  $strongarm->value = '0';

  $export['comment_upload_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_fserver_distro';
  $strongarm->value = 'none';

  $export['comment_upload_images_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_fserver_project';
  $strongarm->value = 'none';

  $export['comment_upload_images_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_fserver_release';
  $strongarm->value = 'none';

  $export['comment_upload_images_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_fserver_distro';
  $strongarm->value = 0;

  $export['content_profile_use_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_fserver_project';
  $strongarm->value = 0;

  $export['content_profile_use_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_fserver_release';
  $strongarm->value = 0;

  $export['content_profile_use_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_fserver_distro';
  $strongarm->value = 0;

  $export['enable_revisions_page_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_fserver_project';
  $strongarm->value = 0;

  $export['enable_revisions_page_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_fserver_release';
  $strongarm->value = 0;

  $export['enable_revisions_page_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_distro';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_project';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_release';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_fserver_distro';
  $strongarm->value = array(
    '0' => 'thread',
    '1' => 'nodetype',
    '2' => 'author',
  );

  $export['notifications_content_type_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_fserver_project';
  $strongarm->value = array(
    '0' => 'thread',
    '1' => 'nodetype',
    '2' => 'author',
  );

  $export['notifications_content_type_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_fserver_release';
  $strongarm->value = array(
    '0' => 'thread',
    '1' => 'nodetype',
    '2' => 'author',
  );

  $export['notifications_content_type_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_fserver_distro';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_fserver_project';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_fserver_release';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_fserver_distro';
  $strongarm->value = 0;

  $export['show_diff_inline_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_fserver_project';
  $strongarm->value = 0;

  $export['show_diff_inline_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_fserver_release';
  $strongarm->value = 0;

  $export['show_diff_inline_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_fserver_distro';
  $strongarm->value = 0;

  $export['show_preview_changes_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_fserver_project';
  $strongarm->value = 0;

  $export['show_preview_changes_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_fserver_release';
  $strongarm->value = 0;

  $export['show_preview_changes_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_distro';
  $strongarm->value = '0';

  $export['upload_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_project';
  $strongarm->value = '0';

  $export['upload_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fserver_release';
  $strongarm->value = '0';

  $export['upload_fserver_release'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_links_fserver_distro';
  $strongarm->value = '0';

  $export['xref_links_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_links_fserver_project';
  $strongarm->value = '0';

  $export['xref_links_fserver_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_view_fserver_distro';
  $strongarm->value = 0;

  $export['xref_view_fserver_distro'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xref_view_fserver_project';
  $strongarm->value = 0;

  $export['xref_view_fserver_project'] = $strongarm;
  return $export;
}
