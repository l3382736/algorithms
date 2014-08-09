import java.util.ArrayList;

class GraphicComposite implements Graphic {
    private ArrayList<Graphic> graphics;

    public GraphicComposite() {
        graphics = new ArrayList<Graphic>();
    }
    
    public void add(Graphic g) {
        graphics.add(g);
    }

    public void print() {
        for(Graphic g : graphics) {
            g.print();
        }
    }
}
