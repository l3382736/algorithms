#include "concrete_observer.h"
#include "concrete_subject.h"
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string message = "updated";
    string message2 = "updated2";
    ConcreteObserver observer (message);
    ConcreteObserver observer2 (message2);
    ConcreteSubject subject;
    subject.add(&observer);
    subject.add(&observer2);
    subject.notify();
    return 0;
}
