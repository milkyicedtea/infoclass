<!DOCTYPE html>
<html lang="it" class="register-login">
<?php
    require_once('./database.php');

    $conn->query()

    if (isset($_POST['register'])) {
        $email = isset($_POST['email']) ? $_POST['email'] : '';
        $password = isset($_POST['password']) ? $_POST['password'] : '';

    if (empty($email) || empty($password)) {
        $msg = 'Compila tutti i campi %s';

        $query = "
            select id_utente FROM utente WHERE email = :email";

        $check = $conn->prepare($query);
        $check->bindParam(':email', $email, PDO::PARAM_STR);
        $check->execute();

        $user = $check->fetchAll(PDO::FETCH_ASSOC);

        if (count($user) > 0) {
            $msg = 'email già in uso %s';
        } else {
            $query = "
                INSERT INTO utente (id_utente, email, password)
                VALUES (0, :email, :password)
            ";

            $check = $pdo->prepare($query);
            $check->bindParam(':email', $email, PDO::PARAM_STR);
            $check->bindParam(':password', $password_hash, PDO::PARAM_STR);
            $check->execute();

            if ($check->rowCount() > 0) {
                $msg = 'Registrazione eseguita con successo';
            } else {
                $msg = 'Problemi con l\'inserimento dei dati %s';
            }
        }
    }

    printf($msg, '<a href="../register.html">torna indietro</a>');
}
?>

    <head>
        <title>Registrazione</title>
        <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Open+Sans&display=swap">
        <link rel="stylesheet" href="style.css">
    </head>
    <body class="register-login">
        <form method="post" action="Registrazione.php">
            <h1>Registrazione</h1>
            <label for="email"></label><input type="text" id="email" placeholder="email" name="email" maxlength="40" required>
            <label for="password"></label><input type="password" id="password" placeholder="Password" name="password" required>
            <button type="submit" name="register">Registrati</button>
        </form>
    </body>
</html>