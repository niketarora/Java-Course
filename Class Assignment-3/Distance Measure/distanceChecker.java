import java.util.Scanner;

public class distanceChecker {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x1 = sc.nextDouble();
        double y1 = sc.nextDouble();
        double x2 = sc.nextDouble();
        double y2 = sc.nextDouble();
        Point p1 = new Point(x1, y1);
        Point p2 = new Point(x2, y2);
        double dist = Point.distance(p1, p2);
        System.out.println(dist);
        sc.close();
    }
}
