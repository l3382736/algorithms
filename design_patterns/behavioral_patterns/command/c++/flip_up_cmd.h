#ifndef _FLIP_UP_CMD_H_
#define _FLIP_UP_CMD_H_

#include "command.h"
#include "light.h"

class FlipUpCommand : public Command {
    public:
        FlipUpCommand(Light *light) {
            this->light = light;
        }

        void execute() {
            light->turnOn();
        }

    private:
        Light *light;
};

#endif
