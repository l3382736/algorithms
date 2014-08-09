#ifndef _FLIP_DOWN_CMD_H_
#define _FLIP_DOWN_CMD_H_

#include "command.h"
#include "light.h"

class FlipDownCommand : public Command {
    public:
        FlipDownCommand(Light *light) {
            this->light = light;
        }

        void execute() {
            light->turnOff();
        }

    private:
        Light *light;
};

#endif
