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


void selection(ivector& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        int k = i;
        for (int j = i+1; j < v.size(); ++j) {
            if (v[j] < v[k]) {
                k = j;
            }
        }
        if (k != i) {
            swap (v[k], v[i]);
        }
    }
}

int main(int argc, char** argv) 
{
    ivector v;

    for (int i = 0; i < 15; ++i) {
        v.push_back (rand() % 100);
    }

    for_each (v.begin(), v.end(), print); cout << endl;

    selection (v);

    for_each (v.begin(), v.end(), print); cout << endl;

    return 0; 
}
