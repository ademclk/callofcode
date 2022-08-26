import java.util.Scanner;

public class FizzBuzz {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Requesting from user the (n) number of integers
        System.out.println("Enter the number: ");
        // Reading the integer from the users input
        int n = scanner.nextInt();
        System.out.println("The Fizz, Buzz and FizzBuzz numbers are: ");
        scanner.close();
        
        // Iterating from 1 to n
        for (int i = 1; i <= n; i++) {
            // If the integer is divisible by both 3 and 5 then we print the integer followed by "FizzBuzz" word
            if (i % 3 == 0 && i % 5 == 0) {
                System.out.print(i + " -> ");
                System.out.println("FizzBuzz");
                // Else-If the integer is divisible by 3 then we print the integer followed by "Fizz" word
            } else if (i % 3 == 0) {
                System.out.print(i + " -> ");
                System.out.println("Fizz");
                // Else-If the integer is divisible by 5 then we print the integer followed by "Buzz" word
            } else if (i % 5 == 0) {
                System.out.print(i + " -> ");
                System.out.println("Buzz");
            }
        }
    }
}