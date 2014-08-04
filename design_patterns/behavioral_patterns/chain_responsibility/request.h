#ifndef _REQUEST_H_
#define _REQUEST_H_
class Request {
    public:
        Request(double amount) {
            this->amount = amount;
        }

        void set_amount(double amount) {
            this->amount = amount;
        }

        double get_amount() {
           return amount;
        }

    private:
        double amount;
};
#endif
