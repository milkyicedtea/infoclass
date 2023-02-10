public class Liceo extends ScuolaSuperiore
{
    private static float contibuto_studenti = 150;
    private static float contributo_laboratori = 3000;
    private float contributo_annuale =  (this.numero_studenti * contibuto_studenti) +
                                        (this.numero_laboratori * contributo_laboratori);

    public Liceo()
    {
        super();
    }

    public Liceo(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                 int numero_classi, int numero_sedi, int numero_laboratori)
    {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
    }

    public static void setContributo_studenti(float contibuto_studenti)
    {
        Liceo.contibuto_studenti = contibuto_studenti;
    }

    public static void setContributo_laboratori(float contributo_laboratori)
    {
        Liceo.contributo_laboratori = contributo_laboratori;
    }
}
