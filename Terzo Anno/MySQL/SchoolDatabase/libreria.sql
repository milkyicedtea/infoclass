create schema libreria;

use libreria;

create table autore (
    `id_autore` varchar(4) primary key,
    `cognome` varchar(30) not null,
    `nome` varchar(30) not null,
    `nazione` varchar(30) not null,
    `data_di_nascita` date,
    `genere` enum('m', 'f')
);

create table categoria (
    `id_categoria` varchar(3) primary key,
    `descrizione` varchar(100) not null);

create table editore (
    `id_editore` varchar(4) primary key,
    `ragione_sociale` varchar(30) not null,
    `indirizzo` varchar(100) not null,
    `citta` varchar(20) not null
);

create table libri (
    `ISBN` varchar(11) primary key,
    `titolo` varchar(30) not null,
    `lingue` varchar(50) not null,
    `anno` int not null,
    `prezzo` float not null,
    `id_categoria` varchar(3),
    `id_editore` varchar(4),
    foreign key(id_categoria) references categoria(id_categoria),
    foreign key(id_editore) references editore(id_editore)
);

create table Ruoli(
    `id_ruolo` varchar(3) primary key,
    `id_autore` varchar(4),
    `ruolo` varchar(20),
    foreign key (id_autore) references autore(id_autore)
);

alter table autore add numero_premi int;

alter table autore drop numero_premi;

alter table ruoli add ISBN varchar(11);

alter table ruoli add foreign key(ISBN) references libri(ISBN);

insert into autore (id_autore, cognome, nome, nazione, data_di_nascita, genere)
    values ('A001', 'Vincen', 'John', 'Inghilterra', str_to_date('03/01/1892', '%d/%m/%Y'), 'm'),
           ('A002', 'Colldi', 'Carlo', 'Italia', str_to_date('24/11/1826', '%d/%m/%Y'), 'm')