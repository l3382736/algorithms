#ifndef VARIABLE_H
#define VARIABLE_H

#include "expression.h"
#include <string>

class Variable : public Expression {
    public:
        Variable(std::string name) {
            this->name = name;
        }
        int interpret(Dictionary variables) {
            if(variables.find(name) == variables.end()) {
                return 0;
            }
            return variables[name]->interpret(variables);
        }
        ~Variable() {}
    private:
        std::string name;
};
#endif
