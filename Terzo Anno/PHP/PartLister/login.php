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

    // Check params presence
    if (!isset($_POST['username'], $_POST['password'])){
        exit('Riempire tutti i campi.');
    }

    if ($stmt = $conn->prepare('select id_utente, password from partlister.utente where username = ?')){
        // Bind parameters (s = string, i = int, etc)
        $stmt->bind_param('s', $_POST['username']);
        $stmt->execute();
        $stmt->store_result();

        if ($stmt->num_rows > 0){
            $stmt->bind_result($id_db, $password_db);
            $stmt->fetch();

            // Account esiste, verifica password
            if (password_verify($_POST['password'], $password_db)){
                // Verifica completata!
                // Crea sessione
                session_regenerate_id();
                $_SESSION['loggedin'] = TRUE;
                $_SESSION['name'] = $_POST['username'];
                $_SESSION['id'] = $id_db;
                header('location: home.php');
            }
            else
            {
                // Password erraata
                echo "<script>alert('Incorrect password!');location.href = 'login.html';}</script>";
            }
        }
        else {
            echo "<script>alert('Incorrect username or the account does not exist');location.href = 'login.html'</script>";
        }

        $stmt->close();
    }

    $conn->close();