create schema if not exists otp;
use otp;

-- Tabella utenti
create table if not exists utenti
(
    id_utente int auto_increment not null primary key,
    username varchar(50) not null,
    `password` varchar(255) not null,
    email varchar(40) not null,
    `admin` boolean default false,
    otp varchar(6),
    otpdate datetime
);

insert into utenti
(
    username,
    `password`,
    email,
    `admin`
)
values
    (
     'admin',
     'root',
     'admin@localhost.com',
     true
    )