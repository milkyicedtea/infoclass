public class Dipendente
{
    protected String genere;
    protected DataDiNascita dataDiNascita = new DataDiNascita();
    protected float stipendio;

    Dipendente()
    {
        this.genere = "N/A";
        this.stipendio = 0.0f;
    }

    Dipendente(String genere, int day, int month, int year, float stipendio)
    {
        this.genere = genere;
        this.dataDiNascita.setDay(day);
        this.dataDiNascita.setMonth(month);
        this.dataDiNascita.setYear(year);
        this.stipendio = stipendio;
    }
}
