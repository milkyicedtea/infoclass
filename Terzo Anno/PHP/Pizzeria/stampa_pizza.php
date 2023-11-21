
<html> 
<head>

<title>ordina pizza</title>
</head>

<body>

<?php
 
    $db_host = "127.0.0.1";
    $db_user = "root";
    $db_password = "";          //rootroot   per btnami
    $db_database = "pizzeria";

    $connessione=mysqli_connect($db_host,$db_user,$db_password,$db_database );

    if (!$connessione) {
        die('Attenzione non connesso: ' . mysqli_error());
    }

    $qu = "select cognome, nome, citta, tipo, email from tbl_pizze";
	
	$risultato = mysqli_query($connessione,$qu);
	
	echo "<br><br><br>";

    echo "<table border=1 bgcolor= red>";
    echo "<th colspan=5> Pizze ordinate </th>";
    echo "<tr>";
    echo "<td>"."Cognome"."</td>";
    echo "<td>"."Nome"."</td>";
    echo "<td>"."Citta"."</td>";
    echo "<td>"."Tipo"."</td>";
    echo "<td>"."E-mail"."</td>";
    echo "</tr>";
       
    $numerorighe = mysqli_num_rows($risultato);

	while($r=mysqli_fetch_array($risultato))
    {
        echo "<tr>";
        echo "<td>".$r[0]."</td>";
        echo "<td>".$r[1]."</td>";
        echo "<td>".$r[2]."</td>";
        echo "<td>".$r[3]."</td>";
        echo "<td>".$r[4]."</td>";
        echo "</tr>";
    }
    echo "</table>";

	if($numerorighe>0) {
        echo "<br> Numero ordini effettuati  " . $numerorighe;
    }
				 

mysqli_close($connessione);
?>
<br> <br>
<a href="index.html">Torna alla home</a>

</body>
</html>
