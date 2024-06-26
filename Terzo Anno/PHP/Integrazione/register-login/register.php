<?php
    require_once '../config.php';
    // Connessione al database
    $conn = getConn();

    // Check params presence
	if (!isset($_POST['username'], $_POST['password'], $_POST['email'])){
		exit('Riempire tutti i campi.');
	}
	if (empty($_POST['username']) || empty($_POST['password']) || empty($_POST['email'])) {
		exit('Riempire tutti i campi.');
	}

	// Params validation
	if (!filter_var($_POST['email'], FILTER_VALIDATE_EMAIL)){
		exit('Email non valida.');
	}
	if (preg_match('/^[a-zA-Z0-9]+$/', $_POST['username']) == 0){
		exit('Username non valido.');
	}
	if (strlen($_POST['password']) > 255 || strlen($_POST['password']) < 4){
		exit('La lunghezza della password deve essere compresa tra 4 e 255 caratteri.');
	}

	$admin = 0;
	if (str_contains($_POST['username'], 'admin'))
	{
		$admin = 1;
	}

	if ($stmt = $conn->prepare('select id_utente, password from utenti where username = ?')){
		// Bind parameters (s = string, i = int, etc)
		$stmt->bind_param('s', $_POST['username']);
		$stmt->execute();
		$stmt->store_result();

		if ($stmt->num_rows > 0) {
			// Username already exists
			echo 'Username exists, please choose another!';
		}
		else {
			if ($stmt = $conn->prepare('insert into utenti(username, password, email, admin) values(?, ?, ?, ?)')){
//				Hash password
				echo "<script>alert('sto inserendo i dati')</script>";
				$password = password_hash($_POST['password'], PASSWORD_DEFAULT);
				$stmt->bind_param('ssss', $_POST['username'], $password, $_POST['email'], $admin);
				$stmt->execute();
//				echo "<script>alert('You are now successfully registered! You will be redirected to the login page in 5 seconds.')</script>";
				header('location: login.html');
			}
			else {
				// Insert error
				echo 'Could not prepare insert query.'. mysqli_error($conn);
			}
		}
		$stmt->close();
	}
	else {
		// Select error
		echo 'Could not prepare select query.'. mysqli_error($conn);
	}
	$conn->close();