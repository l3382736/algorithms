class EmailLogger extends Logger {

    EmailLogger(String message) {
        this.message = message;
    }

    public void process() {
        System.out.println("Email: " + message);
        if(next != null) {
            next.process();
        }
    }
}
