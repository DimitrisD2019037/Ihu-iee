import java.text.*;
import java.util.Date;
import java.util.Scanner;

public class MAIN {
   
    private static Foititis [] pinFoitites;
    
    public static void main(String args[]) {
        
        // Ασκηση 3: Δημιουργία αντικειμένων 
        pinFoitites = new Foititis[10];
        pinFoitites[0] = new Foititis(18, "Πολυκάρπου Κλέων");
        
        for( int i=0; i<pinFoitites.length; i++){
        System.out.println(pinFoitites[i].toString());
        }
        
        // Ασκηση 4: Δημιουργία αντικειμένων - Εισαγωγή ημερομηνίας γέννησης 
        System.out.println("«=== Εισαγωγή ημερ/νιών γέννησης φοιτητών ===");
        for( int i=0; i<pinFoitites.length; i++){
           System.out.println(pinFoitites[i].toString());
           if (i==5) {
              Date hmerom;
              hmerom = inHmeromGennisis();
              pinFoitites[i].setHmeromGennisis(hmerom);
           }
        }
        
        // Ασκηση 5: Σειριακή αναζήτηση
        // (1)   Δημιουργία μενού
        int epilogi = -1;
        while (epilogi <1 || epilogi > 5) {
            System.out.println("\n\n\tΜενού");
            System.out.println("1) Αναζήτηση με Επώνυμο");
            System.out.println("2) Αναζήτηση με έτος γέννησης");
            System.out.println("0) Εξοδος");
            System.out.print("Επιλογή: ");
            Scanner sc = new Scanner(System.in);
            epilogi = sc.nextInt();
            switch(epilogi) {
                case 0:{
                    System.out.println("Έξοδος προγράμματος");
                    break;
                }
               case 1: {
                    anazitisiMeEpwnymo();
                    break;  }
               case 2: {
                    anazitisiMeEtos();
                    break;
               }
               //default:
                // System.out.println("Λάθος επιλογή");
             }
        } 
    }
    public static Date inHmeromGennisis (){
        Date hmerom;
        String hmeromStr;
        Scanner scan = new Scanner(System.in);
        hmeromStr = scan.nextLine();
        hmerom = convertStrToDate(hmeromStr);
        return hmerom;
        }
       
    
    public static Date convertStrToDate (String hmeromStr){
        DateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        Date hmerom = null;
        try {
            hmerom = df.parse(hmeromStr);
        }
        catch (Exception ex ){
            System.out.println(ex);
        }
        return hmerom;

    }
    
    public static void emfanisiFoititwn() {
        for (int i=0; i<pinFoitites.length; i++ )
             System.out.println(pinFoitites[i].toString());
    }
    
    public static void anazitisiMeEpwnymo() {
        boolean bool=false;
        System.out.print("\n1) Δώσε επώνυμο: ");
        Scanner sc = new Scanner(System.in, "utf8");
        String keyStr = sc.nextLine();
        System.out.println(keyStr);
        for(int i=0;i<pinFoitites.length;i++){
            if(pinFoitites[i].getOnomatEpwnymo()==keyStr);{
                bool=true;
            }
        }
        if(bool==true)
            System.out.println("O" + keyStr + " brisketai stoys fitites");
        else
            System.out.println("O" + keyStr + " den brisketai stoys fitites");
        
        
    }
    
    public static void anazitisiMeEtos() {
        boolean bool=false;
        int position = 0;
        String strToDate;
        System.out.println("\n2) Δώσε έτος γέννησης");
        Scanner sc = new Scanner(System.in);
        String etos = sc.nextLine();
        for(int i=0;i<pinFoitites.length;i++){
            strToDate = convertDateToStr(pinFoitites[i].getHmeromGennisis());
            if(strToDate==etos);{
                bool=true;
                position=i;
            }
        }
        if(bool==true)
            System.out.println("To" + etos + "brisketai ston foititi noumero: " + position);
        else
            System.out.println("To" + etos + "de brisketai se kapoion foititi");
        
    }
    
    private static String convertDateToStr(Date hmerom) {
        DateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        String str = df.format(hmerom);
        return str;
    }
    
}
