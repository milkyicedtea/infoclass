<?php
	session_start();
    require '../config.php';

$conn = getConn();

// Check params presence
	if (!isset($_POST['username'], $_POST['password'])){
		exit('Riempire tutti i campi.');
	}

	if ($stmt = $conn->prepare('select id_utente, `password`, `admin` from utenti where username = ?')){
		// Bind parameters (s = string, i = int, etc)
		$stmt->bind_param('s', $_POST['username']);
		$stmt->execute();
		$stmt->store_result();

		if ($stmt->num_rows > 0){
			$stmt->bind_result($id_db, $password_db, $admin);
			$stmt->fetch();

			// Account esiste, verifica password
			if (password_verify($_POST['password'], $password_db)){
				// Verifica completata!
				// Crea sessione
				session_regenerate_id();
				$_SESSION['logged-in'] = TRUE;
				$_SESSION['name'] = $_POST['username'];
				$_SESSION['id'] = $id_db;
				$_SESSION['admin'] = $admin;
				header('location: ../home.php');
			}
			else
			{
				// Password erraata
				echo "<script>alert('Incorrect password!');location.href = 'login.html';}</script>";
			}
		}
		else {
			echo "<script>alert('Incorrect username or the account does not exist');location.href = 'login.html'</script>";
		}

		$stmt->close();
	}

	$conn->close();