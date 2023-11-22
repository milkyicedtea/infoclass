<html>
<head>
    <title>Iscriviti</title>
</head>

<body>
<?php
   /* if (isset ($_POST['tipocheck']))
	{$tipocheck=$_POST['tipocheck'];  
     foreach ($tipocheck as $t)
	 {echo "<p>******************************</p>";  
	  echo "<p>Prova passaggio parametro</p>";  
	  echo "<p> Valore tipo check </p>".$t;  
	  echo "<p>******************************</p>";  
     }
    }*/

    if (isset ($_POST['nome']))      {$nome=$_POST['nome'];}           else {$nome='';}
    if (isset ($_POST['cognome']))   {$cognome=$_POST['cognome'];}     else {$cognome='';}
    if (isset ($_POST['indirizzo'])) {$indirizzo=$_POST['indirizzo'];} else {$indirizzo ='';}
//    if (isset ($_POST['citta']))     {$citta=$_POST['citta'];}         else {$citta='';}
    if (isset ($_POST['email']))     {$email=$_POST['email'];}         else {$email='';}
    if (isset ($_POST['']))
//    if (isset ($_POST['scelta']))    {$scelta=$_POST['scelta'];}       else {$scelta='';}
//    if (isset ($_POST['avviso']))    {$avviso=$_POST['avviso'];}       else {$avviso='0';}

    echo "
        <div>
            <label>
                <select name='felpe'>
                    <option>'Felpa'</option>
                </select>
            </label>
        </div>
    ";


    echo "Dati inseriti in tabella";
    echo "<p> Nome     : ". $nome."</p> ";
    echo "<p> Cognome  : ". $cognome."</p> ";
    echo "<p> Indirizzo: ". $indirizzo."</p> ";
//    echo "<p> Citta    : ". $citta."</p> ";
    echo "<p> Email    : ". $email."</p> ";
//    echo "<p> Scelta   : ". $scelta."</p> ";
//    echo "<p> Avviso   : ". $avviso."</p> ";

    $db_host = "127.0.0.1";
    $db_user = "root";
    $db_password = "";     //rootroot per btnami
    $db_database = "pizzeria";

    $connessione=mysqli_connect($db_host,$db_user,$db_password,$db_database);

    if (!$connessione)
    {
    die('Attenzione non connesso: ' . mysqli_error());
    }


    $qu= ("insert into tbl_utente(Cognome,Nome,Indirizzo,Citta,email,data_ins)
        values ('$cognome',
                '$nome',
                '$indirizzo',
                '$email',
                now())");
//                '$scelta',
//                '$avviso')");
									 
    $risultato = mysqli_query($connessione,$qu);

    if(!$risultato)
    {
        echo("Errore: " . mysqli_error($connessione));
    }
    else
    {
        echo "<p>******************************</p>";
        echo "<br>";
        echo "Iscrizione a Nike effettuata con successo!";
    }

    mysqli_close($connessione);
?>
    <a href="NEW/index.html">Torna alla home</a>
</body>
</html>
