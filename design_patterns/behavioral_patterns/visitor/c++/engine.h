#ifndef _ENGINE_H_
#define _ENGINE_H_

#include "element.h"

class Engine : public Element {
    public:
        void accept(Visitor *visitor) {
            visitor->visit(this);
        }
};

#endif
