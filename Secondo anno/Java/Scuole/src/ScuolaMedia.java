public class ScuolaMedia extends Scuola
{
    private static float contributo_studenti = 150;
    private static float contributo_sedi = 9000;
    private static float contributo_laboratori = 1100;
    private float contributo_annuale =  (this.numero_studenti * contributo_studenti) +
                                        (this.numero_sedi * contributo_sedi) +
                                        (this.numero_laboratori * contributo_laboratori);

    public ScuolaMedia()
    {
        super();
    }

    public ScuolaMedia(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                       int numero_classi, int numero_sedi, int numero_laboratori)
    {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
    }

    public static void setContributo_laboratori(float contributo_laboratori)
    {
        ScuolaMedia.contributo_laboratori = contributo_laboratori;
    }

    public static void setContributo_sedi(float contributo_sedi)
    {
        ScuolaMedia.contributo_sedi = contributo_sedi;
    }

    public static void setContributo_studenti(float contributo_studenti)
    {
        ScuolaMedia.contributo_studenti = contributo_studenti;
    }
}
