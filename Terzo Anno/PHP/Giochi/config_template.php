<?php

function getConn()
{
    $db_host = 'localhost';
    $db_username = 'root';
    $db_password = '';
    $db_name = 'giochi';
    $db_port = 3306;

    $conn = mysqli_connect($db_host, $db_username, $db_password, $db_name, $db_port);

    // MySQLi error
    if (mysqli_connect_errno()) {
        exit('Impossibile connettersi al database' . mysqli_connect_error());
    }
    return $conn;
}