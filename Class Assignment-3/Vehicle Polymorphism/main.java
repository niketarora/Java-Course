import java.util.*;
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();   // number of tyres
        vehicle v;

        switch (N) {
            case 2:
                v = new bike();
                break;
            case 4:
                v = new car();
                break;
            default:
                v = new vehicle();
        }

        v.display();
    }
}