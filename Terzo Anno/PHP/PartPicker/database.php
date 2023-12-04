<?php
$config = [
    'db_host' => '127.0.0.1',
    'db_user' => 'root',
    'db_name' => 'test',
    'db_password' => '',
];

$db_config = $config['db_engine'] . ":host=".$config['db_host'] . ";dbname=" . $config['db_name'];

$conn = mysqli_connect($config['db_host'], $config['db_user'], $config['db_password'], $config['db_name']);

if (!$conn) {
    die('Attenzione, non connesso: '.mysqli_error($conn));
}