<?php
ini_set('display_errors', 1);
error_reporting(E_ALL);

  include('ktupad/ktupad.php');
  class app extends mod {
  public $local= array(
    's' => 'localhost',
    'u' => 'ktupad',
    'p' => '1234',
    'n'=> 'demo'
    );
  }

  $app = new app();
  $app -> init();

?>
