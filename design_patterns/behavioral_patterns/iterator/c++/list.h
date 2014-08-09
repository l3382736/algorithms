#ifndef _LIST_H_
#define _LIST_H_

#include "node.h"
#include "collection.h"
#include "list_iterator.h"

template<class T>
class List : public Collection<T> {
    public:
        List() { root = nullptr; }

        void add(T data) {
            if(root == nullptr) root = new node<T>(data);
            else {
                node<T> *i = root;
                while(i->next != nullptr) {
                    i = i->next;
                }
                i->next = new node<T>(data);
            }
        }

        void remove(T data) {
            node<T> *target = root;
            if(root->data == data) {
                root = root->next;
                delete target;
                return;
            } 
            target = root->next;
            node<T> *prev = root;
            while(target != nullptr && target->data != data) {
                prev = target;
                target = target->next;
            }
            if(target != nullptr) {
                prev->next = target->next;
                delete target;
            }
        }

       Iterator<T>* create_iterator() {
           return new ListIterator<T>(root);
       }

       ~List() {
           node<T> *tmp;
           while(root) {
               tmp = root;
               root = root->next;
               delete tmp;
           }
       }
    private:
        node<T> *root;
};
#endif
