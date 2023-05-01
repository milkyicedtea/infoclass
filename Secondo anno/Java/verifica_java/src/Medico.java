abstract public class Medico {
    protected String nome;
    protected String cognome;
    protected int eta;
    protected String indirizzo;
    protected String telefono;

    public Medico()
    {
        this.nome = "";
        this.cognome = "";
        this.eta = 0;
        this.indirizzo = "";
        this.telefono = "";
    }

    public Medico(String nome, String cognome, int eta, String indirizzo, String telefono)
    {
        this.nome = nome;
        this.cognome = cognome;
        this.eta = eta;
        this.indirizzo = indirizzo;
        this.telefono = telefono;
    }

    public String getNome() {
        return nome;
    }

    public String getCognome() {
        return cognome;
    }

    public int getEta() {
        return eta;
    }

    public String getTelefono() {
        return telefono;
    }

    public String getIndirizzo() {
        return indirizzo;
    }
}