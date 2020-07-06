/**
 * Created by jubk on 7/2/15.
 */
var Opeka = Opeka || {};

(function(Opeka, $) {
    var currentStatus = null;

    Opeka.ChatUpdates = {
        'io_socket': null,
        '$el': null,

        'initialize': function() {
            var self = this;
                io_url = Drupal.settings.opeka.socket_io_url || 'http://localhost:3000/opeka';

            self.io_socket = io(io_url, {'reconnection': false});

            self.io_socket.on("chat_status", function(newStatus) {
                self.extendStatus(newStatus);
                self.update(newStatus);
            });
        },

        'on': function() {
            this.$el.on.apply(this.$el, arguments);
        },
        'trigger': function() {
            this.$el.trigger.apply(this.$el, arguments);
        },

        'calculateRoomTypeStatus': function(status, type) {
            var self = this,
                roomTypeData = status.rooms[type];

            // If chat is closed everything else is closed
            if(!roomTypeData || !status.chatOpen) {
                return "closed";
            }
            // If there are any rooms flagged as active the chat is open
            if(roomTypeData.active > 0) {
                return "open";
            }

            // If there full rooms the chat has status of busy
            if(roomTypeData.full > 0) {
                return "busy";
            }

            // No busy or available rooms means we're closed
            return "closed";
        },

        'extendStatus': function(status) {
            var self = this;
            status.pair_room_status = self.calculateRoomTypeStatus(status, "pair");
            status.group_room_status = self.calculateRoomTypeStatus(status, "group");
        },

        'update': function(newStatus) {
            var self = this,
                oldStatus = currentStatus;
            currentStatus = newStatus;

            var groupRoomName = (newStatus.roomsList.length > 0) && newStatus.roomsList[0].name;

            // If this is our first update, just set the data and notify the subsystem
            if(!oldStatus) {
                self.trigger("initial_status", newStatus);
                self.trigger("pair_status_changed", newStatus.pair_room_status);
                self.trigger("group_status_changed", [newStatus.group_room_status, groupRoomName]);
                return;
            }

            if(oldStatus.pair_room_status != newStatus.pair_room_status) {
                self.trigger("pair_status_changed", newStatus.pair_room_status);
            }
            if(oldStatus.group_room_status != newStatus.group_room_status) {
                self.trigger("group_status_changed", [newStatus.group_room_status, groupRoomName]);
            }

        },

        'getStatus': function() { return currentStatus; },

        'getSignInURL': function(type, callback) {
            var self = this;
            self.io_socket.emit("getDirectSignInURL", type, function(result) {
                callback("/opeka" + result.substr(result.indexOf("#")));
            });
        },

        'getRoomTypeStatus': function(type) {
            if(currentStatus)
                return currentStatus[type + "_room_status"];

            return null;
        }
    };

    Opeka.ChatUpdates.$el = $(Opeka.ChatUpdates);
    $(function() { Opeka.ChatUpdates.initialize() } );
})(Opeka, jQuery);