<?php

// defines. Used for forms. 
define('HTML_FORM_TEXT_SIZE', 35);
define('HTML_FORM_MAX_FILE_SIZE', 1048576); // 1 MB
define('HTML_FORM_PASSWD_SIZE', 8);
define('HTML_FORM_TEXTAREA_WT', 50);
define('HTML_FORM_TEXTAREA_HT', 20);

// defines used for navigation
define('MENU_SUB_SEPARATOR', ' | ');
define('MENU_SUB_SEPARATOR_SEC', ' :: ');


/**
 * function for displaying a confirm message
 * @param   string   message positive confirmation on correct filled form
 */
function view_confirm($message){
    echo "<!-- view_confirm -->\n";
    echo "<div class=\"form_confirm\">\n";
    echo "<ul><li>$message</li></ul>\n";
    echo "</div>\n";
}

/**
 *
 * @param string   error message
 */
function view_error($message){
    echo "<!-- view_error -->\n";
    echo "<div class=\"form_error\">\n";
    echo "<p>$message</p></div>\n";

}

/**
 * function for printing a top line title of your page.
 * @param  string   headline message to be printed
 */
function headline_message($message){
    echo "<!-- headline_message -->\n";
    echo "<div class=\"headline\">\n";
    echo "$message\n";
    echo "</div>\n";
}