import java.util.List;
import java.util.ArrayList;

public class Switch {
    private List<Command> cmds;

    public Switch() {
        cmds = new ArrayList<Command>();
    }

    public void add(Command cmd) {
        cmds.add(cmd);
    }

    public void execute() {
        for(Command c : cmds) {
            c.execute();
        }
    }
}
