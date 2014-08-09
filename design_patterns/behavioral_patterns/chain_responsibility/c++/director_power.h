#ifndef _DIRECTOR_POWER_H_
#define _DIRECTOR_POWER_H_

#include "purchase_power.h"

class DirectorPower : public PurchasePower {
    public:
        DirectorPower(PurchasePower *successor = nullptr) {
           set_successor(successor); 
        }

        bool process_request(Request& request) {
            std::cout << "DIRECTOR ANALYSING REQUEST" << std::endl;
            if(request.get_amount() > BASE) {
                if(successor != nullptr) {
                    std::cout << "TRANSFERING REQUEST" << std::endl;
                    return successor->process_request(request);
                } else {
                    return false;
                }
            }
            std::cout << "REQUEST APPROVED" << std::endl;
            return true;
        }

    private:
        double BASE = 100;
};
#endif
