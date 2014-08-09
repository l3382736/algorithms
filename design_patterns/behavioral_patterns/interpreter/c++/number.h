#ifndef NUMBER_H
#define NUMBER_H

#include "expression.h"

class Number : public Expression {
    public:
        Number(int number) {
           this->number = number; 
        }
        int interpret(Dictionary variables) {
            return number;
        }
        ~Number() {
        }
    private:
        int number;
};
#endif
