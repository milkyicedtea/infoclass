 

public class Abitazione
{
    protected int rooms;
    protected float surface;
    protected String address;
    protected String city;

    public Abitazione(int rooms, float surface, String address, String city)
    {
        this.rooms = rooms;
        this.surface = surface;
        this.address = address;
        this.city = city;
    }

    public void getAbitazione()
    {
        System.out.println("Indirizzo: " + this.address);
        System.out.println("Citta': " + this.city);
        System.out.println("Superficie: " + this.surface);
        System.out.println("Numero stanze: " + this.rooms);
    }
}
