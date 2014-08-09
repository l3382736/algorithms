#ifndef _NODE_H_
#define _NODE_H_
template<class T>
struct node {
   T data;
   node<T> *next; 
   explicit node(T data) : 
       data(data), next(nullptr) {
       }
};
#endif
