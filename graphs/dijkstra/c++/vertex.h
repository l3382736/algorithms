#ifndef _VERTEX_H_
#define _VERTEX_H_

#include <limits>
#include <vector>
#include <string>
#include "edge.h"

class Vertex  {
    public:

        void add_edge(Edge *e) {
            edges.push_back(e);
        }

        void set_distance(double d) {
            distance = d;
        }

        void set_previous(Vertex *p) {
            previous = p;
        }

        double get_distance() {
            return distance;
        }

        Vertex* get_previous() {
            return previous;
        }

        std::vector<Edge*>& get_edges() {
            return edges;
        }

        std::string get_name() {
            return name;
        }

        Vertex (std::string name) {
            distance = 
                std::numeric_limits<double>::max();
            previous = nullptr;
            this->name = name;
        }

        ~Vertex() {
            for (auto e : edges) {
                if (e != nullptr) delete e;
            }
        }
    private:

        Vertex *previous;
        double distance;
        std::vector<Edge*> edges;
        std::string name;
};
#endif 
