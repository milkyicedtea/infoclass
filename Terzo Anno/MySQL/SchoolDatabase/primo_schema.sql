create schema primo_schema;

use primo_schema;

create table dipartimento (
    `nome` varchar(20)primary key,
    `indirizzo` varchar(50),
    `citta` varchar(20)
);

create table Impiegati (
    `matricola` int auto_increment primary key,
    `nome` varchar(20) not null,
    `cognome` varchar(20) not null,
    `dipartimento` varchar(20), foreign key (dipartimento) references dipartimento(nome),
    `stipendio` float,
    `ufficio` int,
    `citta` varchar(20)
);