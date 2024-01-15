use raggruppamento;

insert into anagrafica (cognome, nome, stipendio, id_zona)
    values ('Martelli', 'Amelia', null, 1),
           ('Colombo', 'Sonia', 1700, 2),
           ('Russo', 'Antonio', 1850, 2),
           ('Carenelli', 'Alberto', 2100, 1),
           ('Simarco', 'Adele', 1900, 3),
           ('Lolli', 'Andrea', null, 1),
           ('Dubini', 'Luca', 2600, 3),
           ('Simoncini', 'Gaia', 1350, 1);

select nome, cognome, AVG(a.stipendio)
    from anagrafica as a
        GROUP BY cognome, nome
            HAVING SUM(stipendio > 2000);

select avg(stipendio)
    from anagrafica
        where stipendio between 1000 and 1700;

select nome, cognome, stipendio
    from anagrafica
        where (
            stipendio < (
                select AVG(stipendio) from anagrafica
            )
        );

select id_zona, MAX(stipendio)
    from anagrafica
        GROUP BY id_zona
            having (count(*) >=2 and sum(stipendio) < 4000)
