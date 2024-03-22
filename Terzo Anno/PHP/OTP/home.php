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
				<a href="home.php"><i class="fas fa-home"></i>Home</a>
				<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
				<a href="register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
				<hr>
				<p>Welcome back, <?=$_SESSION['name']?>!</p>
			</div>
		</nav>
	</body>
</html>
