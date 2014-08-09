#include <string>
#include <iostream>
#include "evaluator.h"
#include "dictionary.h"
#include "expression.h"
#include "number.h"
using namespace std;

int main(int argc, char **argv) {
    string expression("w x y - +");
    Evaluator sentence(expression);
    Dictionary dictionary;
    Number *w = new Number(5);
    Number *x = new Number(10);
    Number *y = new Number(42);
    dictionary.insert(pair<string, Expression*>("w", w));
    dictionary.insert(pair<string, Expression*>("x", x));
    dictionary.insert(pair<string, Expression*>("y", y));
    int result = sentence.interpret(dictionary);
    cout << result << endl;
    delete x;
    delete y;
    delete w;
    return 0;
}
