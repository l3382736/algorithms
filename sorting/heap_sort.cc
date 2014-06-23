#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

typedef vector<int>::iterator It;
typedef vector<int> ivector;

void print (int i) {
    cout << i << " ";
}

void heapify(ivector& v, int idx, int max) {
    int left = 2*idx+1;
    int right = 2*idx+2;
    int largest;
    if(left < max && v[left] > v[idx]) {
       largest = left;
    } else {
        largest = idx;
    }
    if(right < max && v[right] > v[largest]) {
        largest = right;
    }
    if(largest != idx) {
        swap(v[idx], v[largest]);
        heapify(v, largest, max);
    }
}

void build_heap(ivector& v) {
    for(int i = floor(v.size()/2)-1; i >= 0; --i) {
        heapify(v,i,v.size());
    }
}


void heap_sort(ivector& v) {
    build_heap(v);
    for(int i = v.size()-1; i >= 1; --i) {
        swap(v[0], v[i]);
        heapify(v, 0, i);
    }
}

int main(int argc, char** argv) 
{
    ivector v;

    for (int i = 0; i < 15; ++i) {
        v.push_back (rand() % 100);
    }

    for_each (v.begin(), v.end(), print); cout << endl;

    heap_sort (v);

    for_each (v.begin(), v.end(), print); cout << endl;

    return 0; 
}
