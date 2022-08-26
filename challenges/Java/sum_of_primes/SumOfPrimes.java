
/**
 * How to run using command line:
 * >> cd challenges/Java/sum_of_primes
 * >> javac SumOfPrimes.java  
 * >> java SumOfPrimes
 */

import java.util.Scanner;

public class SumOfPrimes {

  public static boolean isPrime(int n) {
    if (n < 2) {
      return false;
    } else if (n == 2) {
      return true;
    } else if (n % 2 == 0) {
      return false;
    }

    for (int i = 3; i < Math.sqrt(n); i += 2) {
      if (n % i == 0)
        return false;
    }
    return true;
  }

  public static int findSumOfPrimes(int n) {

    if (n < 2)
      return 0;
    if (isPrime(n))
      return n + findSumOfPrimes(n - 1);
    else
      return 0 + findSumOfPrimes(n - 1);
  }

  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter number:");
    int n = scanner.nextInt();
    int result = findSumOfPrimes(n);
    System.out.println(result);
  }

}