class StderrLogger extends Logger {

    StderrLogger(String message) {
        this.message = message;
    }

    public void process() {
        System.out.println("Stderr: " + message);
        if(next != null) {
            next.process();
        }
    }
}
