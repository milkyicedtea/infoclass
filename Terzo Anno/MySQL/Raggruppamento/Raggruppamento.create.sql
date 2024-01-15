create schema Raggruppamento;

use Raggruppamento;

create table anagrafica(
    `ID` int auto_increment not null primary key,
    `cognome` varchar(20) not null,
    `nome` varchar(20) not null,
    `stipendio` decimal(10, 2),
    `id_zona` int not null
);

