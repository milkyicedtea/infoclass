abstract class Scuola
{
    protected String codice_alfanumerico;
    protected String denominazione;
    protected String indirizzo;
    protected String citta;
    protected int numero_studenti;
    protected int numero_classi;
    protected int numero_sedi;
    protected int numero_laboratori;
    protected float contributo_annuale;

    public Scuola()
    {
        this.codice_alfanumerico = "N/A";
        this.denominazione = "N/A";
        this.indirizzo = "N/A";
        this.citta = "N/A";
        this.numero_studenti = 0;
        this.numero_classi = 0;
        this.numero_sedi = 0;
        this.numero_laboratori = 0;
    }

    public Scuola(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                  int numero_classi, int numero_sedi, int numero_laboratori)
    {
        this.codice_alfanumerico = codice;
        this.denominazione = denominazione;
        this.indirizzo = indirizzo;
        this.citta = citta;
        this.numero_studenti = numero_studenti;
        this.numero_sedi = numero_studenti;
        this.numero_classi = numero_classi;
        this.numero_laboratori = numero_laboratori;
    }

    public void printInfo()
    {
        System.out.println( "Codice: " + this.codice_alfanumerico +
                "\nDenominazione: " + this.denominazione +
                "\nIndirizzo: " + this.indirizzo +
                "\nCitta': " + this.citta +
                "\nNumero studenti: " + this.numero_studenti +
                "\nNumero classi: " + this.numero_classi +
                "\nNumero sedi: " + this.numero_sedi +
                "\nNumero laboratori: " + this.numero_laboratori +
                "\nContributo annuale: " + this.contributo_annuale);
    }
}
