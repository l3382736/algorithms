#ifndef _CONCRETE_SUBJECT_H_
#define _CONCRETE_SUBJECT_H_

#include "subject.h"

class ConcreteSubject : public Subject {

    public: 
        void add(Observer *o) {
            observers.push_back(o);
        }

        void detach(Observer *o) {
            for(int i = 0; i < observers.size(); ++i) {
                if(observers[i] == o) {
                    observers.erase(observers.begin() + i);
                    break;
                }
            }
        }

        void notify() {
            for(auto o : observers) {
                o->update();
            }
        } 
};

#endif
