<?php
ini_set('display_errors', 1);
error_reporting(E_ALL);

  include('ktupad/ktupad.php');
  class app extends mod {
  public $local= array(
    's' => 'den1.mysql2.gear.host',
    'u' => 'rfidktupad',
    'p' => 'Go1VX3-~7CR5',
    'n'=> 'rfidktupad'
    );
  }

  $app = new app();
  $app -> init();

?>
