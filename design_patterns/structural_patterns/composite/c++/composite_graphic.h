#ifndef _COMPOSITE_GRAPHIC_H_
#define _COMPOSITE_GRAPHIC_H_
#include "graphic.h"
#include <vector>

class CompositeGraphic : public Graphic {
    public:

        void print() {
            for(auto g : graphics) {
                g->print();
            }
        }

        void add(Graphic *g) {
            graphics.push_back(g);
        }

        ~CompositeGraphic() {
            for(auto g : graphics) {
                delete g;
            }
        }

    private:
        std::vector<Graphic*> graphics;
};

#endif
