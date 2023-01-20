public class  libro_scolastico extends libro
{
    private String materia;
    private int tomo;

    public libro_scolastico()
    {
        super();
        this.materia = materia;
        this.tomo = tomo;
    }

    public libro_scolastico(String titolo, String autore, int numero_pagine)
    {
        super(titolo, autore, numero_pagine);
        this.materia = materia;
        this.tomo = tomo;
    }

    public libro_scolastico(libro_scolastico libroScolastico)
    {
        this.materia = libroScolastico.materia;
        this.tomo = libroScolastico.tomo;
    }

    public void stampaLibroTesto()
    {
        System.out.println("Titolo = " + getTitolo());
    }

    public void stampaLibroAutore()
    {
        System.out.println("Autore = " + getAutore());
    }
}