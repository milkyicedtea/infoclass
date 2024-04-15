<?php
	// Use sessions
	session_start();
	// If user is not logged in redirect to login page
	if (!isset($_SESSION['logged-in'])) {
		header('location: ../../register-login/register.html');
		exit;
	}
?>

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title>Materie Scolastiche</title>
	<link rel="icon" type="image/x-icon" href="../../favicon.ico"/>
	<link rel="stylesheet" type="text/css" href="../CSS/InformaticaStyles.css"/>
	<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer"/>
	<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
</head>
<body class="home">
	<nav class="nav-top">
		<div>
			<h1>Materie Scolastiche <i class="fas fa-book"></i></h1>
			<a href="../../index.html">Torna all'indice</a>
			<hr>
			<a href="../home.php"><i class="fas fa-home"></i>Home</a>
			<a href="https://midossi.edu.it"><i class="fas fa-contact-book"></i>Contacts</a>
			<a href="../../register-login/logout.php"><i class="fas fa-sign-out-alt"></i>Logout</a>
			<hr>
			<p>Welcome back, <?=$_SESSION['name']?>!</p>
		</div>
	</nav>

	<div class="main-div">
		<h2 class="topic-title">Le Fake News</h2>
		<b>
		<p class="topic-intro">
			Le fake news sono informazioni in parte false, diffuse attraverso web e media di comunicazione
			allo scopo di produrre misinformazione. Sono caratterizzate da un'apparente plausibilità,
			alimentata dall'opinione pubblica e da pregiudizi che spesso vengono amplificati, facilitando
			così la loro condivisione e diffusione senza verifica delle fonti. Le fake news sono difficili
			da riconoscere e possono essere propagate indiscriminatamente da chiunque attraverso le piattaforme digitali.
		</p>
		</b>

		<h2 class="topic-subtitle">
			<span class="topic-subtitle" style="color: goldenrod">Come</span>si diffondono?
		</h2>
		<button class="accordion">Polarizzazione</button>
		<div class="panel">
			<p class="inside-panel">
				La polarizzazione di gruppo accade quando le persone in un gruppo tendono a diventare sempre
				più estreme nelle loro opinioni rispetto a quando sono entrate nel gruppo. Questo succede perché
				parlare con persone che la pensano allo stesso modo puó farci sentire più forti nelle nostre convinzione
				e più sicuri di noi stessi
			</p>
		</div>

		<button class="accordion">Cascate di tipo informativo o reputazionale</button>
		<div class="panel">
			<p class="inside-panel">
				- Cascate informative
				<br>
				Quando ci si fida di una determinata persone perché questa è "preparata" in uno
				specifico tema, ma in realtà quella persona si fida a sua volta di un'altra persona
				"preparata" e cosi' via, a formare come una "cascata" di misinformazione.
				<br> <br>
				- Cascate reputazionali
				<br>
				Il meccanismo è simile a quello delle cascate informative, ma la differenza è
				che noi ci fidiamo delle'opinione di qualcuno perché non vogliamo abbassare la stima o la fiducia che
				questa persona ha in noi.
			</p>
		</div>

		<button class="accordion">Confirmation Bias o "Pregiudizio di conferma"</button>
		<div class="panel">
			<p class="inside-panel">
				Molto semplicemente la tendenza a cercare elementi che convalidano quanto sappiamo, anziché cercare delle
				prove che negano le nostre credenze, anche quando le opinioni o tesi presentate sono diverse in gran
				parte dalle proprie.
			</p>
		</div>

		<h2 class="topic-subtitle">
			<span class="topic-subtitle" style="color: indianred">SIFT</span>, un acronimo per evitarle
		</h2>
		<ul>
			<li>
				<p class="acronym-ul">
					Soffermarsi sulla notizia (Spesso i post falsi cercano di suscitare emozioni forti per eludere
					il pensiero critico)
				</p>
			</li>
			<li>
				<p class="acronym-ul">
					Indagare sulla fonte (Prendere come segnale d'avvertimento il non conoscere la fonte o l'autore)
				</p>
			</li>
			<li>
				<p class="acronym-ul">
					Fare una verifica in più (Mettendo a confronto più fonti che trattano lo stesso tema)
				</p>
			</li>
			<li>
				<p class="acronym-ul">
					Tracciare le notizie (In modo da scoprire informazioni rilevanti sul contesto)
				</p>
			</li>
		</ul>

		<iframe
			src="https://www.youtube.com/embed/cSKGa_7XJkg?autoplay=1&mute=1&vq=hd720"
		>
		</iframe>


	</div>


	<footer>
		&copy; 2024 Alessandro Zito. All rights reserved.
	</footer>

<script>
	let acc = document.getElementsByClassName("accordion");

	for (let i = 0; i < acc.length; i++) {
		acc[i].addEventListener("click", function() {
			this.classList.toggle("active");

			let panel = this.nextElementSibling;
			if (panel.style.maxHeight) {
				panel.style.maxHeight = null;
			} else {
				panel.style.maxHeight = panel.scrollHeight + "px";
			}
		});
	}
</script>
</body>
</html>