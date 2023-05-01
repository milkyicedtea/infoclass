public class Dietista extends  MedicoSpecialista{
    protected int corsiAggiuntivi;

    public Dietista()
    {
        super();
        this.corsiAggiuntivi = 0;
    }

    public Dietista(String nome, String cognome, int eta,
                    String indirizzo, String telefono ,float pagaOraria,
                    boolean lavoraInOspedale, String giornoDiVisita, int corsiAggiuntivi)
    {
        super(nome, cognome, eta, indirizzo, telefono, pagaOraria, lavoraInOspedale, giornoDiVisita);
        this.corsiAggiuntivi = corsiAggiuntivi;
    }

    public int getCorsiAggiuntivi() {
        return corsiAggiuntivi;
    }

    public void printDietista()
    {
        System.out.println("Nome: " + this.nome);
        System.out.println("Cognome: " + this.cognome);
        System.out.println("Eta': " + this.eta);
        System.out.println("Indirizzo: " + this.indirizzo);
        System.out.println("Telefono: " + this.telefono);
        System.out.println("Paga Oraria: " + this.pagaOraria);
        System.out.println("Lavora in ospedale: " + this.lavoraInOspedale);
        System.out.println("Giorno di visita: " + this.giornoDiVisita);
        System.out.println("Corsi Aggiuntivi: " + this.corsiAggiuntivi);
    }
}
