public class CD extends Prodotto{
    protected String autore;
    protected String esecutore;
    protected float durata;

    public CD()
    {
        super();
        this.autore = "N/A";
        this.esecutore = "N/A";
        this.durata = 0.0f;
    }

    public CD(int codice, String titolo, String descrizione, int anno, float prezzo,
              int quantita, String autore, String esecutore, float durata)
    {
        super(codice, titolo, descrizione, anno, prezzo, quantita);
        this.autore = autore;
        this.esecutore = esecutore;
        this.durata = durata;
    }

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public String getAutore() {
        return autore;
    }

    public void setEsecutore(String esecutore) {
        this.esecutore = esecutore;
    }

    public String getEsecutore() {
        return esecutore;
    }

    public void setDurata(float durata) {
        this.durata = durata;
    }

    public float getDurata() {
        return durata;
    }

    public void clone(CD originale) {
        this.codice = originale.codice;
        this.titolo = originale.titolo;
        this.descrizione = originale.descrizione;
        this.anno = originale.anno;
        this.prezzo = originale.prezzo;
        this.quantita = originale.quantita;
        this.autore = originale.autore;
        this.esecutore = originale.esecutore;
        this.durata = originale.durata;
    }
}
