#include "request.h"
#include "manager_power.h"
#include "director_power.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    Request request(99.50);
    DirectorPower director;
    ManagerPower manager(&director);
    cout << (manager.process_request(request) ? "APPROVED" : "DENIED") << " " 
        << request.get_amount() << endl;
    return 0;
}
