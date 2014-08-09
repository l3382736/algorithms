class TestComposite {
    public static void main(String args[]) {
       GraphicComposite composite = new GraphicComposite(); 
       composite.add(new Circle());
       composite.add(new Square());
       composite.add(new Ellipse());
       composite.print();
    }
}
