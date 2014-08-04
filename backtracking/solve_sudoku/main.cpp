#include <iostream>
#include "board.h"
using namespace std;

int main(int argc, char **argv) {
    unsigned int size, val;
    cin >> size;
    Board board(size);
    for(unsigned int i = 0; i < size; ++i) {
        for(unsigned int j = 0; j < size; ++j) {
            cin >> val;
            board.set_square(i, j, val);
        }
    }
    board.print();
    cout << "SOLVED ? " << (board.solve() ? "YES" : "NO") << "\n";
    board.print();
    return 0;
}
