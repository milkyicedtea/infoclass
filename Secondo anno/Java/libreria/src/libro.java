public class libro
{
    private String titolo;
    private String autore;
    private int numero_pagine;
    public static double costo_pagine = 0.05;
    final double costo_fisso = 5.5;

    public libro()
    {
        this.titolo = "";
        this.autore = "";
        this.numero_pagine = 0;
    }

    public libro(String titolo, String autore, int numero_pagine)
    {
        this.titolo = titolo;
        this.autore = autore;
        this.numero_pagine = numero_pagine;
    }

    public libro(libro libro)
    {
        this.titolo = libro.titolo;
        this.autore = libro.autore;
        this.numero_pagine = libro.numero_pagine;
    }

    public String getTitolo()
    {
        return this.titolo; //return titolo
    }

    public String getAutore()
    {
        return this.autore; //return autore
    }

    public int getNumero_pagine()
    {
        return this.numero_pagine; //return numero_pagine
    }

    public void setTitolo(String titolo)
    {
        this.titolo = titolo;
    }

    public void setAutore(String autore)
    {
        this.autore = autore;
    }

    public void setNumero_pagine(int numero_pagine)
    {
        this.numero_pagine = numero_pagine;
    }

    public double prezzo()
    {
        return this.costo_fisso + (this.costo_pagine * this.numero_pagine);
    }
}
