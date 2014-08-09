#ifndef _CONCRETE_OBSERVER_H_
#define _CONCRETE_OBSERVER_H_

#include "observer.h"
#include <iostream>
#include <string>

class ConcreteObserver : public Observer {
    public:
        ConcreteObserver(std::string message) : Observer(message) {}

        void update() {
            std::cout << message << std::endl;
        }
};

#endif
