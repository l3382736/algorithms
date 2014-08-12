#include "adjancy_list.h"

int main(int argc, char **argv) {
    AdjacencyList graph;
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(0, 3);
    graph.add_edge(0, 4);
    graph.add_edge(1, 4);
    graph.add_edge(2, 4);
    graph.add_edge(4, 10);
    //graph.bfs(1);
    graph.dfs(1);
    return 0;
}
