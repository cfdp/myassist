<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <header class="header" id="header" role="banner">
    <div class="header__container">

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo">
          <img src="/sites/all/themes/myassist_theme/logo.svg" alt="<?php print t('Home'); ?>" class="header__logo-image" />
        </a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <div class="header__name-and-slogan" id="name-and-slogan">
          <?php if ($site_name): ?>
            <h1 class="header__site-name" id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>

      <?php print render($page['header']); ?>

      <?php if ($secondary_menu): ?>
        <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
          <?php print theme('links__system_secondary_menu', array(
            'links' => $secondary_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => $secondary_menu_heading,
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

    </div>
  </header>
  <?php if (isset($podcast_nid)): ?>
    <div class="header-img-wrapper">
      <div class="podcast-header">
        <?php print render($title_prefix); ?>
        <div class="podcast-header-title">
          <div class="podcast-header-title-wrapper">
            <?php if ($title): ?>
              <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
            <?php endif; ?>
            <?php if ($header_img_subtitle): ?>
              <h2 class="subtitle" id="page-subtitle"><?php print $header_img_subtitle ; ?></h2>
            <?php endif; ?>

            <?php print render($title_suffix); ?>
          </div>
        </div>
        <?php print render($page['content']['system_main']['nodes'][$podcast_nid]['field_podcast_header_img']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if (isset($generic_header_img_nid)): ?>
    <div class="header-img-wrapper">
      <div class="generic-header-img">
        <?php print render($title_prefix); ?>
        <div class="generic-header-img-title">
          <div class="generic-header-img-title-wrapper">
            <?php if ($title): ?>
              <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
            <?php endif; ?>
            <?php if (isset($header_img_subtitle)): ?>
              <h2 class="subtitle" id="page-subtitle"><?php print $header_img_subtitle ; ?></h2>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if (isset($cta_button_link)): ?>
              <?php print $cta_button_link; ?>
            <?php endif; ?>          
          </div>
        </div>
        <?php print render($page['content']['system_main']['nodes'][$generic_header_img_nid]['field_generic_header_img']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php print render($page['highlighted']); ?>

  <div id="main">
    <?php if (isset($podcast_nid) && !$is_podcast_archive): ?>
      <?php $breadcrumb = '<div class="breadcrumb"><a href="/podcasts"><< ' 
        . t('See all podcasts') .'</a></div>'; ?>
    <?php endif; ?>
    <div id="content" class="column" role="main">
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title && !isset($podcast_nid) && !isset($generic_header_img_nid)): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">

        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>

      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['navigation']); ?>

  <?php print render($page['footer']); ?>

</div>

<div class="bottom__container">
  <?php print render($page['bottom']); ?>
  <div id="cfdp-website-links">
    <div class="cfdp-website-link-items">
      <h2 class="block-title">Kender du vores andre rådgivninger?</h2>
      <div class="cfdp-website-link-item first"><a href="https://cyberhus.dk"><img src="/sites/all/themes/myassist_theme/images/cyberhus-dark.png" alt="cyberhus" /></a></div>
      <div class="cfdp-website-link-item middle"><a href="https://netstof.dk"><img src="/sites/all/themes/myassist_theme/images/netstof-dark.png" alt="netstof" /></a></div>
      <div class="cfdp-website-link-item middle"><a href="https://mitassist.dk/"><img src="/sites/all/themes/myassist_theme/images/mitassist-dark.png" alt="mitassist" /></a></div>
      <div class="cfdp-website-link-item last"><a href="https://gruppechat.dk"><img src="/sites/all/themes/myassist_theme/images/gruppechat-dark.png" alt="gruppechat" /></a></div>
    </div>
  </div>
</div>
