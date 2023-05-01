abstract public class MedicoSpecialista extends Medico{
    protected float pagaOraria;
    protected boolean lavoraInOspedale;
    protected String giornoDiVisita;

    public MedicoSpecialista(){
        super();
        this.pagaOraria = 0.0f;
        this.lavoraInOspedale = false;
        this.giornoDiVisita = "N/A";
    }

    public MedicoSpecialista(String nome, String cognome, int eta,
                             String indirizzo, String telefono ,float pagaOraria,
                             boolean lavoraInOspedale, String giornoDiVisita)
    {
        super(nome, cognome, eta, indirizzo, telefono);
        this.pagaOraria = pagaOraria;
        this.lavoraInOspedale = lavoraInOspedale;
        this.giornoDiVisita = giornoDiVisita;
    }

    public float getPagaOraria() {
        return pagaOraria;
    }

    public String getGiornoDiVisita() {
        return giornoDiVisita;
    }

    public boolean isLavoraInOspedale() {
        return lavoraInOspedale;
    }
}
