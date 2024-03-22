<?php

require_once '../config.php';


function create_otp(): int
{
    return rand(100000, 999999);
}

function send_otp($userid, $email): void
{
    $otp_code = create_otp();
    $otp_date = date('Y-m-d-s');

    $conn = getConn();

    if ($stmt = $conn->prepare('update utenti set otp = ?, otpdate = ? where id_utente = ?')) {
        $stmt->bind_param('sss', $otp_code, $otp_date, $userid);
        $stmt->execute();

        mail(
            $email,
            'OTP verification for 051205.xyz',
            'Your otp verification code is **'.$otp_code.'**',
            'From: milkyicedtea@proton.me'.'\r\n'.'CC:'.$email
        );

        header('location: otp.html');
    }

    $conn->close();
}
