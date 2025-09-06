public class ShapeTest {
    public static void main(String[] args) {
        Shape s1 = new Shape("blue", false);
        System.out.println(s1);

        Circle c1 = new Circle(5.0, "yellow", true);
        System.out.println(c1);
        System.out.println("Circle Area: " + c1.getArea());
        System.out.println("Circle Perimeter: " + c1.getPerimeter());

        Rectangle r1 = new Rectangle(4.0, 6.0, "green", true);
        System.out.println(r1);
        System.out.println("Rectangle Area: " + r1.getArea());
        System.out.println("Rectangle Perimeter: " + r1.getPerimeter());

        Square sq1 = new Square(4.0, "purple", false);
        System.out.println(sq1);
        System.out.println("Square Area: " + sq1.getArea());
        System.out.println("Square Perimeter: " + sq1.getPerimeter());
    }
}
