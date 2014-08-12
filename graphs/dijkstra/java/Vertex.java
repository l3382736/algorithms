import java.util.*;

public class Vertex implements Comparable<Vertex> {
    private double distance = Double.POSITIVE_INFINITY;
    private final String name;
    private Vertex previous;
    private List<Edge> edges;

    public Vertex(String name) {
        this.name = name;
        edges = new ArrayList<Edge>();
    }

    public void setDistance(double distance) { this.distance = distance; }
    public void setPrevious(Vertex previous) { this.previous = previous; }
    public void addEdge(Edge edge) { edges.add (edge); }

    public String getName() { return name; }
    public double getDistance() { return distance; }
    public Vertex getPrevious() { return previous; }
    public List<Edge> getEdges() { return edges; }
    public int compareTo(Vertex target) { return Double.compare(distance, target.getDistance()); }
    public String toString() { return name; }
}
