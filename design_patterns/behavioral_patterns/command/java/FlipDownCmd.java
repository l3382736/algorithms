public class FlipDownCmd implements Command {
    private Light light;

    public FlipDownCmd(Light light) {
        this.light = light;
    }

    public void execute() {
        light.turnOff();
    }
}
