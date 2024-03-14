<?php
	// Use sessions
	session_start();
	// If user is not logged in redirect to login page
	if (!isset($_SESSION['logged-in'])) {
		header('location: register-login/register.html');
		exit;
	}
?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="UTF-8">
		<title>Jujutsu Kaisen Cursed Clash</title>
		<link rel="icon" type="image/x-icon" href="../Assets/favicon.ico">
		<link rel="stylesheet" type="text/css" href="../CSS/jjk.css">
		<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css"
			integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A=="
			crossorigin="anonymous" referrerpolicy="no-referrer">
		<link rel="stylesheet"
			href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0"/>
	</head>
	<body class="home">
		<nav class="nav-top">
			<div>
				<h1>GameHaven <i class="material-symbols-outlined">stadia_controller</i></h1>
				<a href="../home.php"><i class="fas fa-home"></i>Home</a>
				<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
				<a href="../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
				<hr>
				<p>Welcome back, <?= $_SESSION['name'] ?>!</p>
			</div>
		</nav>

		<div class="main-div">
			<h2 class="game-title">Jujutsu Kaisen Cursed Clash</h2>
			<p class="game-intro italic">
				"In questo gioco d'azione 2 contro 2, patrai padornoggiare le tecniche
				di più di 15 potenti stregoni delle arti occulte! Scegli il tuo partner e
				crea combinazioni uniche che rispecchino il tuo stile di gioco"
			</p>

				<section class="characters-section">
					<div class="character">
						<div
							class="character-card"
							data-description=
								"Rune è uno dei personaggi principali del capitolo 1 di Paper Lily. Aiuta a guidare
								Lacie al Faro e può fornire oggetti utili al giocatore in cambio di rune
								collezionabili durante il gioco"
						>
							<img src="../Assets/JujutsuKaisen/Nobara-Kugisaki.png" alt="Nobara Kugisaki" draggable="false">
							<h3>Nobara Kugisaki</h3>
						</div>
					</div>

					<div class="character">
						<div
							class="character-card"
							data-description=
								"Lacie è la protagonista nel capitolo 1 di Paper Lily, una ragazza cupa e insicura
					 			che parla raramente ed evita le interazioni. Dopo una serie di sfortune,Lacie riceve
					 			una misteriosa lettera d'oro dopo una serie di disgrazie che la trasporta in un
					 			mondo dove cerca una cura per la sua condizione anormale."
						>
							<img src="../Assets/JujutsuKaisen/Yuji-Itadori.png" alt="Yuji Itadori" draggable="false">
							<h3>Yuji Itadori</h3>
						</div>
					</div>

					<div class="character">
						<div
							class="character-card"
							data-description=
								"Sai è il deuteragonista nel capitolo 1 di Paper Lily e il secondo personaggio
					 			del gruppo ad unirsi a Lacie dopo Aoi. Nonostante il suo ruolo nella storia,
					 			non si sa molto di lui nel capitolo, anche se le sue azioni e la sua personalità
					 			la dicono lunga sul suo personaggio."
						>
							<img src="../Assets/JujutsuKaisen/Satoru-Gojo.png" alt="Satoru Gojo" draggable="false">
							<h3>Satoru Gojo</h3>
						</div>
					</div>

					<div class="character">
						<div
							class="character-card"
							data-description=
								"Miss Knives, boss del primo capitolo di Paper Lily, è un personaggio enigmatico
								noto per la sua abilità con i coltelli. Il suo ruolo chiave nella trama aggiunge
								mistero, rivelando vari segreti intricati legati al mondo del gioco."
						>
							<img src="../Assets/JujutsuKaisen/Mahito.png" alt="Mahito" draggable="false">
							<h3>Mahito</h3>
						</div>
					</div>
				</section>
		</div>

		<footer>
			&copy; 2024 GameHaven. All rights reserved.
		</footer>
	</body>
</html>
