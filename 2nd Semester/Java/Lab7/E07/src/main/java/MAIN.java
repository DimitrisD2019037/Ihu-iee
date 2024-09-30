import java.text.*;
import java.util.Date;
import java.util.Scanner;
import java.util.Random;

public class MAIN {
   
    static Foititis [] pinFoitites;
    
    public static void main(String args[]) {
        
        
        pinFoitites = new Foititis[5]; 
        Random rand = new Random();
        float mo0 = 10 * rand.nextFloat();
        DecimalFormat dmo0 = new DecimalFormat("##.#");
        pinFoitites[0] = new Foititis("Γάλλος", 15 , "6912745678" ,"2310591239", dmo0.format(mo0) );
        
        rand = new Random();
        float mo1 = 10 * rand.nextFloat();
        DecimalFormat dmo1 = new DecimalFormat("##.#");
        pinFoitites[1] = new Foititis("Παπουτσής", 20 , "6902704679" ,"2392045843", dmo1.format(mo1));
        
        rand = new Random();
        float mo2 = 10 * rand.nextFloat();
        DecimalFormat dmo2 = new DecimalFormat("##.#");
        
        String kinito;
        do{
        Scanner kin = new Scanner(System.in);
        System.out.println("Dose to kinito tou 3o foititi");
        kinito = kin.nextLine();
        }
        while(!kinNumberCheck(kinito));
        
        String stathero;
        do{
        Scanner stath = new Scanner(System.in);
        System.out.println("Dose to stathero tou 3o foititi");
        stathero = stath.nextLine();
        }
        while(!stathNumberCheck(stathero));
        pinFoitites[2] = new Foititis("Νούνης", 19, kinito ,stathero , dmo2.format(mo2));
        
        rand = new Random();
        float mo3 = 10 * rand.nextFloat();
        DecimalFormat dmo3 = new DecimalFormat("##.#");
        pinFoitites[3] = new Foititis("Κόβες", 12, "6964441668" ,"2112159821", dmo3.format(mo3));
        
        rand = new Random();
        float mo4 = 10 * rand.nextFloat();
        DecimalFormat dmo4 = new DecimalFormat("##.#");
        pinFoitites[4] = new Foititis("Γιώργος", 15, "6941238958" ,"2165804679", dmo4.format(mo4));
        
        String imerominia;
        do{
        Scanner imer = new Scanner(System.in);
        System.out.println("Dose tin imerominia gennisis tou 3ou foititi");
        imerominia = imer.nextLine();}
        while(!hmerominiaCheck(imerominia));
        pinFoitites[2].setHmeromGennisis(imerominia);
        
        System.out.println("Dose poio foititi theleis na eisageis to email toy");
        Scanner sc1 = new Scanner(System.in);
        int foit = sc1.nextInt();
        String email;
        do {
        Scanner sc2 = new Scanner(System.in);
        System.out.println("Dose to email tou" +" " + foit + "ou foititi se morfi ieeAM@iee.ihu.gr");
        email = sc2.nextLine();}
        while(!emailCheck(email));
        pinFoitites[foit].setEmail(email);

        
        int n = pinFoitites.length;
        emfanisiFoititwn();
      
    }
    
       
    public static void emfanisiFoititwn() {
        for (int i=0; i<pinFoitites.length; i++ )
            System.out.println(pinFoitites[i]);            
    }
    
    public static void emfanisiFoititwnGetters(){
        for (int i=0; i<pinFoitites.length;i++){
             System.out.println(pinFoitites[i].getEtosEisagwgis() + " " + pinFoitites[i].getOnomatEpwnymo() + " " + pinFoitites[i].getKinito() + " " + pinFoitites[i].getMo());
        }
    }
    
    public static boolean kinNumberCheck(String number){
        
        try{
         if (number.matches("[0-9]{10}") == false)
            throw new ArithmeticException("Ο αριθμός που έδωσες δεν είναι δέκα ψηφία.");
        
        if ((number.startsWith("6")) == false)
            throw new NullPointerException("Λάθος πρώτο ψηφίο αριθμού.");
        
        if (number.matches("[0-9]+") == false)
            throw new ArrayIndexOutOfBoundsException("Δεν είναι όλοι οι χαρακτήρες που έδωσες νούμερα.");
        }
        catch (ArithmeticException ex){
            System.out.println("Ο αριθμός που έδωσες δεν είναι δέκα ψηφία.");
            return false;
        }
        catch (NullPointerException ex){
            System.out.println("Λάθος πρώτο ψηφίο αριθμού.");
            return false;
        }
        catch (ArrayIndexOutOfBoundsException ex){
            System.out.println("Δεν είναι όλοι οι χαρακτήρες που έδωσες νούμερα.");
            return false;
        }
        return true;
        
    }
    public static boolean stathNumberCheck(String number){
        
        try{
         if (number.matches("[0-9]{10}") == false)
            throw new ArithmeticException("Ο αριθμός που έδωσες δεν είναι δέκα ψηφία.");
        
        if ((number.startsWith("2")) == false)
            throw new NullPointerException("Λάθος πρώτο ψηφίο αριθμού.");
        
        if (number.matches("[0-9]+") == false)
            throw new ArrayIndexOutOfBoundsException("Δεν είναι όλοι οι χαρακτήρες που έδωσες νούμερα.");
        }
        catch (ArithmeticException ex){
            System.out.println("Ο αριθμός που έδωσες δεν είναι δέκα ψηφία.");
            return false;
        }
        catch (NullPointerException ex){
            System.out.println("Λάθος πρώτο ψηφίο αριθμού.");
            return false;
        }
        catch (ArrayIndexOutOfBoundsException ex){
            System.out.println("Δεν είναι όλοι οι χαρακτήρες που έδωσες νούμερα.");
            return false;
        }
        return true;
        
    }
    
     public static boolean hmerominiaCheck(String hmerominia) {
        try{
         if (hmerominia.matches("[0-9]{2}/[0-9]{2}/[0-9]{4}") == false)
            throw new ArithmeticException("Η ημερομηνία που έδωσες δεν είναι σωστή.");
        else{
            // 3anadesto 2000
            String temp = hmerominia.substring(6);
            int x = Integer.parseInt(temp);
            if ((2021 - x) < 18){
                throw new ArithmeticException("Ο φοιτητής δεν είναι τουλάχιστον 18 ετών.");
            }
        }
        }
        catch(ArithmeticException ex){
            System.out.println(ex.getMessage());
            return false;
        }
        return true;
    }
    
    public static boolean emailCheck(String email){
    try
    {
        if ((email.substring(0, 3).matches("iee") && email.substring(3, 10).matches("[0-9]{7}") && email.substring(10).matches("@iee.ihu.gr")) ==false ){
            throw new ArithmeticException();
        }
    }
        catch (ArithmeticException ex){
            System.out.println("To email poy edoses einai lathos");
            return false;
        }
    return true;
    }
    
}
