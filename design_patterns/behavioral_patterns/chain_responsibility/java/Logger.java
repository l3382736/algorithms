abstract class Logger {
    
    protected String message;
    protected Logger next;

    public void setSuccessor(Logger successor) {
        this.next = successor;
    }

    public abstract void process();
}
