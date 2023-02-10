public class Tecnico extends ScuolaSuperiore
{
    private static float contributo_classi = 3500;
    private static float contributo_laboratori = 6000;
    private float contributo_annuale =  (this.numero_classi * contributo_classi) +
                                        (this.numero_laboratori * contributo_laboratori);

    public Tecnico()
    {
        super();
    }

    public Tecnico(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                 int numero_classi, int numero_sedi, int numero_laboratori)
    {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
    }
}
