# CREAZIONE SCHEMA
create schema valutazione;
use valutazione;

-- CREAZIONE TABELLE

-- (DOCENTI)

	create table tbl_docenti
	( id_docente int auto_increment not null primary key,
	  cognome varchar(15) not null,
	  nome varchar(20) not null,
	  telefono char(10)
	);

-- (ALUNNI)

	create table tbl_alunni
	( matricola int auto_increment not null primary key,
	  cognome varchar(15) not null,
	  nome varchar(20) not null,
	  telefono char(10),
	  data_nascita date not null
	);

-- (MATERIE)

	create table tbl_materie
	( id_materia int auto_increment not null primary key,
	  materia varchar(20) not null
	);

-- (VOTI)

	create table rel_registro
	( id_voto int auto_increment not null primary key,
	  giorno date,
    	  id_materia int,
    	  id_alunno int,
	  voto float not null,
	  id_docente int,

	  foreign key(id_materia) references tbl_materie(id_materia),
	  foreign key(id_alunno) references tbl_alunni(matricola),
	  foreign key(id_docente) references tbl_docenti(id_docente)
	);

-- ________________________________________________________________________________

-- POPOLAZIONE DEL DB

-- (DOCENTI)

	insert into tbl_docenti(cognome,nome,telefono)
	values ('Mancini','Alessandra','3478323445'),
	       ('Anselmi','Livio','3205899122'),
	       ('Binanti','Luigi','3331266567'),
               ('Scarinci','Annamaria','3720956921'),
	       ('Termini','Lorena','3407644534'),
               ('Sottile','Salvo','3567493222'),
	       ('Latella','Simone','3287665543'),
	       ('Stilo','Patrizia','3245132908'),
	       ('Salvucci','Manuela','3357686954'),
	       ('Petrelli','Rita','3235689544'),
	       ('Tomarchio','Gianluca Vasta','3306182225'),
	       ('Gagliardi','Claudio','3316278900'),
               ('Dalla Libera','Dario','3658790212'),
	       ('Elisabetta','De Masi','3296543117'),
	       ('Pichi','Anita','3346765889'),
	       ('Lorenzoni','Alessia','3201194398'),
               ('Fainelli','Graciella','3284300546'),
               ('Cavalieri','Bruno','3662190775'),
               ('Nisini','Tiziana','3423893225'),
	       ('Massaccesi','Dario','3345283226'),
	       ('Montanucci','Federica','3329388710'),
	       ('Macino','Ottavio','3457887556'),
	       ('Cagnetti','Marco','3769908765'),
	       ('Calvanelli','Fabio','3237866009'),
	       ('Piatesi','Mario','3459822144');

-- (ALUNNI)

	insert into tbl_alunni(cognome,nome,telefono,data_nascita)
	values ('Angileri','Flora','3409877658','1997-04-09'),
	       ('Bonamin','Paola','3479065112','1997-03-07'),
	       ('Multari','Simone','3280017845','1996-02-13'),
	       ('Rocchetti','Christian','3419266304','1996-08-31'),
	       ('Hrisca','Emilian Marian','3229907843','1994-09-06'),
	       ('Basile','Fatima','3317204331','1994-02-13'),
	       ('Basile','Francesca','3396500343','1998-12-07'),
	       ('Ferretti','Federico','3201160987','1997-04-15'),
               ('Zara','Marco','3210228389','1997-05-12'),
               ('Hossain','Lisa','3212233898','1999-11-05'),
	       ('Sarcone','Antonio','3338629048','1997-10-28'),
	       ('Agnelli','Alessio','3307292449','1997-08-03'),
	       ('Forcinito','Matteo','3219299039','1996-03-15'),
               ('Giaccari','Giordano','3449201229','1997-12-17'),
	       ('Calvani','Matteo','3317629304','1995-05-11'),
	       ('Parisse','Antonio','3478200654','1997-10-25'),
	       ('Chirichilli','Roberto','3337103443','1997-06-02'),
	       ('Meloni','Lorenzo','3921123547','1998-09-01'),
               ('Sacco','Leonardo','3337584994','1998-10-14'),
	       ('Gioia','Maria Giovanna','3223894784','1996-06-01');

