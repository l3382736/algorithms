#include "composite_graphic.h"
#include "circle.h"
#include "square.h"
#include "ellipse.h"

int main(int argc, char **argv) {
    CompositeGraphic composite;
    composite.add(new Circle());
    composite.add(new Square());
    composite.add(new Ellipse());
    composite.print();
    return 0;
}
