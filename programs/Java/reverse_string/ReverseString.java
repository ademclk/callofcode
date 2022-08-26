import java.util.Scanner;

class ReverseString {
    public static void main(String[] Args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter string to be reversed");

        String input = scan.nextLine();
        scan.close();

        char[] inOrder = input.toCharArray();

        for (int i = inOrder.length - 1; i >= 0; i--)
            System.out.print(inOrder[i]);
    }
}