#include <iostream>
#include "vertex.h"
#include "edge.h"
#include "dijkstra.h"

using namespace std;

int main (int argc, char **argv) {
    Vertex v1("v1");
    Vertex v2("v2");
    Vertex v3("v3");
    Vertex v4("v4");

    v1.add_edge(new Edge(&v2, 10));
    v1.add_edge(new Edge(&v3, 20));
    v2.add_edge(new Edge(&v4, 50));
    v3.add_edge(new Edge(&v4, 10));

    Dijkstra dijkstra;
    dijkstra.compute(&v1);

    for(Vertex* v : dijkstra.shortest_path(&v4)) {
        cout << v->get_name() << " ";
    }
    cout << endl;
    return 0;
}
