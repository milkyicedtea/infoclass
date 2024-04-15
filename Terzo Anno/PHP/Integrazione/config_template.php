<?php

// Just use this if you have mail server :)
//ini_set('SMTP', 'smtp.example.com');
//ini_set('smtp_port', 587); // Use the appropriate SMTP port
//ini_set('sendmail_from', 'username@proton.me');

function getConn()
{
	$db_host = 'localhost';
	$db_username = 'root';
	$db_password = '';
	$db_name = 'otp';
	$db_port = 3306;

	$conn = mysqli_connect($db_host, $db_username, $db_password, $db_name, $db_port);

	// MySQLi error
	if (mysqli_connect_errno()) {
			exit('Impossibile connettersi al database' . mysqli_connect_error());
	}
	return $conn;
}