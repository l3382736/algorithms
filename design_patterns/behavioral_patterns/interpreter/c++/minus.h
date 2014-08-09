#ifndef MINUS_H
#define MINUS_H

#include "expression.h"

class Minus : public Expression {
    public:
        Minus(Expression *left, Expression *right) {
            this->left = left;
            this->right = right;
        }

        int interpret(Dictionary variables) {
            return left->interpret(variables) - right->interpret(variables);
        }
        ~Minus() {
            //if(left != nullptr) delete left;
            //if(right != nullptr) delete right;
        }
    private:
        Expression *left;
        Expression *right;
};
#endif
