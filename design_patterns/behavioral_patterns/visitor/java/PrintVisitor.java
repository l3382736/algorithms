class PrintVisitor implements Visitor {

    public void visit(Car car) {
        System.out.println("Car");
    }

    public void visit(Wheel wheel) {
        System.out.println("Wheel");
    }

    public void visit(Body body) {
        System.out.println("Body");
    }

    public void visit(Engine engine) {
        System.out.println("Engine");
    }
}
