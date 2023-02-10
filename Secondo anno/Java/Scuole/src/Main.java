public class Main {
    public static void main(String[] args) {
        Professionale professionale = new Professionale("pp01", "pp", "via del pp",
                                                    "ppcity", 1000, 50,
                                                4, 12);
        professionale.printInfo();
        Professionale.setContributo_classi(0);
        System.out.println(Professionale.getContributo_classi());
        professionale.printInfo();
    }
}