#ifndef _WHEEL_H_
#define _WHEEL_H_

#include "element.h"

class Wheel : public Element {
    public:
        void accept(Visitor *visitor) {
            visitor->visit(this);
        }
};

#endif
