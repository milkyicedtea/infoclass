<?php
session_start();
require_once '../config.php';

function check_otp($userid, $otp): bool
{
	$conn = getConn();

	if ($stmt = $conn->prepare('SELECT otp, otpdate FROM utenti WHERE id_utente = ?')) {
		$stmt->bind_param('s', $userid);
		$stmt->execute();
		$stmt->store_result();

		if ($stmt->num_rows > 0) {
			$stmt->bind_result($otp_db, $otp_date);
			$stmt->fetch();

			if ($otp == $otp_db) {
				// Check if OTP date is within the last 60 seconds
				$current_time = time();
				$otp_time = strtotime($otp_date);
				$time_difference = $current_time - $otp_time;

				if ($time_difference <= 60) {
						return true;
				}
				else {
					if ($stmt = $conn->prepare('update utenti set otp = NULL, otpdate = NULL where id_utente = ?')) {
						$stmt->bind_param('s', $userid);
						$stmt->execute();
					}
				}
			}
		}
	}

	return false; // OTP verification failed
}

// Check if OTP form is submitted
if (isset($_POST['otp'], $_SESSION['id'])) {
	$otp = $_POST['otp'];
//		echo '<script>alert("' . $_SESSION['id'] . '")</script>';
	$userid = $_SESSION['id'];

	if (check_otp($userid, $otp)) {
		// OTP verification successful
		header('location: ../home.php'); // Redirect to welcome page or wherever appropriate
	} else {
		// OTP verification failed
		echo "<script>alert('Incorrect or expired OTP!'); location.href = 'login.html';</script>";
	}
}
else {
	// OTP form not submitted, redirect user to OTP verification page
	header('location: otp.html');
}
	exit();