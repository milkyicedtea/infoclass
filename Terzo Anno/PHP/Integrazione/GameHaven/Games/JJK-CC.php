<?php
	// Use sessions
	session_start();
	// If user is not logged in redirect to login page
	if (!isset($_SESSION['logged-in'])) {
		header('location: ../register-login/register.html');
		exit;
	}
?>

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Jujutsu Kaisen Cursed Clash</title>
	<link rel="icon" type="image/x-icon" href="../../favicon.ico">
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
			<a href="../../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
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
						"Nobara Kugisaki è il tritagonista della serie Jujutsu Kaisen. È una studentessa del
						 primo anno e stregone jujutsu di grado 3 alla Tokyo Jujutsu High che studia con Satoru
						 Gojo insieme a Yuji e Megumi."
				>
					<img src="../Assets/JujutsuKaisen/Nobara-Kugisaki.png" alt="Nobara Kugisaki" draggable="false">
					<h3>Nobara Kugisaki</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
						"Yuji Itadori è il protagonista principale della serie Jujutsu Kaisen.
						Yuji viveva una vita normale finché non incontrò Megumi e mangiò una delle
						dita di Sukuna."
				>
					<img src="../Assets/JujutsuKaisen/Yuji-Itadori.png" alt="Yuji Itadori" draggable="false">
					<h3>Yuji Itadori</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
						"Satoru Gojo è uno dei principali protagonisti della serie Jujutsu Kaisen.
						È uno stregone jujutsu di grado speciale riconosciuto come il più forte al mondo.
						Lavora come insegnante alla Tokyo Jujutsu High"
				>
					<img src="../Assets/JujutsuKaisen/Satoru-Gojo.png" alt="Satoru Gojo" draggable="false">
					<h3>Satoru Gojo</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
						"Mahito è uno dei principali antagonisti della serie Jujutsu Kaisen.
						È uno spirito maledetto di grado speciale non registrato.
						L'obiettivo finale del suo gruppo è l'eradicazione dell'umanità e
						la sostituzione della popolazione con spiriti maledetti."
				>
					<img src="../Assets/JujutsuKaisen/Mahito.png" alt="Mahito" draggable="false">
					<h3>Mahito</h3>
				</div>
			</div>
		</section>

		<iframe
			src="https://www.youtube.com/embed/pSKK1Mm7qmE?autoplay=1&mute=1&vq=hd720"
		>
		</iframe>

	</div>

	<footer>
		&copy; 2024 GameHaven. All rights reserved.
	</footer>
</body>
</html>
