<?php
class mod extends ktupad {
  public $mn='data';
  public $tb='data';
  public $data='{"id":"1","nama":"Satu"}';
  public function update() {
    $tb=$this->tb;
    $id=$this->id;
    $nama=$this->data['nama'];
    $sql = "UPDATE $tb SET nama='$nama' where id='$id'";
    $conn=$this->connect();
    $result = $conn->query($sql);
    if($result){ echo "Berhasil Update:".$id;}
    $conn->close();
  }

}

?>
