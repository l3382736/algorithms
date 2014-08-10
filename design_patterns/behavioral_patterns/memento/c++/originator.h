#ifndef _ORIGINATOR_H_
#define _ORIGINATOR_H_

#include "memento.h"
#include <iostream>
#include <string>

class Originator {
    public:
        void set_state(std::string state) {
            this->state = state;
            std::cout << "state : " << this->state << std::endl;
        }

        Memento* save_memento() {
            return new Memento(state);
        }

        void restore_memento(Memento *memento) {
            this->state = memento->get_state();
            std::cout << "restored state : " << this->state << std::endl;
        }

    private:
        std::string state;
};
#endif
