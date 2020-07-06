/**
 * Created by jubk on 7/6/15.
 */

/* global Drupal */

var Opeka = Opeka || {};

(function(Opeka, $, Drupal) {
    var displayRibbonMap = {
        'pair': { 'open': true, 'busy': true },
        'group': { 'open': true }
    };

    var RibbonStatus = {
        'initialize': function() {
            var self = this;
            $("#chatribbons div.ribbon").each(function() {
                var ribbon = this,
                    roomType = $(this).hasClass("pair") ? 'pair' : 'group';
                if(!self.updatesEnabled(roomType)) {
                    return true;
                }
                if(roomType == "pair") {
                    Opeka.ChatUpdates.on("pair_status_changed", function(ev, newStatus) {
                        if(self.updatesEnabled("pair")) {
                            RibbonStatus.changeStatus(ribbon, newStatus);
                            if(newStatus == "open") {
                                RibbonStatus.playNotificationSound();
                            }
                        }
                    });
                } else {
                    Opeka.ChatUpdates.on("group_status_changed", function(ev, newStatus, newName) {
                        if(self.updatesEnabled("group")) {
                            RibbonStatus.changeStatus(ribbon, newStatus, newName);
                        }
                    });
                }
            });
            $("#chatribbons div.ribbon .startbutton").on("click", function() {
                var $boxDiv = RibbonStatus.getRibbonElem(this),
                    status = RibbonStatus.getStatus($boxDiv),
                    roomType = $boxDiv.hasClass("pair") ? "pair" : "group";
                if (status == "open") {
                    var chatwindow = window.open("");
                    chatwindow.document.body.innerHTML = Drupal.t("Forbinder til chat...");
                    var killTimer = setTimeout(function() {
                        chatwindow.document.body.innerHTML = Drupal.t("Kunne ikke forbinde til chat. Lukker vindue.");
                        setTimeout(function() {
                            chatwindow.close();
                        }, 1000);
                    }, 5000);
                    Opeka.ChatUpdates.getSignInURL(roomType, function(url) {
                        clearTimeout(killTimer);
                        chatwindow.location = url;
                    });
                    
                }
            });
            $("#chatribbons div.ribbon .disable-notifications").on("click", function() {
                var $boxDiv = RibbonStatus.getRibbonElem(this),
                    roomType = $boxDiv.hasClass("pair") ? "pair" : "group";
                $.cookie("disable_" + roomType + "_notifications", "yes");
                $boxDiv.hide();
            });
            // Profile editing should open in new window.
            $("#chatribbons div.ribbon .configure-notifications a").on("click", function() {
                $(this).attr("target", '_blank');
            });
        },

        'getRibbonElem': function(elem) {
            var $elem = $(elem);
            var result = $(elem).parents("div.ribbon");
            if(result.length) {
                return result.first();
            }
            if($elem.is("div.ribbon")) {
                return $elem;
            }
            return $elem.find("div.ribbon").first();
        },

        'getStatus': function(boxElem) {
            return $(boxElem).attr("data-chat-status") || "hidden";
        },

        'changeStatus': function(boxElem, newStatus, newName) {
            var $boxElem = $(boxElem),
                status = RibbonStatus.getStatus($boxElem),
                chatType = $boxElem.hasClass("pair") ? "pair" : "group",
                showMap = displayRibbonMap[chatType];
            $boxElem.find(".chat-" + status).hide();
            $boxElem.find(".chat-" + newStatus).show();
            $boxElem.attr("data-chat-status", newStatus);
            $boxElem.removeClass(status);
            $boxElem.addClass(newStatus);
            if (newName) {
                $boxElem.find(".subject").text(newName);
            }

            if(showMap && showMap[status] !== showMap[newStatus]) {
                if(showMap[newStatus]) {
                    $boxElem.show("slide", { "direction": "up" });
                } else {
                    $boxElem.hide("slide", { "direction": "up" });
                }
            }
        },

        'playNotificationSound': function() {
            var elem = document.getElementById('ribbonnotifysound').play();
        },

        'updatesEnabled': function(roomType)  {
            var configKey = 'disable_' + roomType + '_notifications';
            if($.cookie(configKey) || Drupal.settings.opeka[configKey]) {
                return false;
            }
            return true;
        }
    };

    $(function() { RibbonStatus.initialize(); });

})(Opeka, jQuery, Drupal);
