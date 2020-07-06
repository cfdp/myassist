<?php
/**
 * @file
 * Custom HTML used for displaying Opeka chat notification ribbons.
 */
?>

<div id="chatribbons">
    <audio id="ribbonnotifysound" src="<?php print $notification_sound; ?>" preload="auto"></audio>
    <div class="chatribbons-container">
        <div class="ribbon pair hidden">
            <div class="information">
                <span class="ribbon-header"><?php print t("Rådgivnings-chat") ?></span>
                <div class="chatstatus-message">
                    <span class="chat-open"><?php print t("Chatten er åben") ?></span>
                    <span class="chat-busy"><?php print t("Chatten er optaget") ?></span>
                </div>
                <div class="startbutton click-control">
                    <?php print t("Start chat") ?>
                </div>
            </div>
            <div class="controls">
                <?php if (FALSE) { // Disabled by request in ticket #13877 ?>
                <span class="configure-notifications"><a href="/user/edit"><?php print t("Settings") ?></a></span>
                <?php } ?>
                <span class="disable-notifications click-control">&#10006;</span>
            </div>
        </div>
        <div class="ribbon group hidden">
            <div class="information">
                <span class="ribbon-header"><?php print t("Gruppe-chat") ?></span>
                <div class="chatstatus-message">
                    <span class="subject"></span>
                    <span class="councillor"></span>
                </div>
                <div class="startbutton click-control">
                    <?php print t("Start chat") ?>
                </div>
            </div>
            <div class="controls">
                <?php if (FALSE) { // Disabled by request in ticket #13877 ?>
                <span class="configure-notifications"><a href="/user/edit">&#9784;</a></span>
                <?php } ?>
                <span class="disable-notifications click-control">&#9747;</span>
            </div>
        </div>
    </div>
</div>