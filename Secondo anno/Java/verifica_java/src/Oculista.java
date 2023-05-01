public class Oculista extends MedicoSpecialista{
    protected int votoDiLaurea;
    protected boolean isChirurgo;

    public Oculista()
    {
        super();
        this.votoDiLaurea = 0;
        this.isChirurgo = false;
    }

    public Oculista(String nome, String cognome, int eta,
                    String indirizzo, String telefono ,float pagaOraria,
                    boolean lavoraInOspedale, String giornoDiVisita, int votoDiLaurea,
                    boolean isChirurgo)
    {
        super(nome, cognome, eta, indirizzo, telefono, pagaOraria, lavoraInOspedale, giornoDiVisita);
        this.votoDiLaurea = votoDiLaurea;
        this.isChirurgo = isChirurgo;
    }

    public int getVotoDiLaurea() {
        return votoDiLaurea;
    }

    public boolean isChirurgo() {
        return isChirurgo;
    }

    public void printOculista()
    {
        System.out.println("Nome: " + this.nome);
        System.out.println("Cognome: " + this.cognome);
        System.out.println("Eta': " + this.eta);
        System.out.println("Indirizzo: " + this.indirizzo);
        System.out.println("Telefono: " + this.telefono);
        System.out.println("Paga Oraria: " + this.pagaOraria);
        System.out.println("Lavora in ospedale: " + this.lavoraInOspedale);
        System.out.println("Giorno di visita: " + this.giornoDiVisita);
        System.out.println("Voto di Laurea: " + this.votoDiLaurea);
        System.out.println("Chirugo: " + this.isChirurgo);
    }
}
