create schema if not exists partpicker;
use partpicker;

create table if not exists utente(
     `id_utente` int not null auto_increment,
     `nome` varchar(20),
     `cognome` varchar(20),
     `email` varchar(40),
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
