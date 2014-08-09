#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "dictionary.h"

class Expression {
    public:
        virtual int interpret(Dictionary variables) = 0;
};
#endif
