<?php

/**
 * @file
 * Helper function to output the correct forms
 */

/**
 * Give form type, output form data
 */
function visual_form_alter_getforms($type) {
  $methods = array(
    '#button_type' => array('type' => 'textfield'),
    '#collapsed' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),
    '#collapsible' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),   
    '#cols' => array('type' => 'textfield'),
    '#default_value' => array('type' => 'textfield'),
    '#description' => array('type' => 'textarea'),
    '#disabled' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),
    '#field_prefix' => array('type' => 'textfield'),
    '#field_suffix' => array('type' => 'textfield'),
    '#markup' => array('type' => 'textarea'),
    '#maxlength' => array('type' => 'textfield'),
    '#multiple' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),
    '#prefix' => array('type' => 'textarea'),
    '#required' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),
    '#resizable' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      '0' => t('False'),
      '1' => t('True')
    )),
    '#rows' => array('type' => 'textfield'),
    '#size' => array('type' => 'textfield'),
    '#src' => array('type' => 'textfield'),
    '#suffix' => array('type' => 'textarea'),
    '#title' => array('type' => 'textfield'),
    '#title_display' => array('type' => 'select', 'options' => array(
      ' ' => t('Default'),
      'before' => t('Before'),
      'after' => t('After'),
      'invisible' => t('Invisible'),
      'attribute' => t('Attribute')
    )),
    '#value' => array('type' => 'textfield'),
    '#weight' => array('type' => 'textfield')
  );
  
  $types = array(
    'button' => array(
      '#button_type', 
      '#disabled',
      '#prefix',
      '#suffix',
      '#value',
      '#weight'
    ),
    'checkbox' => array(
      '#default_value', 
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#prefix',
      '#required',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'checkboxes' => array(
      '#default_value', 
      '#description', 
      '#disabled',
      '#prefix',
      '#required',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'date' => array(
      '#default_value', 
      '#description', 
      '#disabled',
      '#prefix',
      '#required',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'fieldset' => array(
      '#collapsed', 
      '#collapsible', 
      '#description',
      '#prefix',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'file' => array(
      '#description', 
      '#disabled',
      '#prefix',
      '#required',
      '#size',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'hidden' => array(
      '#default_value',
      '#prefix',
      '#suffix',
      '#value',
      '#weight'
    ),
    'image_button' => array(
      '#button_type', 
      '#disabled',
      '#prefix',
      '#src',
      '#suffix',
      '#value',
      '#weight'
    ),
    'item' => array(
      '#description',
      '#markup',
      '#prefix',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'machine_name' => array(
      '#field_prefix', 
      '#field_suffix',
      '#prefix',
      '#suffix',
      '#weight'
    ),
    'markup' => array(
      '#markup',
      '#prefix',
      '#suffix',
      '#weight'
    ),
    'password' => array(
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#maxlength',
      '#prefix',
      '#required',
      '#size',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'password_confirm' => array(
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#maxlength',
      '#prefix',
      '#required',
      '#size',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'radio' => array(
      '#default_value', 
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#prefix',
      '#required',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'radios' => array(
      '#default_value', 
      '#description', 
      '#disabled',
      '#prefix',
      '#required',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'select' => array(
      '#default_value', 
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#multiple',
      '#prefix',
      '#required',
      '#size',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'submit' => array(
      '#button_type', 
      '#disabled',
      '#prefix',
      '#suffix',
      '#value',
      '#weight'
    ),
    'tableselect' => array(
      '#default_value',
      '#multiple',
      '#prefix',
      '#suffix',
      '#weight'
    ),
    'text_format' => array(
      '#cols', 
      '#default_value', 
      '#description', 
      '#disabled',
      '#prefix',
      '#required',
      '#resizable',
      '#rows',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'textarea' => array(
      '#cols', 
      '#default_value',
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#prefix',
      '#required',
      '#resizable',
      '#rows',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
    ),
    'textfield' => array(
      '#cols',
      '#default_value', 
      '#description', 
      '#disabled', 
      '#field_prefix', 
      '#field_suffix',
      '#maxlength',
      '#prefix',
      '#required',
      '#size',
      '#suffix',
      '#title',
      '#title_display',
      '#weight'
     ),
  );

  if (!isset($types[$type])) return FALSE;

  $returnvalue = array();
  foreach ($types[$type] as $method) {
    $returnvalue[$method] = $methods[$method];
  }

  return $returnvalue;
}