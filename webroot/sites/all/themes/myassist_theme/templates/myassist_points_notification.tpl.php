<?php

/**
 * @file
 * Myassist theme implementation for a point notification popup.
 *
 * Available variables:
 * - $points: Integer number of points gained. MAy be a negative number for loist points.
 * - $image: The renderable achievement's linked image (default or otherwise).
 * - $image_path: The raw path to the context-aware achievement image.
 */
?>
<div class="achievement-unlocked ui-corner-all achievement-notification element-hidden">
  <div class="achievement-image"><?php print render($image); ?></div>

  <div class="achievement-points-box">
    <div class="achievement-points"><?php print $points; ?></div>
  </div>

  <div class="achievement-body">
    <div class="achievement-header"><?php print $points >= 0 ? t('Earned points') : t('Lost points'); ?></div>
    <div class="achievement-title">
      <?php
        print $points >= 0 ?
          format_plural($points, 'One point gained', '@points points gained', array("@points" => $points)) :
          format_plural(-$points, 'One point lost', '@points points lost', array("@points" => -$points))
      ?>
    </div>
  </div>
</div>
