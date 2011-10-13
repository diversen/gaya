<?php

include_once "layout2.php";

class mainTemplate extends template {

/**
 * method for printing out template header
 *
 * @param  array    assoc array containing current page info
 */
public static function printHeader(){ ?>


<!doctype html>
<html lang="<?=register::$vars['coscms_main']['lang']?>">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title><?php echo $_SERVER['SERVER_NAME'] . MENU_SUB_SEPARATOR_SEC .  template::getTitle(); ?></title>


<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.16/themes/hot-sneaks/jquery-ui.css" />

    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.5.2/jquery.min.js"></script>
    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.16/jquery-ui.min.js"></script>

<script src="/js/jquery.tr.js"></script>
    <link href="/templates/gaya/grid.css?version=10" type="text/css" rel="stylesheet" media="screen"/>

<script type="text/javascript">
</script>
  
<?php

template::setJs ("/templates/gaya/js/helpers.js");


echo template::getMeta();
template::setTemplateCss('gaya', 10, 40);

echo template::getCss();
echo template::getInlineCss();


    echo template::getInlineJs();
echo template::getJs();

//print_r($_COOKIE);

?>


</head>
<body>

    <div id ="hidden">
<a href="/account/login/index">logon</a>
</div>
    

<div id ="page">

    <div class="row">
            <div class="column grid_12">
            <?php
$blocks = layout2::getBlock('blocks_top');
                foreach ($blocks as $key => $val){
                    print $val;
                }

?>
            </div>

    </div>

    <div class="row">
            <div class="column grid_3">
                <?php if (empty(register::$vars['coscms_main']['logo'])) { ?>
                <a id="logo_title" href="/"><?php echo $_SERVER['HTTP_HOST']?></a><?php
            } else { ?>
                <div id = "logo_img"><a href="/"><img alt="<?php echo $_SERVER['HTTP_HOST']?>" src="/logo/<?=register::$vars['coscms_main']['logo']?>" /></a></div><?php
            } ?>
            </div>
            <div class="column grid_6">
                <div id="main_menu">
                <?php
                    echo layout2::getMainMenu(); ?>
                </div>
            </div>
            <div class="column grid_3">
           &#160;
            </div>
    </div>

    <div class="row">
        <div class="column grid_3">
                <div id="sidebar_left">
                <?php

                $blocks = layout2::getBlock('blocks');
                foreach ($blocks as $key => $val){
                    echo $val;
                }

                ?>
                </div>
         </div>

         <div class="column grid_6">
             <div id="module_menu"><?php
               echo layout2::getModuleMenu(); ?>
             </div>
             <?php

            $message = session::getActionMessage();
            //echo $message;
            
            if (!empty($message)) { ?>
            
            <div class="system_message">
                <?=$message?>
            </div>
            
            <?php } ?>
             <div id="content">


<?php

// end of function

}

/**
 * method for print footer of page
 */
public static function printFooter(){ ?>


             </div>
        </div>
        <div class="column grid_3">
            <div id="sidebar_right">
                <?php

                $blocks_sec = layout2::getBlock('blocks_sec');
                foreach ($blocks_sec as $key => $val){
                    print $val;
                }

                ?>
            </div>
         </div>
    </div>


    <div class="row">
            <div class="column grid_12">
            <?=template::getEndContent()?>
            </div>
    </div>
    
</div>
    
    <?php


?>

</body>
</html>

<? 

    // end function

    }
    
// end class
}

