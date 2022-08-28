public class StringReverse {
    public static void main(String[] args) {
        String reversedExampleString = reverseString("Pflaumenkuchen");
        System.out.println(reversedExampleString);
    }

    static String reverseString(String stringToReverse) {
        String reversedString = "";

        for (char letter : stringToReverse.toCharArray()) {
            reversedString = letter + reversedString;
        }

        return reversedString;
    }
}
