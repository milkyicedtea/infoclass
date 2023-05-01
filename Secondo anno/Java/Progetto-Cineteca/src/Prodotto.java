abstract public class Prodotto {
    protected int codice;
    protected String titolo;
    protected String descrizione;
    protected int anno;
    protected float prezzo;
    protected int quantita;

    public Prodotto()
    {
        this.codice = 0;
        this.titolo = "N/A";
        this.descrizione = "N/A";
        this.anno = 0;
        this.prezzo = 0.0f;
        this.quantita = 0;
    }

    public Prodotto(int codice, String titolo, String descrizione, int anno, float prezzo, int quantita)
    {
        this.codice = codice;
        this.titolo = titolo;
        this.descrizione = descrizione;
        this.anno = anno;
        this.prezzo = prezzo;
        this.quantita = quantita;
    }

    public void setCodice(int codice) {
        this.codice = codice;
    }

    public int getCodice() {
        return codice;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getTitolo() {
        return titolo;
    }

    public void setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    public String getDescrizione() {
        return descrizione;
    }

    public void setAnno(int anno) {
        this.anno = anno;
    }

    public int getAnno() {
        return anno;
    }

    public void setPrezzo(float prezzo) {
        this.prezzo = prezzo;
    }

    public float getPrezzo() {
        return prezzo;
    }

    public void setQuantita(int quantita) {
        this.quantita = quantita;
    }

    public int getQuantita() {
        return quantita;
    }

    public void clone(Prodotto originale) {
        this.codice = originale.codice;
        this.titolo = originale.titolo;
        this.descrizione = originale.descrizione;
        this.anno = originale.anno;
        this.prezzo = originale.prezzo;
        this.quantita = originale.quantita;
    }
}
