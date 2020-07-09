/**
 * Created by jubk on 6/10/15.
 */

/* global JST, Opeka */

var JST = JST || {},
    Opeka = Opeka;

/*
 Ved alle login:
 X Alle brugere bedes udfylde brugernavn, alder og køn. Ingen af felterne er obligatoriske.
 X Som hjælpetekst under brugernavn vil der stå: "Hvis du ikke angiver et brugernavn vil du blive tildelt navnet Anonym".
 X Hvis brugeren ikke er logget ind på myassist.dk:
 X  vil felterne stå tomme.
 Hvis brugeren er logget ind på sitet:
 Brugernavn, alder og køn er allerede udfyldt, overført fra brugerens profiloplysninger
 Hvis brugeren er logget ind men alligevel ønsker at skjule sine brugeroplysninger:
 Tilgængeligt afkrydsningsfelt: “Skjul mine brugeroplysninger i chatten”
 Tomme felter udfoldes, eller login formularen udskiftes med tomme felter.
 Hjælpetekst under brugernavn: "Vælg et alternativt brugernavn. Hvis du ikke angiver et brugernavn vil du blive tildelt navnet Anonym".
 Hjælpetekst over de tomme alder og køn-felter: “Det kan være nemmere at hjælpe dig, hvis du skriver din rigtige alder og køn, men det er ikke et krav”.

 */

(function(Opeka, JST, $) {
    // Method for wrapping template rendering in an additional function
    Opeka.wrap_template = function(name, wrapper) {
        var old_template = JST[name];

        JST[name] = function(data) {
            return wrapper(old_template, data);
        };

        // Copy source value from the old template, since it's exposed in underscore templates
        JST[name].source = old_template.source;

        return JST[name];
    };

    Opeka.extend_view = function(view, extend_data) {
        if(extend_data['events']) {
            view.prototype.events = _.extend(view.prototype.events, extend_data['events']);
            delete extend_data['events'];
        }
        view.prototype = _.extend(view.prototype, extend_data);
    };

    Opeka.extend_view(Opeka.SignInFormView, {
        'events': {
            "click .myassistconnect": "updateMyassistConnect",
            "change .nickname": "storeChangedInput",
            "change .age": "storeChangedInput",
            "change .gender": "storeChangedInput"
        },
        'storeChangedInput': function(ev) {
            $(ev.target).attr("data-changed-value", 1);
        },
        'updateMyassistConnect': function(ev) {
            var $checkbox = this.$el.find("input.myassistconnect").first(),
                $elems = this.$el.find("input.nickname, input.age, select.gender");
            if($checkbox.is(":checked")) {
                // Tell the chat server that we want to be anonymous
                Drupal.settings.opeka.user.want_to_be_anonymous = true;

                $.each($elems, function() {
                    var $this = $(this);
                    if(!$this.attr("data-changed-value")) {
                        $this.attr("data-old-value", $this.val());
                        $this.val('');
                    }
                });

                $('.myassist-message-loggedin').hide();
                $('.myassist-message-anonymous').show();
            } else {
                // Tell the chat server that we don't have to be anonymous
                Drupal.settings.opeka.user.want_to_be_anonymous = false;

                $.each($elems, function() {
                    var $this = $(this);
                    if(!$this.attr("data-changed-value")) {
                        $this.val($this.attr("data-old-value"));
                    }
                });

                $('.myassist-message-loggedin').show();
                $('.myassist-message-anonymous').hide();
            }
        }
    });

    // Replace the default FatalErrorDialogView
    (function() {
        var closeChatAndGoToFrontpage = function() {
            if(window.opener) {
                window.opener.location.href = "/";
                window.close();
            } else {
                window.location.href = "/";
            }
        }
        Opeka.FatalErrorDialogView = Opeka.DialogView.extend({
            initialize: function (options) {
                // Reload the page when the dialog is closed.
                options.dialogOptions = {
                    close: closeChatAndGoToFrontpage,
                    width: 400
                };

                options.content = this.make('p', { 'class': "message" }, options.message);

                // Call the parent initialize once we're done customising.
                Opeka.DialogView.prototype.initialize.call(this, options);

                // Add a reload button that does the same.
                this.addButton(Drupal.t('Reload the page'), function () {
                    window.location.reload();
                });
                this.addButton(Drupal.t('Go to the front page'), closeChatAndGoToFrontpage);

                return this;
            }
        });// END FatalErrorDialogView
    })();


    $(function() {
        var opeka_settings = Drupal.settings.opeka;
        // Replace templates that have been overwritten
        $('script[type="application/template"].replace-template').each(function() {
            var id = $(this).attr('id');
            delete JST[id];
            id = id.replace(/^replace_/, '');
            JST[id] = _.template(this.innerHTML);
        });
        // Add new templates
        $('script[type="application/template"].new-template').each(function() {
            JST[this.id] = _.template(this.innerHTML);
        });

        Opeka.wrap_template('opeka_connect_form_tmpl', function(old_template, data) {
            data.labels = _.extend(data.labels, {
                'myassistconnect': Drupal.t(
                    "Skjul mine brugeroplysninger i chatten"
                ),
                'nick_tooltip': Drupal.t(
                    "Hvis du ikke angiver et brugernavn vil du blive tildelt navnet Anonym"
                ),
                'nick_tooltip_anonymous': Drupal.t(
                    "Vælg et alternativt brugernavn. Hvis du ikke angiver et brugernavn vil du " +
                    "blive tildelt navnet Anonym"
                ),
                'personal_data_notice': Drupal.t(
                    "Det kan være nemmere at hjælpe dig, hvis du skriver din rigtige alder og køn, " +
                    "men det er ikke et krav"
                )
            });
            data.defaults = {
                'nickname': (
                    Opeka.clientData.isAdmin ?
                        Drupal.t('Rådgiver') :
                        opeka_settings.drupal_user_name || ''
                ),
                'age': opeka_settings.drupal_user_age || '',
                'gender': opeka_settings.drupal_user_gender || ''
            };
            data.is_admin = Opeka.clientData.isAdmin;
            data.logged_into_drupal = opeka_settings.logged_into_drupal;
            return old_template(data);
        });


        /* Overrule rendering function for sidebar to add additional javascript triggers */
        (function($) {
            var old_render = Opeka.ChatSidebarView.prototype.render;
            Opeka.ChatSidebarView.prototype.render = function() {
                console.log("Custom render called!");
                var ret = old_render.apply(this, arguments);
                this.$el.find('[data-toggle="dropdown"]').on("click", function(e) {
                    $(this).parent().find(".dropdown-menu").toggle();
                    e.preventDefault();
                    return false;
                });
                return ret;
            }
        })($);

    });

})(Opeka, JST, jQuery);