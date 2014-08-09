#ifndef _LIGHT_H_
#define _LIGHT_H_

#include <iostream>

class Light {
    public:
        void turnOn() {
            std::cout << "turn on" << std::endl;
        }

        void turnOff() {
            std::cout << "turn off" << std::endl;
        }
};
#endif
