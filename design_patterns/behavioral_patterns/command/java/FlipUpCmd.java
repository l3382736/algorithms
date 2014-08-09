public class FlipUpCmd implements Command {
    private Light light;

    public FlipUpCmd(Light light) {
        this.light = light;
    }

    public void execute() {
        light.turnOn();
    }
}
