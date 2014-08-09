#ifndef EVALUATOR_H
#define EVALUATOR_H

#include "expression.h"
#include "dictionary.h"
#include "plus.h"
#include "minus.h"
#include "variable.h"
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
class Evaluator : public Expression {
    public:
        Evaluator(std::string expression) {
            std::stack<Expression*> expressionStack;
            std::vector<std::string> tokens; 
            split(expression, tokens);
            Expression *right, *left, *sub;
            for(auto token : tokens) {
                if(token == "+") {
                    right = expressionStack.top(); expressionStack.pop();
                    left = expressionStack.top(); expressionStack.pop();
                    sub = new Plus(left, right);
                    expressionStack.push(sub);
                    exps.push_back(sub);
                } else if(token == "-") {
                    right = expressionStack.top(); expressionStack.pop();
                    left = expressionStack.top(); expressionStack.pop();
                    sub = new Minus(left, right);
                    expressionStack.push(sub);
                    exps.push_back(sub);
                } else {
                    expressionStack.push(new Variable(token));
                    exps.push_back(expressionStack.top());
                }
            }
            syntax_tree = expressionStack.top();
            expressionStack.pop();
        }

        int interpret(Dictionary context) {
            return syntax_tree->interpret(context);
        }
        ~Evaluator(){
            for(Expression* e : exps) {
                delete e;
            }
            //if(syntax_tree != nullptr) delete syntax_tree; 
        }
    private:
        void split(const std::string &s, 
                std::vector<std::string> &elems) {
            std::string token;
            std::string mystring = s;
            while(token != mystring){
                token = mystring.substr(0,mystring.find_first_of(" "));
                mystring = mystring.substr(mystring.find_first_of(" ") + 1);
                elems.push_back(token);
            }
        }

        Expression* syntax_tree;
        std::vector<Expression*> exps;
};
#endif
