create schema if not exists giochi;

-- Tabella utenti
create table if not exists giochi.utenti(
    id_utente int auto_increment not null primary key,
    username varchar(50) not null,
    `password` varchar(255) not null,
    email varchar(40) not null
)