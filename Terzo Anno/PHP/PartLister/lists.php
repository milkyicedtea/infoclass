<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Your PC Lists</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css" integrity="sha512-xh6O/CkQoPOWDdYTDqeRdPCVd1SpvCA9XXcUnZS2FmJNp1coAFzvtCN9BmamE+4aHK8yyUHUSCcJHgXloTyT2A==" crossorigin="anonymous" referrerpolicy="no-referrer">
</head>
<body>
    <nav class="navtop">
        <div>
            <h1>Your PC Lists</h1>
            <a href="home.php"><i class="fas fa-home"></i>Back to home</a>
            <a href="profile.php"><i class="fas fa-user-circle"></i>Profile</a>
        </div>
    </nav>
    <div class="register-login">
    <h1>Your PC Lists</h1>

    <h2 style="text-align: center">New List</h2>
    <form action="process.php" method="post">
        <label for="processor">
            <i class="fa-solid fa-microchip"></i>
        </label>
        <select name="processor" id="processor">
            <option>Ryzen 5 5600x</option>
            <option>Ryzen 7 5700x3D</option>
            <option>Ryzne 9 5800x3D</option>
            <option>Ryzen 9 5950x</option>
            <option>Core i5-13600K</option>
            <option>Core i7-13700KF</option>
            <option>Core i9-13900K</option>
            <option>Core i9-13900KF</option>
            <!-- Add more processor options as needed -->
        </select>

        <label for="gpu">GPU</label>
        <select name="gpu" id="gpu">
            <option>Rx 6600xt</option>
            <option>Rx 6750xt</option>
            <option>Rx 6800xt</option>
            <option>Rx 6950xtx</option>
            <option>Rtx 3060ti</option>
            <option>Rtx 3070ti</option>
            <option>Rtx 3080ti</option>
            <option>Rtx 3090ti</option>
            <!-- Add more GPU options as needed -->
        </select>

        <label for="motherboard">MOBO</label>
        <select name="motherboard" id="motherboard">
            <option>ROG STRIX AMD (X570)</option>
            <option>ROG STRIX Intel (Z790)</option>
            <option>Msi AMD (X570)</option>
            <option>Msi Intel (Z790)</option>
            <!-- Add more motherboard options as needed -->
        </select>

        <label for="ram">RAM</label>
        <select name="ram" id="ram">
            <option>16gb DDR4</option>
            <option>32gb DDR4</option>
            <option>64gb DDR4</option>
            <option>128gb DDR4</option>
            <!-- Add more RAM options as needed -->
        </select>

        <button type="submit">Create List</button>
    </form>
    </div>

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
        echo 'Impossibile connettersi al database'. mysqli_connect_error();
        exit('Impossibile connettersi al database'. mysqli_connect_error());
    }

    if ($stmt = $conn->prepare("select processore, scheda_video, scheda_madre, ram from partlister.lista where id_utente = ?")){
        $id_db = $_SESSION['id'];
//        echo "<script>alert('id_db is $id_db')</script>";
        $stmt->bind_param('s', $id_db);
        $stmt->execute();
        $stmt->store_result();

        if ($stmt->num_rows > 0){
            $stmt->bind_result($cpu_db, $gpu_db, $mobo_db, $ram_db);

            echo "
                <table border = '1' style='text-align: center; margin-left: auto; margin-right: auto'>
                <tr><th>ID</th>
                    <th>Processor</th>
                    <th>GPU</th>
                    <th>Motherboard</th>
                    <th>RAM</th>
                </tr>";

            while ($stmt->fetch()){
                echo"
                    <tr>
                    <td> $id_db </td>
                    <td> $cpu_db </td>
                    <td> $gpu_db </td>
                    <td> $mobo_db </td>
                    <td> $ram_db </td>
                ";
            }
            echo "</table>";
        }
        else{
            echo "<p style='text-align: center'>You currently don't have any list!</p>";
        }
        $stmt->close();
    }
    else{
        $id = $_SESSION["id"];
        echo "<script>alert('id_db is $id No lists found for this account.')</script>";
    }

    $conn->close()

?>
</body>
</html>