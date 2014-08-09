#ifndef PLUS_H
#define PLUS_H

#include "expression.h"

class Plus : public Expression {
    public:
        Plus(Expression *left, Expression *right) {
            this->left = left;
            this->right = right;
        }

        int interpret(Dictionary variables) {
            return left->interpret(variables) + right->interpret(variables);
        }

        ~Plus() {
            //if(left != nullptr) delete left;
            //if(right != nullptr) delete right;
        }

    private:
        Expression *left;
        Expression *right;
};
#endif
