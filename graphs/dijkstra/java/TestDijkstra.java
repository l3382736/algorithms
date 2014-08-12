import java.util.*;

public class TestDijkstra {
    public static void main(String args[]) {
        Vertex v1 = new Vertex ("v1");
        Vertex v2 = new Vertex ("v2");
        Vertex v3 = new Vertex ("v3");
        Vertex v4 = new Vertex ("v4");
        Vertex v5 = new Vertex ("v5");

        v1.addEdge (new Edge(v2, 5.0));
        v1.addEdge (new Edge(v3, 10.0));
        v1.addEdge (new Edge(v4, 8.0));

        v2.addEdge (new Edge(v1, 5.0));
        v2.addEdge (new Edge(v3, 3.0));
        v2.addEdge (new Edge(v5, 7.0));

        v3.addEdge (new Edge(v1, 10.0));
        v3.addEdge (new Edge(v2, 3.0));

        v4.addEdge (new Edge(v1, 8.0));
        v4.addEdge (new Edge(v5, 2.0));

        v5.addEdge (new Edge(v2, 7.0));
        v5.addEdge (new Edge(v4, 2.0));

        Dijkstra.compute(v1);

        Vertex[] vertices = {v1, v2, v3, v4, v5};
        for (Vertex v : vertices) {
            System.out.println("Distance to " + v + ": " 
                    + v.getDistance());
            List<Vertex> path = Dijkstra.getShortestPathTo(v);

            System.out.println("Path: " + path + "\n");
        }
    }
}
