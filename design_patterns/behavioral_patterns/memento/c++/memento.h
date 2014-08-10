#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <string>

class Memento {
    public:

        Memento(std::string state) {
            this->state = state;
        }

        std::string get_state() {
            return this->state;
        }

    private:
        std::string state;
};
#endif
