#ifndef _RIFFLE_H_
#define _RIFFLE_H_
#include <random>
#include <vector>
#include <algorithm>
class Riffle {
    public:
        void shuffle (size_t num, std::vector<int> &deck) {
            // Random device. Provides access to a machine's 
            // native source of randomness.
            std::random_device rd;
            // Pseudo random number generating algorithm.
            std::mt19937 rng (rd());
            std::uniform_int_distribution<int> dist (0, 
                    deck.size()-1);
            while (num-- && deck.size()) {
                std::vector<int> tmp (deck.size());
                auto pivot = dist (rng);
                int i = 0;
                for (; i < pivot && (i+pivot) < deck.size(); ++i) {
                    tmp[2*i] = deck[i];
                    tmp[2*i+1] = deck[pivot+i];
                }
                for (auto j = 0; j + i < pivot; ++j) {
                    tmp[2*i+j] = deck[j+i];
                }
                for (auto j = 0; j + i + pivot < deck.size(); ++j) {
                    tmp[2*i+j] = deck[pivot+i+j];
                }
                deck.assign (tmp.begin(), tmp.end()); 
                std::rotate (deck.begin(), deck.begin() + dist(rng),
                        deck.end());
            }
        }
};
#endif
