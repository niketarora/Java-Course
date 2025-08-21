import java.util.Scanner;

class Distance {
    private float feet;
    private float inches;

    public Distance() {
        this.feet = 0;
        this.inches = 0;
    }

    public Distance(float feet, float inches) {
        this.feet = feet;
        this.inches = inches;
    }

    public float getFeet() { return feet; }
    public float getInches() { return inches; }

    public void setFeet(float feet) { this.feet = feet; }
    public void setInches(float inches) { this.inches = inches; }

    public void setDistance(float feet, float inches) {
        this.feet = feet;
        this.inches = inches;
    }

    public void sum(Distance d) {
        float totalFeet = this.feet + d.feet;
        float totalInches = this.inches + d.inches;

        if (totalInches >= 12) {
            totalFeet += (int)(totalInches / 12);
            totalInches = totalInches % 12;
        }

        System.out.println("Sum of distances: " + totalFeet + " feet " + totalInches + " inches");
    }
}

public class DistanceApplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first distance:");
        System.out.print("Feet: ");
        float feet1 = sc.nextFloat();
        System.out.print("Inches: ");
        float inch1 = sc.nextFloat();

        System.out.println("Enter second distance:");
        System.out.print("Feet: ");
        float feet2 = sc.nextFloat();
        System.out.print("Inches: ");
        float inch2 = sc.nextFloat();

        Distance d1 = new Distance(feet1, inch1);
        Distance d2 = new Distance(feet2, inch2);

        d1.sum(d2);

        sc.close();
    }
}
