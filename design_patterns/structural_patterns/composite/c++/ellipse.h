#ifndef _ELLIPSE_H_
#define _ELLIPSE_H_

#include "graphic.h"
#include <iostream>

class Ellipse : public Graphic {
    public:
        void print() {
            std::cout << "ellipse" << std::endl;
        }
};
#endif
