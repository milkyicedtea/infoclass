public class DataDiNascita
{
    private int day;
    private int month;
    private int year;

    DataDiNascita()
    {
        this.day = 1;
        this.month = 1;
        this.year = 1970;
    }

    DataDiNascita(int day, int month, int year)
    {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public void setDay(int day)
    {
        this.day = day;
    }

    public void setMonth(int month)
    {
        this.month = month;
    }

    public void setYear(int year)
    {
        this.year = year;
    }

    public int getDay()
    {
        return day;
    }

    public int getMonth()
    {
        return month;
    }

    public int getYear()
    {
        return year;
    }
}
