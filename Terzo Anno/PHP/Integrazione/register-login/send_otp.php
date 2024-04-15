<?php

require_once '../config.php';

function create_otp(): int
{
	return rand(100000, 999999);
}

function send_otp($userid, $email): void
{
	$otp_code = create_otp();
	$otp_date = date('Y-m-d H:i:s');

	echo '<script>console.log("' . $userid . ', '. $otp_code .', '. $otp_date .'")</script>';

	$conn = getConn();

	if ($stmt = $conn->prepare("update utenti set otp = ?, otpdate = ? where id_utente = ?")) {
		$stmt->bind_param('ssi', $otp_code, $otp_date, $userid);
		if (!$stmt->execute()) {
			echo 'Error executing statement: ' . $stmt->error;
		}
		else {
			mail(
				$email,
				'OTP verification for 051205.xyz',
				'Your otp verification code is **'.$otp_code.'**',
				'From: 051205.xyz verification'
			);

			header('location: otp.html');
		}
	}
	else {
		echo 'Failed to prepare statement: ' . $stmt->error;
	}

	$conn->close();
}
