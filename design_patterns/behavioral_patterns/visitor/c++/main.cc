#include "print_visitor.h"
#include "car.h"
#include "wheel.h"
#include "body.h"
#include "engine.h"

int main (int argc, char **argv) {
    PrintVisitor visitor;
    Car car;
    car.add(new Engine());
    car.add(new Body());
    car.add(new Wheel());
    car.accept(&visitor);
    return 0;
}
