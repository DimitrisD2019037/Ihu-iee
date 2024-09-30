
public class Factorial {
    
 public static int factorial(int n) {
        System.out.println(n + "....");
        if (n==1)
            return 1;
        int result = n * (factorial(n-1));
        System.out.println(n+", res " + result);
        return result;
    }
}