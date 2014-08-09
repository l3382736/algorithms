#ifndef _VISITOR_H_
#define _VISITOR_H_

#include <iostream>
class Car;
class Wheel;
class Body;
class Engine;

class Visitor {
    public:
        virtual void visit(Car *car) = 0;
        virtual void visit(Wheel *wheel) = 0;
        virtual void visit(Body *body) = 0;
        virtual void visit(Engine *engine) = 0;
}
;
#endif
