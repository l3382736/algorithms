#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "graphic.h"
#include <iostream>

class Square : public Graphic {
    public:
        void print() {
            std::cout << "square" << std::endl;
            }
};
#endif
