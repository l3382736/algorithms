#ifndef _SWITH_H_
#define _SWITH_H_

#include <vector>
#include "command.h"

class Switch {
    public:
        void store_execute(Command *cmd) {
            history.push_back(cmd);
            cmd->execute();
        }

    private:
        std::vector<Command*> history;
};
#endif
