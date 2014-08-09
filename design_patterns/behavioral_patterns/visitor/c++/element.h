#ifndef _ELEMENT_H_
#define _ELEMENT_H_

#include "visitor.h"

class Element {
    public:
        virtual void accept(Visitor *visitor)  = 0;
};

#endif
