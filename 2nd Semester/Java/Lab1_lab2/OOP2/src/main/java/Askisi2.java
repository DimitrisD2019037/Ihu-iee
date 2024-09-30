
public class Askisi2 {

    public static void main(String[] args) {

        int[] thisIsAnIntArray = {10, 90, 35, 23, 86};
        System.out.println("1ος τρόπος : ");
        for (int i = 0; i < thisIsAnIntArray.length; i++) {
            System.out.println(thisIsAnIntArray[i]);
        }
        System.out.println("2ος τρόπος: ");
        for (int n : thisIsAnIntArray) {
            System.out.println(n);
        }

        for (int n : thisIsAnIntArray) {
            if (n % 2 == 0) {
                System.out.println("Ο αριθμός: " + n + " ειναι ζυγός");
            }
        }

        int size = thisIsAnIntArray.length;
        System.out.println("Το μέγεθος του πίνακα είναι: " + size);

        int sum = 0;
        for (int n : thisIsAnIntArray) {
            sum = sum + n;
        }
        System.out.println("Το άθροισμα των αριθμών του πίνακα είναι: " + sum);

        int min = thisIsAnIntArray[0];
        int max = thisIsAnIntArray[0];
        for (int n : thisIsAnIntArray) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
        System.out.println("Ο μικρότερος αριθμός του πίνακα είναι ο: " + min);
        System.out.println("Ο μεγαλύτερος αριθμός του πίνακα είναι ο: " + max);
    }
    
}
