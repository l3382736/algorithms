#ifndef _EDGE_H_
#define _EDGE_H_

class Vertex;

class Edge {
    public:
        Edge(Vertex *target, double weight) {
            this->target = target;
            this->weight = weight;
        }

        Vertex *get_target() {
            return target;
        }
        
        double get_weight() {
            return weight;
        }
    private:
        Vertex *target;
        double weight;
};
#endif
