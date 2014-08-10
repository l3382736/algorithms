#ifndef _CARETAKER_H_
#define _CARETAKER_H_

#include "memento.h"
#include <vector>

class Caretaker {
    public:
        void add(Memento *memento) {
            states.push_back(memento);
        }

        Memento* get_state(unsigned int index) {
            if (index >= 0 && index < states.size())
                return states[index];
            return nullptr;
        }

        ~Caretaker() {
            for(auto s : states) {
                delete s;
            }
        }
    private:
        std::vector<Memento*> states;
};
#endif
