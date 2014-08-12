import java.util.*;

public class Dijkstra {
    public static void compute(Vertex source) {
        source.setDistance(0.0);
        PriorityQueue<Vertex> pq = new PriorityQueue<Vertex>();
        pq.add(source);

        while (!pq.isEmpty()) {
            Vertex u = pq.poll();
            for (Edge e : u.getEdges()) {
                Vertex v = e.getTarget();
                double weight = e.getWeight();
                double distanceThroughU = u.getDistance() + weight;
                if (distanceThroughU < v.getDistance()) {
                    pq.remove(v);
                    v.setDistance(distanceThroughU);
                    v.setPrevious(u);
                    pq.add(v);
                }
            }
        }
    }

    public static List<Vertex> getShortestPathTo(Vertex target) {
        List<Vertex> path = new ArrayList<Vertex>();
        for (Vertex vertex = target; vertex != null; 
                vertex = vertex.getPrevious()) {
            path.add (vertex);
        }
        Collections.reverse (path);
        return path;
    }
}
