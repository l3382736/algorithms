#ifndef _LIST_ITERATOR_H_
#define _LIST_ITERATOR_H_

#include "iterator.h"
#include "node.h"
#include <stdexcept>

template <class T>
class ListIterator : public Iterator<T> {
    public:
        ListIterator(node<T> *root) : root(root) { }

       bool has_next() {
           if(root == nullptr) return false;
           return (root->next != nullptr);
       } 

       T next() {
           if(root != nullptr) {
               T data = root->data;
               root = root->next;
               return data;
           }
        throw std::invalid_argument("Empty list");
       }

    private:
       node<T> *root;
};
#endif
