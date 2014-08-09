class Wheel implements Element {
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
