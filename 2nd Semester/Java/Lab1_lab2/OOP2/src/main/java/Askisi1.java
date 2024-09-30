
public class Askisi1 {

    public static void main(String Args[]) {
        String strPKM = "Περιφέρεια της Κεντρικής Μακεδονίας";
        System.out.println("\n***Μήκος συμβολοσειράς:" + strPKM.length());
        System.out.println("\n*** Παράδειγμα με charAt");
        for (int i = 0; i < strPKM.length(); i++)
            System.out.print(strPKM.charAt(i));


        System.out.println("\n*** Μεταφορά σε πίνακα char : toCharArray");
        char[] chars = strPKM.toCharArray();
        for (int i = 0; i < strPKM.length(); i++)
            System.out.println(chars[i]);  // + "|");
        // Εναλλακτικός τρόπος
        for (char c : chars) {
            System.out.print(c + "|");
        }


        System.out.println("\n***Διαχωρισμός λέξεων συμβολοσειράς");
        String[] arrOfStr = strPKM.split(" ");
        for (String lexi : arrOfStr)
            System.out.println(lexi);


        System.out.println("\n***Συμβολοσειρά από συνένωση λέξεων");
        String arktikolexo = "";
        for (String lexi : arrOfStr)
            arktikolexo += lexi.substring(0, 2) + ".";
        System.out.println(arktikolexo);

        /*
        System.out.println("\n***Δυναμική συμβολοσειρά : StringBuffer");
        StringBuffer strBuf = new StringBuffer("");
        strBuf.replace(15, 25, "Δυτικής");
        System.out.println(strBuf);

        Throws:
        StringIndexOutOfBoundsException –
        Since:
        1.2
        */
            //Αναζήτηση String με την μέθοδο contains
            boolean found=false;
            for (int i = 0; i < strPKM.length(); i++) {
                if (strPKM.contains("ικής")) {
                    found=true;}
        }
            if (found)
                System.out.println("Υπάρχει λέξη που περιέχει το μερος <<ικής>>");
            else
                System.out.println("Δεν υπάρχει λέξη που περιέχει το μέρος <<ικής>>");

    }
    
}
