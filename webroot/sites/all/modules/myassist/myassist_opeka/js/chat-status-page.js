/** global Opeka */

(function($) {
    var statusClasses = [
        'chat-initializing',
        'chat-open',
        'chat-closed',
        'chat-busy'
    ];

    var ChatStatus = {
        templates: {},

        initialize: function() {
            // Load templates
            $('script[type="application/template"].chat-status-template').each(function() {
                ChatStatus.templates[$(this).attr('id')] = _.template(this.innerHTML);
            });

            this.populateBoxes();

            if(Drupal.settings.drupal_logged_in || Drupal.settings.drupal_allow_chat_access) {
                $("div.chat-status-box span.startbutton").on("click", function() {
                    var $boxDiv = ChatStatus.getBoxElem(this),
                        status = ChatStatus.getStatus($boxDiv),
                        roomType = $boxDiv.hasClass("pair") ? "pair" : "group";

                    if(status == "chat-open") {
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
            } else {
                $("div.chat-status-box span.startbutton").addClass("disabled").html(
                    Drupal.t("You must be logged in to access the chat")
                )
            }
        },

        getBoxElem: function(elem) {
            var $elem = $(elem);
            var result = $(elem).parents("div.chat-status-box");
            if(result.length) {
                return result.first();
            }
            if($elem.is("div.chat-status-box")) {
                return $elem;
            }
            return $elem.find("div.chat-status-box").first();
        },
        getStatus: function(boxElem) {
            return $(boxElem).attr("data-chat-status") || "chat-initializing";
        },
        changeStatus: function(boxElem, newStatus) {
            var $boxElem = $(boxElem),
                status = ChatStatus.getStatus($boxElem);
            $boxElem.find("." + status).hide();
            $boxElem.find("." + newStatus).show();
            $boxElem.attr("data-chat-status", newStatus);
            $boxElem.removeClass(status);
            $boxElem.addClass(newStatus);
        },
        populateBoxes: function() {
            var self = this;
            $('div.chat-status-box.placeholder').each(function(i, elem) {
                var $elem = $(elem),
                    roomType = ($elem.hasClass("pair") ? "pair" : "group"),
                    currentStatus = Opeka.ChatUpdates.getRoomTypeStatus(roomType);
                $elem.removeClass("placeholder");
                var variables = {
                    'header': '',
                    'description': '',
                    'hours_header': '',
                    'hours': '',
                    'startbuttontext': ''
                };
                $elem.children(".data").each(function(i, elem) {
                    var varName = $(elem).attr("class").replace(/^data\s+/, "");
                    variables[varName] = elem.innerHTML.replace(/<br>/g, "");
                });
                $elem.html(self.templates.chat_status_box_tmpl(variables));

                if(currentStatus) {
                    self.changeStatus($elem, currentStatus);
                }

                // Listen for status changes for this type of room
                Opeka.ChatUpdates.on(roomType + "_status_changed", function(ev, newStatus) {
                    self.changeStatus($elem, "chat-" + newStatus);
                });
            });
        }
    };

    $(function() { ChatStatus.initialize(); });
})(jQuery);
