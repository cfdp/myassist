<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
  <?php endif; ?>
</head>
<body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
<div id="center">
  <?php print $body ?>
</div>
</body>
</html>