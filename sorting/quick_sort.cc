#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<int>::iterator It;
typedef vector<int> ivector;

void print (int i) {
    cout << i << " ";
}

int partition (ivector& v, int left, int right) {
    int p = left + (right-left)/2;
    swap(v[p], v[right]);
    int store = left;
    for(int i = left; i < right; ++i) {
        if(v[i] <= v[right]) {
            swap(v[i], v[store]);
            store++;
        }
    }
    swap(v[store], v[right]);
    return store;
}


void quick_sort(ivector& v, int left, int right) {
    if (left < right) {
        int p = partition (v, left, right);
        quick_sort (v, left, p-1);
        quick_sort (v, p+1, right);
    }
}

int main(int argc, char** argv) {
    ivector v;

    for (int i = 0; i < 10; ++i) {
        v.push_back (rand() % 10);
    }

    for_each (v.begin(), v.end(), print); cout << endl;

    quick_sort (v, 0, v.size()-1);

    for_each (v.begin(), v.end(), print); cout << endl;

    return 0; 
}
