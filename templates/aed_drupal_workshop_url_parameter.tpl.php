<div class="container">
  <div class="container-header">
    <?php print $header_text; ?>
  </div>
  <div class="container-body">
    <?php print t('Your param sanitized is : @param', array('@param' => $param)); ?>
  </div>
  <?php if (!empty($node_rendered)): ?>
    <div class="container-node">
      <span>
        <?php print t('The node rendered is : '); ?>
      </span>
      <div>
        <?php print render($node_rendered); ?>
      </div>
    </div>
  <?php endif;?>
</div>
