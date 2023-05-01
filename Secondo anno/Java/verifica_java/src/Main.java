public class Main {
    public static void main(String[] args) {
        System.out.println("----------------------------------");

        //creazione e print medico di base
        MedicoDiBase medicoDiBase = new MedicoDiBase("medico", "tuttapposto", 3,
                "casa di medico", "+39 3674789634", 10, 50000);
        MedicoDiBase.setQuotaFissa(1000);
        medicoDiBase.printMedicoDiBase();

        System.out.println("----------------------------------");

        //creazione e print oculista
        Oculista oculista = new Oculista("oculista", "cevedo", 4,
                "casa di oculista", "+39 3674789634",
                20, true, "Martedi, Venerdi",
                18, false);
        oculista.printOculista();

        System.out.println("----------------------------------");

        //creazione e print dietista
        Dietista dietista = new Dietista("dietista", "mangiasano", 4,
                "casa di dietista", "+39 3674789634",
                15, true, "Martedi, Venerdi",
                18);
        dietista.printDietista();

        System.out.println("----------------------------------");

        //creazione e print dentista
        Dentista dentista = new Dentista("dentista", "dentebianco", 5,
                "casa di dentista", "+39 3674789634",
                17, true, "Martedi, Venerdi",
                27);
        dentista.printDentista();

        System.out.println("----------------------------------");
    }
}