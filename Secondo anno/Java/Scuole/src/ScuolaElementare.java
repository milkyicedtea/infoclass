public class ScuolaElementare extends Scuola
{
    protected float contributo_annuale =  (125 * this.numero_studenti) +
                                        (this.numero_sedi * 9000);

    public ScuolaElementare()
    {
        super();
    }

    public ScuolaElementare(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                            int numero_classi, int numero_sedi, int numero_laboratori)
    {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
    }

    public float getContributo_annuale()
    {
        return this.contributo_annuale;
    }
}