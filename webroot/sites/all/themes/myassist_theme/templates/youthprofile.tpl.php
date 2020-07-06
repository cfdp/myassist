
<?php
$blocks = array("field_avatar","achievements","username","points","level","field_expertise","userinfo","membersince","field_quote");
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

<?php
if (array_key_exists("nodes", $content) && !in_array("nodes", $rendered_blocks)) {
  ?>
  <div class="section nodes">
    <h3><?php print t("Activities"); ?></h3>
    <?php
    print render($content["nodes"]);
    ?>
  </div>
  <?php
}
/*foreach ($content as $blockname => $blockvalue) {
  if (!in_array($blockname, $rendered_blocks)) {
    print render($blockvalue);
    $rendered_blocks[] = $blockname;
  }
}*/
?>