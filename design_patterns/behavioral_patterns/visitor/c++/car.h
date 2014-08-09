#ifndef _CAR_H_
#define _CAR_H_

#include "element.h"
#include <vector>

class Car : public Element {
    public:
        void accept(Visitor *visitor) {
            for(auto e : elements) {
                e->accept(visitor);
            }
        }

        void add(Element *e) {
            elements.push_back(e);
        }

        ~Car() {
            for(auto e : elements) {
                delete e;
            }
        }
    private:
        std::vector<Element*> elements; 
};

#endif
