import java.util.Scanner;

public class CenteredCharacterRhombus {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the size for the rhombus: ");
        int n = s.nextInt();
        
        // UPPER TRIANGLE
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
                char letter = (char) (64 + j);
                System.out.print(letter);
            }
            for(int j=i; j>1; j--){
                char letter = (char) (63 + j);
                System.out.print(letter);
            }
            System.out.println();
        }

        // LOWER TRIANGLE
        for(int i=1; i<n; i++){
            for(int j=1; j<=i; j++){
                System.out.print(" ");
            }
            for(int j=1; j<=n-i; j++){
                char letter = (char) (64 + j);
                System.out.print(letter);
            }
            for(int j=n-i-1; j>=1; j--){
                char letter = (char) (64 + j);
                System.out.print(letter);
            }
            System.out.println();
        }
    }
}