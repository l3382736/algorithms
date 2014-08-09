#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "graphic.h"
#include <iostream>

class Circle : public Graphic {
    public:
        void print() {
            std::cout << "circle" << std::endl;
            }
};
#endif
