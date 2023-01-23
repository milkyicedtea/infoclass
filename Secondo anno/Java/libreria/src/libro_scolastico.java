public class  libro_scolastico extends libro
{
    private String materia;
    private int tomo;

    public libro_scolastico()   //costuttore default
    {
        super();
        this.materia = "";
        this.tomo = 0;
    }

    public libro_scolastico(String titolo, String autore, int numero_pagine)    //costuttore con libro
    {
        super(titolo, autore, numero_pagine);
        this.materia = "";
        this.tomo = 0;
    }

    public libro_scolastico(String titolo, String autore, int numero_pagine, String materia, int tomo)  //costruttore completo
    {
        super(titolo, autore, numero_pagine);
        this.materia = materia;
        this.tomo = tomo;
    }

    public libro_scolastico(libro_scolastico libroScolastico)   //costruttore di copia
    {
        this.materia = libroScolastico.materia;
        this.tomo = libroScolastico.tomo;
    }

    public String getMateria()
    {
        return this.materia;
    }

    public int getTomo()
    {
        return this.tomo;
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