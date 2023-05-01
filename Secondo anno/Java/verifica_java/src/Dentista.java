public class Dentista extends MedicoSpecialista{
    protected int numeroConvegni;

    public Dentista()
    {
        super();
        this.numeroConvegni = 0;
    }

    public Dentista(String nome, String cognome, int eta,
                    String indirizzo, String telefono ,float pagaOraria,
                    boolean lavoraInOspedale, String giornoDiVisita, int numeroConvegni)
    {
        super(nome, cognome, eta, indirizzo, telefono, pagaOraria, lavoraInOspedale, giornoDiVisita);
        this.numeroConvegni = numeroConvegni;
    }

    public int getNumeroConvegni() {
        return numeroConvegni;
    }

    public void printDentista()
    {
        System.out.println("Nome: " + this.nome);
        System.out.println("Cognome: " + this.cognome);
        System.out.println("Eta': " + this.eta);
        System.out.println("Indirizzo: " + this.indirizzo);
        System.out.println("Telefono: " + this.telefono);
        System.out.println("Paga Oraria: " + this.pagaOraria);
        System.out.println("Lavora in ospedale: " + this.lavoraInOspedale);
        System.out.println("Giorno di visita: " + this.giornoDiVisita);
        System.out.println("Numero convegni: " + this.numeroConvegni);
    }
}
