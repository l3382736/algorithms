#ifndef _PRINT_VISITOR_H_
#define _PRINT_VISITOR_H_

#include "visitor.h"

class PrintVisitor : public Visitor {
    public:
        void visit(Car *car) {
            std::cout << "car" << std::endl;
        }
        void visit(Wheel *wheel) {
            std::cout << "wheel" << std::endl;
        }
        void visit(Body *body) {
            std::cout << "body" << std::endl;
        }
        void visit(Engine *engine) {
            std::cout << "engine" << std::endl;
        }
};

#endif
