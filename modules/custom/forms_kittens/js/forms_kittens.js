/**
 * @file
 * Custom JS interactions for the kittens form.
 */

Drupal.behaviors.forms_kittens = {
  attach : function (context, settings) {
    jQuery('#forms-kittens-form div.form-item').hover(
      function () { jQuery(this).addClass('form-item-hover'); },
      function () { jQuery(this).removeClass('form-item-hover'); }
    );
  }
};