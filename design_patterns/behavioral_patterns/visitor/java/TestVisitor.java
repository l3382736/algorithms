public class TestVisitor {
    public static void main(String args[]) {
        Car car = new Car();
        car.add(new Wheel());
        car.add(new Body());
        car.add(new Engine());
        PrintVisitor visitor = new PrintVisitor();
        car.accept(visitor);
    }
}
