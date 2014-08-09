public class TestChainResponsibility {
    public static void main(String args[]) {
        Logger chain = new EmailLogger("email sent");
        Logger stdout = new StdoutLogger("stdout output");
        Logger stderr = new StderrLogger("stderr output");
        chain.setSuccessor(stdout);
        stdout.setSuccessor(stderr);
        chain.process();
    }
}
