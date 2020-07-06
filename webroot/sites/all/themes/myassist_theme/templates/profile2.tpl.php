<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>

  <?php
    $profiletype = $elements["#entity"]->{"type"};
    if ($profiletype === "voksenprofil") {
      require "adultprofile.tpl.php";
    } else if ($profiletype === "ungeprofil") {
      require "youthprofile.tpl.php";
    }
  ?>
</div>
