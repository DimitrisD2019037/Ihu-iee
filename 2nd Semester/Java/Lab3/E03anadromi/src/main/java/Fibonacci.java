
public class Fibonacci {
    
    public static int fibo (int num) {
        if (num == 1 || num == 2)
            return 1;
        else
            return fibo(num-1)+fibo(num-2);
    }
}
