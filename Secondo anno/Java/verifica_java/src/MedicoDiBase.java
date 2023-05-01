public class MedicoDiBase extends Medico {
    protected int mutuatiAssistiti;
    protected static float quotaFissa = 0;
    protected float stipendioBase;

    public MedicoDiBase() {
        super();
        this.mutuatiAssistiti = 0;
        this.stipendioBase = 0;
    }

    public MedicoDiBase(String nome, String cognome, int eta,
                        String indirizzo, String telefono, int mutuatiAssistiti,
                        float stipendioBase)
    {
        super(nome, cognome, eta, indirizzo, telefono);
        this.mutuatiAssistiti = mutuatiAssistiti;
        this.stipendioBase = stipendioBase;
    }

    public static void setQuotaFissa(float quotaFissa) {
        MedicoDiBase.quotaFissa = quotaFissa;
    }

    public float getStipendioTotale() {
        return stipendioBase + (mutuatiAssistiti * quotaFissa);
    }

    public void printMedicoDiBase()
    {
        System.out.println("Nome: " + this.nome);
        System.out.println("Cognome: " + this.cognome);
        System.out.println("Eta': " + this.eta);
        System.out.println("Indirizzo: " + this.indirizzo);
        System.out.println("Telefono: " + this.telefono);
        System.out.println("Paga oraria: " + this.mutuatiAssistiti);
        System.out.println("Quota fissa: " + MedicoDiBase.quotaFissa);
        System.out.println("Numero mutuati: " + this.mutuatiAssistiti);
        System.out.println("Stipendio base: " + this.stipendioBase);
        System.out.println("Stipendio totale: " + getStipendioTotale());
    }
}
