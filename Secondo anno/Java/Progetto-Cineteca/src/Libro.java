public class Libro extends Prodotto{
    protected String autore;
    protected String editore;
    protected int pagine;

    public Libro()
    {
        super();
        this.autore = "N/A";
        this.editore = "N/A";
        this.pagine = 0;
    }

    public Libro(int codice, String titolo, String descrizione, int anno, float prezzo,
                 int quantita, String autore, String editore, int pagine)
    {
        super(codice, titolo, descrizione, anno, prezzo, quantita);
        this.autore = autore;
        this.editore = editore;
        this.pagine = pagine;
    }

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public String getAutore() {
        return autore;
    }

    public void setEditore(String editore) {
        this.editore = editore;
    }

    public String getEditore() {
        return editore;
    }

    public void setPagine(int pagine) {
        this.pagine = pagine;
    }

    public int getPagine() {
        return pagine;
    }

    public void clone(Libro originale) {
        this.codice = originale.codice;
        this.titolo = originale.titolo;
        this.descrizione = originale.descrizione;
        this.anno = originale.anno;
        this.prezzo = originale.prezzo;
        this.quantita = originale.quantita;
        this.autore = originale.autore;
        this.editore = originale.editore;
        this.pagine = originale.pagine;
    }
}
