#ifndef _COLLECTION_H_
#define  _COLLECTION_H_

#include "iterator.h"
template <class T>
class Collection {
    public:
        virtual Iterator<T>* create_iterator() = 0;
};
#endif
