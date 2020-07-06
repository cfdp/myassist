/**
 * Created by jubk on 6/10/15.
 */

/* global Opeka */

var Opeka = Opeka;

(function(Opeka, $) {
    $(function() {
        var io_socket = io('http://myassist.localhost:3000/', {'reconnection': false}),
            outputElem = document.getElementById('chat-status-output'),
            buttonElem = document.getElementById('chat-status-button');
        io_socket.on("room-created", function(data) {
            outputElem.value += "Room created: " + JSON.stringify(data) + "\n\n";
        });
        io_socket.on("chat-status", function(data) {
            outputElem.value += "Room status: " + JSON.stringify(data) + "\n\n";
        });
    });
//--></script>
})(Opeka, jQuery);