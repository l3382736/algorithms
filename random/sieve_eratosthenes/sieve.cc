#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int N = 20;
    bool *primes = new bool[N+1];
    for(int i = 0; i <= N; ++i) primes[i] = true;
    for(int i = 2; i*i <= N; ++i) {
        if(primes[i]) {
            for(int j = i; i*j <= N; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int count_primes = 0;
    for(int i = 2; i <= N; ++i) {
        if(primes[i]) {
            ++count_primes;
            cout << i << " ";
        }
    }
    cout << '\n';
    cout << count_primes << endl;
    delete[] primes; 
    return 0;
}
