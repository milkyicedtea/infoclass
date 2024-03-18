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
		<meta charset="utf-8">
		<title>GameHaven</title>
		<link rel="icon" type="image/x-icon" href="Assets/favicon.ico">
		<link rel="stylesheet" type="text/css" href="CSS/homeStyles.css">
		<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer">
		<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
	</head>
	<body class="home">
		<nav class="nav-top">
			<div>
				<h1>GameHaven <i class="material-symbols-outlined">stadia_controller</i></h1>
				<?php
					if ($_SESSION['admin'])
					{
						echo "
							<a href='Admin/users.php'>
								<i class='fas fa-table-cells'></i>
								Tabella Utenti
							</a>";
					}
				?>
                <hr>
				<a href="home.php"><i class="fas fa-home"></i>Home</a>
				<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
				<a href="register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
				<hr>
				<p>Welcome back, <?=$_SESSION['name']?>!</p>
			</div>
		</nav>

		<div class="main-div">
			<h2 class="featured-games">Featured Games</h2>
			<section class="games-section">

				<div class="game">
					<div class="game-card">
						<a href="Games/JJK-CC.php" draggable="false">
							<img src="Assets/JJK-CC-cover.jpg" alt="Jujutsu Kaisen Cursed Clash" draggable="false">
							<h3>Jujutsu Kaisen Cursed Clash</h3>
						</a>
					</div>
				</div>

				<div class="game">
					<div class="game-card">
						<a href="Games/PL-CH1.php" draggable="false">
							<img src="Assets/PL-CH1-cover.jpg" alt="Paper Lily - Chapter 1" draggable="false">
							<h3>Paper Lily - Chapter 1</h3>
						</a>
					</div>
				</div>

				<div class="game">
					<div class="game-card">
						<a href="Games/DS-KNY-THC.php" draggable="false">
							<img src="Assets/DS-KNY-TCH-cover.jpg" alt="Demon Slayer -Kimetsu no Yaiba- The Hinokami Chronicles" draggable="false">
							<h3>Demon Slayer -Kimetsu no Yaiba- The Hinokami Chronicles</h3>
						</a>
					</div>
				</div>
			</section>

		</div>


		<footer>
			&copy; 2024 GameHaven. All rights reserved.
		</footer>
	</body>
</html>
