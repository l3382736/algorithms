#include "list.h"
#include "iterator.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    List<int> list;
    list.add(10);
    list.add(11);
    list.add(12);
    list.add(13);
    list.add(14);
    list.add(20);
    Iterator<int> *it = list.create_iterator();
    while(it->has_next()) {
        cout << it->next() << " " << endl;
    }
    delete it;
    return 0;
}
