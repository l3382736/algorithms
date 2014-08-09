public class TestCommand {
    public static void main(String args[]) {
        Light light = new Light();
        Switch invoker = new Switch();
        invoker.add(new FlipUpCmd(light));
        invoker.add(new FlipDownCmd(light));
        invoker.add(new FlipDownCmd(light));
        invoker.add(new FlipUpCmd(light));
        invoker.execute();
    }
}
