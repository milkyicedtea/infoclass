<?php
	session_start();
    require_once '../config.php';
    require 'send_otp.php';



function get_user_and_email($userid) {
    $conn = getConn();
    if ($stmt = $conn->prepare('select username, email from utenti where id_utente = ?')) {
        $stmt->bind_param('s', $userid);
        $stmt->execute();
        $stmt->store_result();

        if ($stmt->num_rows > 0) {
            $stmt->bind_result($username, $useremail);
            $stmt->fetch();

            return [$username, $useremail];
        }
    }
}

// Check params presence
if (!isset($_POST['username'], $_POST['password'])){
    exit('Riempire tutti i campi.');
}

$conn = getConn();

if ($stmt = $conn->prepare('select id_utente, `password` from utenti where username = ?')){
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
            $_SESSION['logged-in'] = TRUE;
            $_SESSION['name'] = $_POST['username'];
            $_SESSION['id'] = $id_db;

            $userinfo = get_user_and_email($id_db); # userinfo[0] is the id, userinfo[1] is the email

            send_otp($userinfo[0], $userinfo[1]);
            header('location: otp.html');
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