abstract class ScuolaSuperiore extends Scuola
{
    public ScuolaSuperiore()
    {
        super();
    }

    public ScuolaSuperiore(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                           int numero_classi, int numero_sedi, int numero_laboratori)
    {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
    }
}
