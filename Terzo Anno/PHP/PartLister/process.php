<?php
    session_start();

    const db_host = 'localhost';
    const db_username = 'root';
    const db_password = '';
    const db_databse = 'partlister';

    // MySQLi connection
    $conn = mysqli_connect(db_host,db_username,db_password,db_databse);

    // MySQLi error
    if (mysqli_connect_errno()){
        exit('Impossibile connettersi al database'. mysqli_connect_error());
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Retrieve form data
        $cpu = $_POST["processor"];
        $gpu = $_POST["gpu"];
        $mobo = $_POST["motherboard"];
        $ram = $_POST["ram"];

        // Process the data as needed (e.g., store it in a database)
        if ($stmt = $conn->prepare('select id_utente from partlister.utente where username = ?')){
            $username = $_SESSION['name'];
            $stmt->bind_param('s', $username);
            $stmt->execute();
            $stmt->store_result();

            if ($stmt->num_rows > 0) {
                $stmt->bind_result($id_utente);
                $stmt->fetch();

                if ($stmt = $conn->prepare("insert into partlister.lista(processore, scheda_video, scheda_madre, ram, id_utente) values(?, ?, ?, ?, ?)")){
                    $stmt->bind_param('sssss', $cpu, $gpu, $mobo, $ram, $id_utente);
                    $stmt->execute();
                    header('location: lists.php');
                }
            }

        }

        $stmt->close();


        // For demonstration purposes, you can simply print the selected options
        echo "List created with the following components:<br>";
        echo "Processor: $cpu<br>";
        echo "GPU: $gpu<br>";
        echo "Motherboard: $mobo<br>";
        echo "RAM: $ram<br>";
    }
    $conn->close();
