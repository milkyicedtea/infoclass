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
		<meta charset="utf-8">
		<title>Materie Scolastiche</title>
		<link rel="icon" type="image/x-icon" href="../favicon.ico"/>
		<link rel="stylesheet" type="text/css" href="CSS/homeStyles.css"/>
		<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer"/>
		<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
		<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/swiper@11/swiper-bundle.min.css"/>
	</head>
<body class="home">
	<nav class="nav-top">
		<div>
			<h1>Materie Scolastiche <i class="fas fa-book"></i></h1>
			<a href="../index.html">Torna all'indice</a>
			<hr>
			<a href="home.php"><i class="fas fa-home"></i>Home</a>
			<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
			<a href="../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
			<hr>
			<p>Welcome back, <?=$_SESSION['name']?>!</p>
		</div>
	</nav>

	<div class="main-div">
		<h1 class="materie"></h1>
		<section class="subjects">
			<div class="swiper">
				<div class="swiper-wrapper">
					<a class="swiper-slide" href="Pages/informatica.php">
						<img class="swiper-image" src="Assets-Materie/Informatica-Slide.jpg" alt="Slide Informatica"/>
						<h1 class="swiper-text">Informatica</h1>
					</a>

					<a class="swiper-slide">
						<img class="swiper-image" src="Assets-Materie/Italiano-Slide.png" alt="Slide Informatica"/>
						<h1 class="swiper-text">Italiano</h1>
					</a>

					<a class="swiper-slide">
						<img class="swiper-image" src="Assets-Materie/Inglese-Slide.jpg" alt="Slide Informatica"/>
						<h1 class="swiper-text">Inglese</h1>
					</a>
				</div>

				<div class="swiper-button-prev"></div>
				<div class="swiper-button-next"></div>

			</div>
		</section>
	</div>


	<footer>
		&copy; 2024 Alessandro Zito. All rights reserved.
	</footer>

	<script src="https://cdn.jsdelivr.net/npm/swiper@11/swiper-bundle.min.js"></script>
	<script>
		const swiper = new Swiper(
			'.swiper', {
				direction: 'horizontal',
				loop: true,

				navigation: {
					nextEl: '.swiper-button-next',
					prevEl: '.swiper-button-prev',
				},
			}
		)
	</script>
</body>
</html>
