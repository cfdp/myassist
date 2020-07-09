(function($) {
    Drupal.behaviors.answersSort = {
        attach : function(context, settings) {
            var form = $("#views-exposed-form-question-answers-default");
            if (form && form.length) {
                form.find("input[type=submit]").hide();
                setTimeout(function () { // Execute after other scripts, or the view won't be found
                    var dropdown = form.find(".views-widget-sort-by select").get(0);
                    if (dropdown && !dropdown.exposedFormAjax) {
                        var container = form.parents(".view-id-question_answers");
                        var className = container.attr("className") || "";
                        var classNames = className.split(" ");
                        var domId;
                        for (var i = 0; i < classNames.length; i++) {
                            var m = /^view-dom-id-([0-9a-f]+)$/.exec(classNames[i]);
                            if (m) {
                                domId = m[1];
                                break;
                            }
                        }
                        if (domId) {
                            var view = Drupal.views.instances['views_dom_id:' + domId];
                            if (view && view.element_settings) {
                                var element_settings = $.extend({}, view.element_settings);
                                element_settings.event = "change";
                                dropdown.exposedFormAjax = new Drupal.ajax($(dropdown).attr('id'), dropdown, element_settings);
                            }
                        }
                    }
                }, 10);
            }

            form = $("#views-exposed-form-frontpage-page");
            if (form && form.length) {

                var container = form.find(".views-exposed-widgets");

                // Our options and what they control
                var desiredSorts = [
                    {name: "Nyeste spørgsmål", sortBy: "created", ascending: false, lockName: "All"},
                    {name: "Seneste aktivitet", sortBy: "latest_activity", ascending: false, lockName: "All"},
                    {name: "Mangler assist", sortBy: "answers_count", ascending: true, lockName: "2"}
                ];


                // Create a map for the sorting, so we can be lenient in the sort field value
                var sortByMap = {};
                var sortSelect = form.find("select[name='sort_by']");
                for (var i=0; i<desiredSorts.length; i++) {
                    var sort = desiredSorts[i].sortBy;
                    var option = sortSelect.find("option[value='"+sort+"'], option[value^='"+sort+"_']").first();
                    if (option && option.length) {
                        sortByMap[sort] = option.val();
                    }
                }


                // Replace all inputs and selects with hidden inputs. We tried just hiding them, but Drupal re-displays the lock seletors. So just nuke 'em
                var replacements = [];
                form.find("select,input[type!='submit']").each(function(){
                    var item = $(this);
                    var replacement = $("<input>");
                    replacement.attr({type: "hidden", name:item.attr("name"), value:item.val()});
                    replacements.push(replacement);
                });
                container.children().remove();
                for (var i=0; i<replacements.length; i++) {
                    container.append(replacements[i]);
                }
                var sortBy = form.find("input[name='sort_by']");
                var sortOrder = form.find("input[name='sort_order']");
                //var lockOp = form.find("input[name='question_locks_value_op']");
                var lockName = form.find("input[name='question_locks_value']");


                // Create a new dropdown with our options.
                var select = $("<select/>");
                select.addClass("form-select");
                select.attr("id", "sorting");
                for (var i=0; i<desiredSorts.length; i++) {
                    var sort = desiredSorts[i];
                    var option = $("<option/>");
                    option.text(sort.name);
                    option.attr("value", i);
                    if (sortByMap[sort.sortBy] == sortBy.val() && (sort.ascending == (sortOrder.val() == "ASC"))) {
                        option.attr("selected", "selected");
                    }
                    select.append(option);
                }


                // When an option is selected, set the other fields accordingly and submit the form
                select.change(function(){
                    var sort = desiredSorts[$(this).val()];
                    sortBy.val(sortByMap[sort.sortBy]);
                    sortOrder.val(sort.ascending ? "ASC":"DESC");
                    //lockOp.val(sort.lockOp);
                    lockName.val(sort.lockName);
                    form.submit();
                });

                // Create a label and append our elements to the container
                var label = $("<label/>");
                label.attr("for", select.attr("id"));
                label.text("Sortering: ");

                container.append(label, select);
            }
        }
    };
    Drupal.behaviors.answersComments = {
        attach : function(context, settings) {
            // Attach the function to a button attached to a question or an answer
            // Attach to a button attached to a comment
            jQuery('.answers-comment-button, .answersComments .comment-reply', context).click(function(){
                var form = $(this).parents(".answers-body-wrapper").find('form.comment-form');
                form.show('fast');
                return false;
            });
            // Show the filter help when help button clicked
            jQuery('.answers-form-filter-help', context).click(function(){
                var form =  $(this).parents(".form-wrapper").find('.filter-wrapper');
                form.show('fast');
                return false;
            });
        }
    };
}(jQuery));
