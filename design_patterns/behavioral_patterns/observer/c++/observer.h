#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>

class Observer {

    public:
        Observer(std::string message) {
            this->message = message;
        }

        virtual void update() = 0;

    protected:
        std::string message;
};
#endif
