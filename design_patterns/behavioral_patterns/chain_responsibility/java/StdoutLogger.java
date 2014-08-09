class StdoutLogger extends Logger {

    StdoutLogger(String message) {
        this.message = message;
    }

    public void process() {
        System.out.println("Stdout: " + message);
        if(next != null) {
            next.process();
        }
    }
}
