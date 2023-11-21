
<html>
    <head>
    <title>ordina pizza</title>
    </head>

    <body>

        <?php

            if (isset ($_POST['tipocheck'])) {
                $tipocheck = $_POST['tipocheck'];
                foreach ($tipocheck as $t) {
                    echo "<p>******************************</p>";
                    echo "<p>Prova passaggio parametro</p>";
                    echo "<p> Valore tipo check </p>" . $t;
                    echo "<p>******************************</p>";
                }
            }

            if (isset ($_POST['cognome']))   {$cognome=$_POST['cognome'];}     else {$cognome='';}
            if (isset ($_POST['nome']))      {$nome=$_POST['nome'];}           else {$nome='';}
            if (isset ($_POST['indirizzo'])) {$indirizzo=$_POST['indirizzo'];} else {$indirizzo ='';}
            if (isset ($_POST['citta']))     {$citta=$_POST['citta'];}         else {$citta='';}
            if (isset ($_POST['email']))     {$email=$_POST['email'];}         else {$email='';}
            if (isset ($_POST['scelta']))    {$scelta=$_POST['scelta'];}       else {$scelta='';}
            if (isset ($_POST['avviso']))    {$avviso=$_POST['avviso'];}       else {$avviso='0';}

            echo "Dati inseriti in tabella";
            echo "<p> Cognome  : ". $cognome."</p> ";
            echo "<p> Nome     : ". $nome."</p> ";
            echo "<p> Indirizzo: ". $indirizzo."</p> ";
            echo "<p> Citta    : ". $citta."</p> ";
            echo "<p> Email    : ". $email."</p> ";
            echo "<p> Scelta   : ". $scelta."</p> ";
            echo "<p> Avviso   : ". $avviso."</p> ";

            $db_host = "127.0.0.1";
            $db_user = "root";
            $db_password = "";     //rootroot per btnami
            $db_database = "pizza";

            $connessione=mysqli_connect($db_host,$db_user,$db_password,$db_database);

            if (!$connessione)
            {
                die('Attenzione non connesso: ' . mysqli_error());
            }


            $qu=("insert into tbl_pizze 
                    values (
                    null,
                    '$cognome',
                    '$nome',
                    '$indirizzo',
                    '$citta',
                    '$email',
                    '$scelta',
                    now(),
                    $avviso)"
            );
									 
            $risultato = mysqli_query($connessione,$qu);

            if(!$risultato)
            {
                echo("Errore: " . mysqli_error($connessione));
            }
            else
            {
                echo "<p>******************************</p>";
                echo "<br>";
                echo "inserimento effettuato con successo";
            }

								 

mysqli_close($connessione);

      
?>
<br><br>
<a href="index.html">Torna alla home</a>

</body>
</html>
