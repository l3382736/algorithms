#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<int>::iterator It;
typedef vector<int> ivector;

void print (int i) 
{
    cout << i << " ";
}

void insert (ivector& v, int pos, int val)
{
    int i = pos-1;
    while (i >= 0 && v[i] > val)
    {
        v[i+1] = v[i];
        --i;
    }
    v[i+1] = val;
}

void insertion (ivector& v)
{
    for (int i = 1; i < v.size(); ++i)
    {
        insert (v, i, v[i]);
    }
}

int main(int argc, char** argv) 
{
    ivector v;

    for (int i = 0; i < 15; ++i) {
        v.push_back (rand() % 100);
    }

    for_each (v.begin(), v.end(), print); cout << endl;

    insertion (v);

    for_each (v.begin(), v.end(), print); cout << endl;

    return 0; 
}
