public class DVD extends Prodotto{
    protected String regista;
    protected String produttore;
    protected float durata;

    public DVD()
    {
        super();
        this.regista = "N/A";
        this.produttore = "N/A";
        this.durata = 0.0f;
    }

    public DVD(int codice, String titolo, String descrizione, int anno, float prezzo,
               int quantita, String regista, String produttore, float durata)
    {
        super(codice, titolo, descrizione, anno, prezzo, quantita);
        this.regista = regista;
        this.produttore = produttore;
        this.durata = durata;
    }

    public void setRegista(String regista) {
        this.regista = regista;
    }

    public String getRegista() {
        return regista;
    }

    public void setProduttore(String produttore) {
        this.produttore = produttore;
    }

    public String getProduttore() {
        return produttore;
    }

    public void setDurata(float durata) {
        this.durata = durata;
    }

    public float getDurata() {
        return durata;
    }

    public void clone(DVD originale) {
        this.codice = originale.codice;
        this.titolo = originale.titolo;
        this.descrizione = originale.descrizione;
        this.anno = originale.anno;
        this.prezzo = originale.prezzo;
        this.quantita = originale.quantita;
        this.regista = originale.regista;
        this.produttore = originale.produttore;
        this.durata = originale.durata;
    }
}
