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


void couting(ivector& v) {
    int max = *(max_element(v.begin(), v.end()));
    int *count = new int[max+1]();

    for(int val : v) {
        count[val]++;
    }
    
    int idx = 0;
    for(int i = 0; i < max; ++i) {
        while(count[i] > 0) {
            v[idx++] = i;
            count[i]--;
        }
    }

    delete[] count;
    //v.swap(b);
}

int main(int argc, char** argv) {
    ivector v;

    for (int i = 0; i < 10; ++i) {
        v.push_back (rand() % 10);
    }

    for_each (v.begin(), v.end(), print); cout << endl;

    couting (v);

    for_each (v.begin(), v.end(), print); cout << endl;

    return 0; 
}
