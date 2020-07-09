<?php
  print ($class !== NULL) ? "<div class='$class'>" : "<div>";

  if ($href !== NULL) {
    print "<a href='$href'>";
  }

  print $text;

  if ($href !== NULL) {
    print "</a>";
  }

  print "</div>";
?>