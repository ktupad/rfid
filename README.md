
# Aplikasi Sensor RFID
Wemos D1 Mini / ESP2866, MFRC522.  
Ktupad MVC Framework  
Demo: http://rfid-ktupad.gearhostpreview.com/  


## Import Aplikasi
1. Clone https://github.com/ktupad/rfid.git
2. Beri nama rfidapp atau nama yang tersedia, lalu klik Begin Import

## Koneksi Cloud
1. Login ke https://my.gearhost.com/account/login
2. Add Cloud, pilih nama rfidapp atau nama yang tersedia, pilih Free, lalu Create Cloudsite
3. Pilih Cloud, klik Publish, klik Github, lalu Authorize, klik Repository, lalu klik Activate.

## Create Database
1. login ke https://my.gearhost.com/Databases, lalu Create Database,
pilih nama rfidapp atau nama yag tersedia,
pilih Mysql Free, Lalu klik Create Empty Database,
2. Salin server, username, password dan nama database.

## Koneksi Database
1. login ke https://github.com,
2. pilih rfidapp, lalu edit app.php, isikan server, username, password dan nama database dari gear host.
lalu klik Commit Changes
3. pilih rfidapp, lalu edit app.js ,isikan conf.host dengan alamat gearhost,
contoh: http://rfidapp.gearhostpreview.com/
lalu klik commit changes.

## Install Database
1. http://rfidapp.gearhostpreview.com/app.php?mod=install
2. Jalankan aplikasi http://rfidapp.gearhostpreview.com/

## Upload IoT
1. download dan edit rfid-ktupad.ino
2. edit ssid dan pass
3. edit host menjadi http://rfidapp.gearhostpreview.com/app.php?iot&mod=update&id=1&data[nama]=
4. Upload kedalam board.


Done.

![Ktupad rfid App](rfid-1.png)  
![Ktupad rfid App](rfid-1.jpeg)  
![Ktupad rfid App](rfid-1.gif)
