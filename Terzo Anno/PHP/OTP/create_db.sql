create schema if not exists otp;

-- Tabella utenti
create table if not exists otp.utenti
(
    id_utente int auto_increment not null primary key,
    username varchar(50) not null,
    `password` varchar(255) not null,
    email varchar(40) not null,
    otp varchar(6),
    otpdate datetime
);