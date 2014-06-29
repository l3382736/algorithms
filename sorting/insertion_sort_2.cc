#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;


void print (int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

void insert(int *a, int pos, int val) {
    int i = pos-1;
    while(i >= 0 && a[i] > val) {
        a[i+1] = a[i];
        --i;
    }
    a[i+1] = val;
}

void insertion(int *a, int n) {
    for(int i = 1; i < n; ++i) {
        insert(a, i, a[i]);
    }
}

int main(int argc, char** argv) {
    int *a = new int[SIZE]();

    for (int i = 0; i < SIZE; ++i) {
        a[i] = (rand() % 20);
    }

    print(a, SIZE);

    insertion (a, SIZE);

    print(a, SIZE);

    return 0; 
}
