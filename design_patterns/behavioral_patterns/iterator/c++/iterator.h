#ifndef _ITERATOR_H
#define _ITERATOR_H
template <class T>
class Iterator {
    public:
        virtual bool has_next() = 0;
        virtual T next() = 0;
};
#endif
