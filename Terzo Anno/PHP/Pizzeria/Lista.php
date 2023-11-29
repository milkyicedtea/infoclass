<html>
<head>
    <title>Iscriviti</title>
</head>
<style>
table, th, td {
  border: 1px solid black;
  border-collapse: collapse;
}
</style>
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

    if (isset ($_POST['nome']))
        {$nome=$_POST['nome'];}
    else {$nome='';}
    if (isset ($_POST['cognome']))
        {$cognome=$_POST['cognome'];}
    else {$cognome='';}
    if (isset ($_POST['email']))
        {$email=$_POST['email'];}
    else {$email='';}
    if (isset ($_POST['scelta-cpu']))
        {$scelta_cpu=$_POST['scelta-cpu'];}
    else {$scelta_cpu='';}
    if (isset ($_POST['scelta-gpu']))
        {$scelta_gpu=$_POST['scelta-gpu'];}
    else {$scelta_gpu='';}
    if (isset ($_POST['scelta-mobo']))
        {$scelta_mobo=$_POST['scelta-mobo'];}
    else {$scelta_mobo='';}
    if (isset ($_POST['scelta-ram']))
        {$scelta_ram=$_POST['scelta-ram'];}
    else {$scelta_ram='';}


    echo "
    <div>
        <table>
            Valori inseriti
            <tr>
                <td>$nome</td>
                <td>$cognome</td>
                <td>$email</td>
                <td>$scelta_cpu</td>
                <td>$scelta_gpu</td>
                <td>$scelta_mobo</td>
                <td>$scelta_ram</td>
            </tr>
        </table>
    </div>
    ";

    $db_host = "localhost";
    $db_user = "root";
    $db_password = "";     //rootroot per btnami
    $db_database = "partpicker";

    $connessione=mysqli_connect($db_host,$db_user,$db_password,$db_database);

    if (!$connessione)
    {
        die('Attenzione, non connesso: '.mysqli_error($connessione));
    }

    $insert_utente=("
            insert into partpicker.utente(nome, cognome, email)
            VALUES ($nome, $cognome, $email);
        ");

    if ($connessione->query($insert_utente) === true)
    {
        $insert_utente = false;
        echo("Errore: ".mysqli_error($connessione));
    }
    else {$insert_utente = true;}

    $select_utente = (
            "select count(id_utente) from partpicker.utente;"
    );

    $select_risultato = $connessione->query($select_utente);

    echo"$select_risultato[0]";

    $insert_risultato=("
        insert into partpicker.lista(processore, scheda_video, scheda_madre, ram, id_utente) 
        VALUES ('$scelta_cpu', '$scelta_gpu', '$scelta_mobo', '$scelta_ram', $select_risultato[0])"
    );

    if($connessione->query($insert_risultato))
    {
        echo("Errore: ".mysqli_error($connessione));
    }
    else
    {
        if ($insert_utente)
        {
            echo "
            <div>
                <p>******************************</p>
                <p>Lista creata con successo!</p>
            </div>";
        }
    }

    mysqli_close($connessione);
?>
    <p>
        <a href="index.html">Torna alla home</a>
    </p>
</body>
</html>
