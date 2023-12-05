create schema if not exists partlister;
use partlister;

create table if not exists utente(
     `id_utente` int not null auto_increment,
     `username` varchar(50) not null,
     `password` varchar(255) not null,
     `email` varchar(50) not null,
     primary key(id_utente)
);

create table if not exists lista(
    `processore` varchar(20),
    `scheda_video` varchar(20),
    `scheda_madre` varchar(20),
    `ram` varchar(20),
    `id_utente` int,
    foreign key(id_utente) REFERENCES utente(id_utente)
);