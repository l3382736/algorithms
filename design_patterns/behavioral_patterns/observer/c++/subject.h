#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "observer.h"
#include <vector>

class Subject {
    public:
        virtual void add(Observer *o) = 0;
        virtual void detach(Observer *o) = 0;
        virtual void notify() = 0;
    protected:
        std::vector<Observer *> observers;
};
#endif
