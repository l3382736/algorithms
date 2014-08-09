import java.util.ArrayList;

class Car implements Element {
    private ArrayList<Element> parts;

    public Car() {
        parts = new ArrayList<Element>();
    }

    public void add(Element e) {
        parts.add(e);
    }

    public void accept(Visitor visitor) {
        for(Element e : parts) {
            e.accept(visitor);
        }
    }
}
