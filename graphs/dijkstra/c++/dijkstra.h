#ifndef _DIJKSTRA_H_
#define _DIJKSTRA_H_
#include <vector>
#include <queue>
#include <algorithm>
#include "vertex.h"
#include "edge.h"

class Dijkstra {
    private:
        struct compareVertices {
            bool operator()(Vertex *p1, Vertex *p2) {
                return p1->get_distance() < p2->get_distance();
            }
        };

    public:
        void compute(Vertex *v1) {
            std::priority_queue<Vertex*, 
                std::vector<Vertex*>,
                compareVertices> pq;
            v1->set_distance(0);
            pq.push(v1);
            while (!pq.empty()) {
                Vertex *u = pq.top(); pq.pop();
                for(Edge *e : u->get_edges()) {
                    Vertex *v = e->get_target();
                    double weight = e->get_weight();
                    double distU = u->get_distance() + weight;
                    if (distU < v->get_distance()) {
                        remove(pq, v);
                        v->set_distance(distU);
                        v->set_previous(u);
                        pq.push(v);
                    }
                }
            }
        }

        std::vector<Vertex*> shortest_path(Vertex *target) {
            std::vector<Vertex*> path;
            for(Vertex *i = target; i != nullptr; 
                    i = i->get_previous()) {
                path.push_back(i);
            }
            std::reverse(path.begin(), path.end());
            return path;
        }

    private:
        void remove (std::priority_queue<Vertex*, 
                std::vector<Vertex*>, compareVertices> &pq, 
                Vertex *target) {
            std::vector<Vertex*> buffer;
            while (!pq.empty()) {
                Vertex *tmp = pq.top();
                pq.pop();
                if (tmp != target) {
                    buffer.push_back(tmp);
                }
            }
            for(int i = 0; i < buffer.size(); ++i) {
                pq.push(buffer[i]);
            }
        }
};
#endif
