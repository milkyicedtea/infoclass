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
		<title>Demon Slayer -Kimetsu no Yaiba- The Hinokami Chronicles</title>
		<link rel="icon" type="image/x-icon" href="../../favicon.ico">
		<link rel="stylesheet" type="text/css" href="../CSS/demonSlayer.css">
		<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer">
		<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
	</head>
	<body class = "home">
	<nav class = "nav-top">
		<div>
			<h1>GameHaven <i class="material-symbols-outlined">stadia_controller</i></h1>
			<a href="../home.php"><i class="fas fa-home"></i>Home</a>
			<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
			<a href="../../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
			<hr>
			<p>Welcome back, <?=$_SESSION['name']?>!</p>
		</div>
	</nav>

	<div class="main-div">
		<h2 class="game-title">Demon Slayer -Kimetsu no Yaiba- The Hinokami Chronicles</h2>
		<p class="game-intro italic">
			"Demon Slayer: Kimetsu no Yaiba - The Hinokami Chronicles è un videogioco di azione e
			avventura di combattimento in terza persona. È il primo gioco di Demon Slayer ad essere rilasciato."
		</p>

		<section class="characters-section">

			<div class="character">
				<div
					class="character-card"
					data-description=
					"Inosuke Hashibira è uno dei personaggi principali di Demon Slayer e compagno di viaggio
					 di Tanjiro. È anche un cacciatore di demoni nel Corpo degli Ammazzademoni."
				>
					<img src="../Assets-GH/DemonSlayer/Inosuke.png" alt="Inosuke Hashibira" draggable="false">
					<h3>Inosuke Hashibira</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
					"Tanjiro Kamado è il protagonista principale di Demon Slayer: Kimetsu no Yaiba.
					È un cacciatore di demoni del Corpo degli Ammazzademoni, che si è unito per cercare un
					rimedio per sua sorella, Nezuko Kamado, e farla tornare di nuovo umana."
				>
					<img src="../Assets-GH/DemonSlayer/Tanjiro.png" alt="Tanjiro Kamado" draggable="false">
					<h3>Tanjiro Kamado</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
					"Nezuko Kamado è il deuteragonista di Demon Slayer: Kimetsu no Yaiba.
					È un demone e la sorella minore di Tanjiro Kamado.
					Precedentemente umana, è stata attaccata e trasformata in un demone."
				>
					<img src="../Assets-GH/DemonSlayer/Nezuko.png" alt="Nezuko Kamado" draggable="false">
					<h3>Nezuko Kamado</h3>
				</div>
			</div>

			<div class="character">
				<div
					class="character-card"
					data-description=
					"Kyojuro Rengoku è uno dei principali personaggi secondari di Demon Slayer:
					Kimetsu no Yaiba e un personaggio importante nel secondo arco narrativo.
					È un cacciatore di demoni del Corpo degli Ammazzademoni e Pilastro della Fiamma"
				>
					<img src="../Assets-GH/DemonSlayer/Rengoku.png" alt="Kyojuro Rengoku" draggable="false">
					<h3>Kyojuro Rengoku</h3>
				</div>
			</div>

		</section>

		<iframe
			src="https://www.youtube.com/embed/b5dvqEBqovI?autoplay=1&mute=1&vq=hd720"
		>
		</iframe>

	</div>

	<footer>
		&copy; 2024 GameHaven. All rights reserved.
	</footer>
	</body>
</html>
