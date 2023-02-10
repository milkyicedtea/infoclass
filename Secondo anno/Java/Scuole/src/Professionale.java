public class Professionale extends Scuola
{
    private static float contibuto_classi = 2400;
    private static float contributo_laboratori = 1100;

    public Professionale()
    {
        super();
        this.calcContributo_annuale();
    }

    public Professionale(String codice, String denominazione, String indirizzo, String citta, int numero_studenti,
                   int numero_classi, int numero_sedi, int numero_laboratori) {
        super(codice, denominazione, indirizzo, citta, numero_studenti, numero_classi, numero_sedi, numero_laboratori);
        this.calcContributo_annuale();
    }

    public static void setContributo_classi(float contibuto_classi)
    {
        Professionale.contibuto_classi = contibuto_classi;
    }

    public static void setContributo_laboratori(float contributo_laboratori)
    {
        Professionale.contributo_laboratori = contributo_laboratori;
    }

    public void calcContributo_annuale()
    {
        this.contributo_annuale = (this.numero_classi * contibuto_classi) +
                (this.numero_laboratori * contributo_laboratori);
    }

    public static float getContributo_classi()
    {
        return Professionale.contibuto_classi;
    }

    public static float getContributo_laboratori()
    {
        return Professionale.contributo_laboratori;
    }
}
