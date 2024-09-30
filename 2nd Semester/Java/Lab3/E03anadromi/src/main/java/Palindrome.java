
public class Palindrome {
    static int rev(int n, int temp) 
{ 
    // base case 
    if (n == 0) 
        return temp; 
  
    // stores the reverse 
    // of a number 
    temp = (temp * 10) + (n % 10); 
  
    return rev(n / 10, temp); 
} 
}
