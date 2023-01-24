 

public class Appartamento extends Abitazione
{
    private int floor;
    private boolean has_lift = false;
    private int n_balconies;
    private static float price_meter_sq = 1000f;

    public Appartamento(int floor, int n_balconies, int rooms, float surface, String address, String city)
    {
        super(rooms, surface, address, city);
        this.floor = floor;
        this.n_balconies = n_balconies;
    }

    public void setHas_lift()
    {
        this.has_lift = !this.has_lift;
    }

    private static float getPrice_meter_sq() {
        return price_meter_sq;
    }

    public float valore()
    {
        return getPrice_meter_sq() * this.surface;
    }

    public void get_Appartamento()
    {
        System.out.println("Numero piano: " + this.floor);
        System.out.println("Indirizzo: " + this.address);
        System.out.println("Citta': " + this.city);
        System.out.println("Prezzo al metro quadro: " + getPrice_meter_sq());
        System.out.println("Numero balconi: " + this.n_balconies);
        System.out.println("Numero stanze: " + this.rooms);
    }
}
