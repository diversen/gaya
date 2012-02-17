<?php

include_once "layout2.php";

template::init('gaya');

$template = config::getModuleIni('gaya_template');
if (!$template) $template = 'default.inc';

include_once "templates/$template";
