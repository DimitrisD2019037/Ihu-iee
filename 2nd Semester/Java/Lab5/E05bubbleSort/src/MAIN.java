import java.text.*;
import java.util.Date;
import java.util.Scanner;
import java.util.Random;

public class MAIN {
   
    static Foititis [] pinFoitites;
    
    public static void main(String args[]) {
        
        // Ασκηση 2.β: Δημιουργία αντικειμένων 
        pinFoitites = new Foititis[4]; 
        Random rand = new Random();
        float mo0 = 10 * rand.nextFloat();
        DecimalFormat dmo0 = new DecimalFormat("##.#");
        pinFoitites[0] = new Foititis("Γάλλος", 18 , "6912745678" , dmo0.format(mo0) );
        rand = new Random();
        float mo1 = 10 * rand.nextFloat();
        DecimalFormat dmo1 = new DecimalFormat("##.#");
        pinFoitites[1] = new Foititis("Παπουτσής", 18 , "6902704679" , dmo1.format(mo1));
        rand = new Random();
        float mo2 = 10 * rand.nextFloat();
        DecimalFormat dmo2 = new DecimalFormat("##.#");
        pinFoitites[2] = new Foititis("Νούνης", 18, "6995395578" , dmo2.format(mo2));
        rand = new Random();
        float mo3 = 10 * rand.nextFloat();
        DecimalFormat dmo3 = new DecimalFormat("##.#");
        pinFoitites[3] = new Foititis("Κόβες", 18, "6964441668" , dmo3.format(mo3));
        
        // Ασκηση 4
        System.out.println("Prin thn bubble sort");
        emfanisiFoititwn();
        TaxinomisiMethods.bubbleSort(pinFoitites);
        System.out.println("Meta tin bubble sort");
        emfanisiFoititwn();
        System.out.println("Prin tin insertion sort");
        emfanisiFoititwn();
        System.out.println("Meta tin insertion sort");
        TaxinomisiMethods.insertionSort(pinFoitites);
        emfanisiFoititwn();
        System.out.println("Prin tin selection sort");
        emfanisiFoititwn();
        System.out.println("Meta tin selection sort");
        TaxinomisiMethods.selectionSort(pinFoitites);
        emfanisiFoititwn();
        
    }
    
       
    public static void emfanisiFoititwn() {
        for (int i=0; i<pinFoitites.length; i++ )
            System.out.println(pinFoitites[i]);            
    }
    
    
    
    
}
