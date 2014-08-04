#ifndef _PURCHASE_POWER_H_
#define _PURCHASE_POWER_H_

#include "request.h"
#include <iostream>

class PurchasePower {
    public:
        virtual void set_successor(PurchasePower *successor) {
            this->successor = successor;
        }

        virtual bool process_request(Request& request) = 0;

        virtual PurchasePower* get_successor() {
            return successor;
        }

        virtual ~PurchasePower() {}

    protected:
        PurchasePower* successor;
};
#endif