-- (MATERIE)

	insert into tbl_materie(materia)
	values ('Italiano'),
	       ('Storia'),
	       ('Matematica'),
               ('Informatica'),
	       ('Sistemi e Reti'),
	       ('TPSIT'),
               ('GPOI'),
               ('Inglese'),
               ('Chimica'),
               ('TPSE'),
               ('Telecomunicazioni'),
               ('Elettronica'),
               ('Sistemi'),
               ('Impianti'),
               ('Ed. Fisica'),
               ('Religione'),
               ('Ed. Tecnica'),
               ('Igiene');

-- (VOTI)

	insert into rel_registro(giorno,id_materia,id_alunno,voto,id_docente)
	values ('16-02-01',2,1,9.5,5),
	       ('16-02-01',3,1,8,3),
                ('20-03-11',1,3,6,4),
               ('20-02-01',4,2,7,2),
               ('20-03-11',7,4,5,2),
               ('20-02-21',6,5,6,1),
               ('20-05-30',5,2,5,2),
               ('19-02-01',6,2,7,2),
               ('20-03-11',7,4,3,2),
               ('20-02-21',6,5,4,1),
               ('20-02-01',5,2,5,5);

-- ________________________________
-- 0)gruppi per voto  (voti dei gruppi)

select r.voto
   from rel_registro as r
      group by r.voto;



-- 1)estrarre i voti per mese


select r.voto, month(r.giorno) as mese
   from rel_registro as r
        group by month(r.giorno),r.voto;






-- 2)DARE IN USCITA TUTTI I VOTI raggruppati per materia


select m.materia, r.voto
  from rel_registro as r, tbl_materie as m
    where r.id_materia=m.id_materia
     group by m.materia, r.voto;


-- 3)DARE IN USCITA il numero dei VOTI raggruppati per materia con media

select m.materia,  count(*) as 'conteggio', avg(r.voto) as 'media'
  from rel_registro as r, tbl_materie as m
    where r.id_materia=m.id_materia
     group by m.materia
      having count(*)>1;

-- 4) Per ciascun insegnante il numero delle verifiche assegnate


   select   d. cognome, d.nome, count(*) as 'numero verifiche'
      from  rel_registro as r, tbl_docenti as d
        where r.id_docente=d.id_docente
           group by d. cognome, d.nome;


-- Riepilogo
-- 3)Estrarre tutti i docenti che hanno dato una valutazione e la rispettiva materia
--
-- 4)Estrarre tutte le verifiche effettuate tra gennaio 2020 e marzo 2020
--
--
-- 5)Estrarre le verifiche degli alunni che hanno cognome Multari, Chirichilli,
-- Basile o Calvani
--
-- 6)Estrarre le materie che terminano per a con i docenti che le possono insegnare
--
-- 7)Estrarre le verifiche sufficienti con indicazione del nome e del cognome dello studente
--
--
--
-- 08.01.2024 5C

-- 1)Dare in uscita per ciascun studente la media dei voti
-----
select a.cognome,a.nome,avg(reg.voto) as Media
from rel_registro as reg, tbl_alunni as a
where (reg.id_alunno=a.matricola)
group by a.cognome,a.nome

-- -SE- DAVO IN USCITA QUEI STUDENTI having 3 voti
-- having count(*)>=3
--
-- [AVG --> SUM MIN MAX]
--
-- group by(sulle singole righe)
-- having(condizione dei gruppi)

select a.cognome,a.nome,reg.voto
from rel_registro as reg, tbl_alunni as a
where (reg.id_alunno=a.matricola)
group by a.cognome,a.nome,reg.voto;



-- per ogni voto vogliamo contare qunati alunni hanno preso quel voto
-- like --> 6 --> n.studenti=3

select reg.voto,count(*) as n_alunni
from rel_registro as reg, tbl_alunni as a
where (reg.id_alunno=a.matricola)
group by reg.voto;



-- per ciascun studente visualizzare
-- il voto minimo che ha preso
-- e che venga inserito in modo Crescente
-- a parità del nome/cognome

select min(reg.voto) as min_v,a.cognome,a.nome
from tbl_alunni as a,rel_registro as reg
where (reg.id_alunno=a.matricola)
group by a.cognome,a.nome
order by a.cognome desc,a.nome;









Determinare il minimo, fatte per ogni studente