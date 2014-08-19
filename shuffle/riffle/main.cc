#include "riffle.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void print_deck (vector<int> &deck) {
    for (auto card : deck) {
        cout << card << " ";
    }
    cout << '\n';
}

int main (int argc, char **argv) {
    vector<int> deck (52);
    for(int i = 0; i < 52; ++i) {
        deck[i] = i + 1;
    } 
    print_deck (deck);
    Riffle riffle;
    riffle.shuffle (7, deck);
    print_deck (deck);
    //sort(deck.begin(), deck.end());
    //print_deck (deck);
    return 0;
}
