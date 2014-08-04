#ifndef _MANAGER_POWER_H_
#define _MANAGER_POWER_H_

#include "purchase_power.h"

class ManagerPower : public PurchasePower {
    public:
        ManagerPower(PurchasePower *successor = nullptr) {
           set_successor(successor); 
        }

        bool process_request(Request& request) {
            std::cout << "MANAGER ANALYSING REQUEST" << std::endl;
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

        ~ManagerPower() {}

    private:
        double BASE = 50;
};
#endif
