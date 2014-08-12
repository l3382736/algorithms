#ifndef _ADJ_LIST_H_
#define _ADJ_LIST_H_

#include <map>
#include <list>

class AdjacencyList {
    public:
        AdjacencyList();
        ~AdjacencyList();
        void add_edge(int x, int y);
        std::list<int>* get_neighbors(int n);
        void bfs(int node);
        void dfs(int node);
        void print();

    private:
        std::map<int, 
            std::list<int>*> adj_list;
};

#endif
