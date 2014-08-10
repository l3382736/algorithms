#include "caretaker.h"
#include "originator.h"

int main(int argc, char **argv) {
    Originator originator;
    originator.set_state("state 1");
    originator.set_state("state 2");
    Caretaker caretaker;
    caretaker.add(originator.save_memento());
    originator.set_state("state 3");
    caretaker.add(originator.save_memento());
    originator.restore_memento(caretaker.get_state(0));
    return 0;
}
