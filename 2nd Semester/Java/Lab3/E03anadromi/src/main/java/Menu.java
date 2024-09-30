import java.util.Scanner;

public class Menu {

   
    public static void main(String[] args) {
        
        int n =0;
        do
        {
        System.out.println("Enter the integer for check:1=Παραγοντικό, 2=Ακολουθία Fibonacci, 3=Παλίνδρομο, 4=Πρώτοι αριθμοί, 5=Πύργοι του Ανόϊ, 0=Εξοδος");
        Scanner scanner = new Scanner(System.in);
        n = Integer.parseInt(scanner.nextLine());
        }
        while (n<0 && n>5);
       
        if (n==0){
            System.out.println("End of programm");
        }
        else if (n ==1){
            System.out.println("Dose arithmo gia na brethei to paragontiko tou:");
            Scanner scanner = new Scanner(System.in);
            int x1 = Integer.parseInt(scanner.nextLine());
            int f = Factorial.factorial(x1);
            System.out.println("To paragontiko tou " + x1  + " isoute me  " + f);
        }
        else if (n == 2){ 
            System.out.println("Dose arithmo gia na brethei h akoulouthia fibonnaci:");
            Scanner scanner = new Scanner(System.in);
            int x2 = Integer.parseInt(scanner.nextLine());
            int fib = Fibonacci.fibo(x2);
            System.out.println(fib);
        }
        else if (n == 3){
            System.out.println("Dose arithmo gia elenxo palindromou arithmou: ");
            Scanner scanner = new Scanner(System.in);
            int x3 = Integer.parseInt(scanner.nextLine());
            int temp = Palindrome.rev(x3, 0); 
    
            if (temp == x3) 
                System.out.println("O "+ x3 + " einai palindromos arithmos"); 
            else
                System.out.println("O "+ x3 + " den einai palindromos arithmos" ); 
        }
        else if (n == 4){
            System.out.println("Dose arithmo gia elenxo an einai protos i oxi: ");
            Scanner scanner = new Scanner(System.in);
            int x4 = Integer.parseInt(scanner.nextLine());
            if (primeNumbers.isPrime(x4, 2))  
                System.out.println("O arithmos " +x4 + " einai protos arithmos"); 
            else 
                System.out.println("O arithmos " +x4 + " den einai protos arithmos"); 
        } 
        else {
            int x5 = 4; // Number of disks 
            towersOfAnoi.towerOfHanoi(x5, 'A', 'C', 'B'); // A, B and C are names of rods 
        }
           
    }
        
        
}
    
   
