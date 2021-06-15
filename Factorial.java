public class Main
{
 
  // Factorial function
  static int f(int n)
  {
 
    // base condition
    if (n == 0 || n == 1)
      return 1; // or n
 
    // Recursive condition
    else
      return n * f(n - 1);
  }
 
  
  public static void main(String[] args)
  {
    int n = 5;
    System.out.println("factorial of " + n + " will be: " + f(n));
  }
}
