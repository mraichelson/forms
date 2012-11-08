<div id="kittens_form">
  <div class="row">
    <div class="columns"><?php print drupal_render($form['your_name']); ?></div>
    <div class="columns"><?php print drupal_render($form['likes_kittens']); ?></div>
  </div>
  <div class="row">
    <div class="columns"><?php print drupal_render($form['kinds_of_kittens']); ?></div>
    <div class="columns"></div>
  </div>
  <div class="row">
    <div class="columns"><?php print drupal_render($form['gives_consent']); ?></div>
    <div class="columns submit-button"><?php print drupal_render($form['submit']); ?></div>
  </div>
</div>

<?php /* !!! These elements always need to be output !!! */ ?>
<?php
  print drupal_render($form['form_build_id']);
  print drupal_render($form['form_token']);
  print drupal_render($form['form_id']);
?>