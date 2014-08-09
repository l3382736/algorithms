#ifndef _BODY_H_
#define _BODY_H_

#include "element.h"

class Body : public Element {
    public:
        void accept(Visitor *visitor) {
            visitor->visit(this);
        }
};

#endif
