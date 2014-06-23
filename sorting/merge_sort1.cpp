#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

typedef vector<int>::iterator It;
typedef vector<int> Vector;

/*void merge_sort(It begin, It end) {
  size_t len = end-begin;
  if(len <= 1) return;
  size_t middle = len/2;
  merge_sort(begin, begin+middle);
  merge_sort(begin+middle, end);
  inplace_merge(begin, begin+middle, end);
  }*/

void print (int i) 
{
    cout << i << " ";
}

void merge_sort(Vector& v, int l, int r) 
{
    if (l>=r) return;
    int middle = l + (r-l) / 2;
    merge_sort (v, l, middle);
    merge_sort (v, middle+1, r);

    Vector t (v.begin(), v.end());
    int i = l, k = l, j = middle + 1;
    while (i <= middle && j <= r) {
        if (t[i] < t[j]) {
            v[k] = t[i];
            ++i;
        } else {
            v[k] = t[j];
            ++j;
        }
        k++;
    }

    while (i <= middle) {
        v[k] = t[i];
        ++i;
        ++k;
    }
}

int main()  {
    vector<int> v, v2, v3;
    for(int i = 10; i >= 1; --i) { v.push_back(i); }
    for(int i = 10; i >= 1; --i) { v2.push_back(rand()%100); }
    for(int i = 20; i >= 1; --i) { v3.push_back(rand()%150); }


    merge_sort(v, 0, v.size()-1);
    for_each(v.begin(), v.end(), print); 
    cout << endl;

    merge_sort(v2, 0, v2.size()-1);
    for_each(v2.begin(), v2.end(), print); cout << endl;

    merge_sort(v3, 0, v3.size()-1);
    for_each(v3.begin(), v3.end(), print); cout << endl;

    return 0;
}
