 

public class Villa extends Abitazione
{
    private int floors;
    private float garden_surf;
    private boolean has_pool = false;
    private static float price_meter_sq = 1500f;

    public Villa(int floors, float garden_surf, int rooms, float surface, String address, String city)
    {
        super(rooms, surface, address, city);
        this.floors = floors;
        this.garden_surf = garden_surf;
    }

    public void setHas_pool()
    {
        this.has_pool = !this.has_pool;
    }

    public static float getPrice_meter_sq()
    {
        return price_meter_sq;
    }

    public float getGarden_surf()
    {
        return garden_surf;
    }

    public void getVilla()
    {
        System.out.println("Numero piano: " + this.floors);
        System.out.println("Indirizzo: " + this.address);
        System.out.println("Citta': " + this.city);
        System.out.println("Prezzo al metro quadro: " + getPrice_meter_sq());
        System.out.println("Superficie giardino: " + getGarden_surf());
        System.out.println("Numero stanze: " + this.rooms);
    }

    public float valore()
    {
        return (getGarden_surf() * getPrice_meter_sq() + (getPrice_meter_sq() * this.surface));
    }
}
