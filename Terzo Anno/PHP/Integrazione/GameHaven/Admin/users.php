<?php
    require '../config.php';

	session_start();

	if (!isset($_SESSION['logged-in']) or !$_SESSION['admin']) {
		echo "<script>alert('Non sei autorizzato ad accedere a questa pagina'); window.location.replace('../home.php')</script>";
		exit;
	}
?>

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Admin - Tabella Utenti</title>
	<link rel="icon" type="image/x-icon" href="../../favicon.ico">
	<link rel="stylesheet" href="../CSS/users.css">
	<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer">
	<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
</head>
<body class="home">
	<nav class="nav-top">
		<div>
			<h1>GameHaven <i class="material-symbols-outlined">stadia_controller</i></h1>
			<a href="../home.php"><i class="fas fa-home"></i>Home</a>
			<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
			<a href="../../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
			<hr>
			<p>Welcome back, <?=$_SESSION['name']?>!</p>
		</div>
	</nav>

	<div class="userTable">
		<h1>Tabella Utenti</h1>
		<?php
			$conn = getConn();

			// Verifica la connessione al database
			if (mysqli_connect_errno()) {
				exit('Impossibile connettersi al database: ' . mysqli_connect_error());
			}

			// Query per selezionare tutti gli utenti ordinati per ID
			$query = "SELECT * FROM utenti ORDER BY id_utente";
			$result = mysqli_query($conn, $query);

			// Verifica se ci sono risultati
			if (mysqli_num_rows($result) > 0) {
				echo "<table>";
				echo "<tr><th>ID Utente</th><th>Username</th><th>Email</th><th>Admin</th></tr>";
				// Ciclo per stampare ogni riga della tabella
				while ($row = mysqli_fetch_assoc($result)) {
					echo "<tr>";
					echo "<td>" . $row['id_utente'] . "</td>";
					echo "<td>" . $row['username'] . "</td>";
					echo "<td>" . $row['email'] . "</td>";
					echo "<td>" . ($row['admin'] ? 'Yes' : 'No') . "</td>";
					echo "</tr>";
				}
				echo "</table>";
			} else {
				echo "Nessun utente trovato.";
			}

			// Chiudi la connessione al database
			mysqli_close($conn);
		?>
	</div>

	<footer>
		&copy; 2024 GameHaven. All rights reserved.
	</footer>

</body>
</html>
