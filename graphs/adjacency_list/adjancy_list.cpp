#include <map>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include "adjancy_list.h"

using namespace std;

AdjacencyList::AdjacencyList() { }

AdjacencyList::~AdjacencyList() { 
    for(auto it = adj_list.begin(); 
        it != adj_list.end(); ++it) {
        delete it->second;
    }
}

void AdjacencyList::add_edge(int x, int y) {
    map<int,list<int>*>::iterator it = adj_list.find(x);
    if (it == adj_list.end()) {
        adj_list[x] = new list<int>();
    }
    adj_list[x]->push_back(y);
}

list<int>* AdjacencyList::get_neighbors(int n) {
    return adj_list[n];
}

void AdjacencyList::print() {
    for(auto it = adj_list.begin(); 
        it != adj_list.end(); ++it) {
        cout << it->first << ": ";
        for(auto it2 = it->second->begin(); 
            it2 != it->second->end(); ++it2) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
}

void AdjacencyList::bfs(int node) {
    set<int> visited;
    queue<int> queued;
    queued.push(node);
    visited.insert(node);
    while(!queued.empty()) {
        int current = queued.front();
        cout << current << endl;
        queued.pop();
        if(adj_list[current] == nullptr) continue; // no neighbors.
        for(auto it = adj_list[current]->begin(); 
            it != adj_list[current]->end(); ++it) {
            if(visited.find(*it) == visited.end()) {
                queued.push(*it);
                visited.insert(*it);
            }
        }
    }
}

void AdjacencyList::dfs(int node) {
    set<int> visited;
    stack<pair<int, list<int>::iterator>> stacked;
    stacked.push({node,adj_list[node]->begin()});
    visited.insert(node);
    while(!stacked.empty()) {
        int current = stacked.top().first;
        cout << current << endl;
        if(adj_list[current] == nullptr) continue;
        auto& neighbor = stacked.top().second;
        if(neighbor != adj_list[current]->end()) {
            int next = *neighbor;
            ++neighbor;
            if(visited.find(next) == visited.end()) {
                stacked.push({next, adj_list[next]->begin()});
                visited.insert(next);
            }
            continue;
        }
        stacked.pop();
    }
}
