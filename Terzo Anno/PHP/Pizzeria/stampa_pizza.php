
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

    if (!$connessione)
    {
        die('Attenzione non connesso: ' . mysqli_error($connessione));
    }

    $qu = "select cognome, nome, citta, tipo, email from tbl_pizze";
	
	$risultato = mysqli_query($connessione,$qu);

    $Cognome = 'awdawda';
    $Nome = 'awdaadd';
    $Citta = 'awdad';
    $Tipo = 'awdadda';
    $Email= 'awd';

    //aggiungere un campo per ogni componente
    echo "
    <div>
        <table border=1 bgcolor= red>
        <th colspan=5> Componenti Ordinati </th>
            <tr>
                <td>".$Cognome."</td>
                <td>".$Nome."</td>
                <td>".$Citta."</td>
                <td>".$Tipo."</td>
                <td>".$Email."</td>
            </tr>
        </table>
    </div>
        ";
       
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

	if($numerorighe>0)
		echo "<br> Numero ordini effettuati  ".$numerorighe;
     
				 

mysqli_close($connessione);

      
?>
<br> <br>
<a href="NEW/index.html">Torna alla home</a>

</body>
</html>
