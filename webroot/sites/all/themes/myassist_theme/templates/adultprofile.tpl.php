
<?php
$blocks = array("field_avatar","username","userinfo","field_expertise","field_biography");
$rendered_blocks = array();
?>

<div class="section">

  <div <?php print $content_attributes; ?>>
    <?php
    foreach ($blocks as $blockname) {
      if (array_key_exists($blockname, $content) && !in_array($blockname, $rendered_blocks)) {
        print render($content[$blockname]);
        $rendered_blocks[] = $blockname;
      }
    }
    ?>
  </div>

</div>