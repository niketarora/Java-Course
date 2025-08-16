import java.util.Scanner;

public class VowelOrConsonant {
    public static boolean isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Please enter a single character: ");
        String input = s.nextLine();

        if (input.length() != 1) {
            System.out.println("Error: Please enter a single character.");
            return;
        }

        char ch = input.charAt(0);

        if (isVowel(ch)) {
            System.out.println("It's a Vowel");
        } else {
            System.out.println("It's a Consonant");
        }
    }
}
