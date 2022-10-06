#include "dynamicArray.h"

template <typename T>
Container<T>::Container()
    : arr(nullptr)
    , size(0)
    , trueSize(0)
    , increment(2)
    , frozen(false)
    {}

template <typename T>
Container<T>::Container(const unsigned long &size)
    : arr(size > 0 ? new T[size] : nullptr)
    , size(size)
    , trueSize(size)
    , increment(2)
    , frozen(false)
    {}

template <typename T>
Container<T>::~Container() {delete [] arr;}

template <typename T>
T Container<T>::begin() const {return *arr;}
template <typename T>
T Container<T>::end() const {return *(arr+trueSize-1);}

template <typename T>
void Container<T>::enlarge(){
    if(size == trueSize) {
        if(!frozen) {
            size = size ? increment*size : 1;
            T* temp = new T[size];
            for(int i = 0; i < trueSize; i++) {
                *(temp + i) = *(arr + i);
            }
            delete [] arr;
            arr = temp;
        }
    }
}

template <typename T>
T& Container<T>::operator[](unsigned const long index) {
    return *(arr + index);
}

template <typename T>
unsigned long Container<T>::getSize() {return size;}

template <typename T>
unsigned long Container<T>::getTrueSize() {return trueSize;}

template <typename T>
unsigned int Container<T>::getIncrement() {return increment;}

template <typename T>
void Container<T>::setIncrement(unsigned int newIncrement) {
    increment = newIncrement > 1 ? increment : newIncrement;
}

template <typename T>
void Container<T>::freeze() {
    T* temp = new T[trueSize];
    for(int i = 0; i < trueSize; i++) {
        *(temp + i) = *(arr + i);
    }
    arr = temp;
    size = trueSize;
    delete [] temp;
}

template <typename T>
void Container<T>::addBack(T element) {
    enlarge();
    *(arr + trueSize) = element;
    trueSize++;
}

template <typename T>
void Container<T>::print() {
    std::cout << '[';
    for(int i = 0; i < trueSize - 1; i++) {
        std::cout << *(arr + i) << ", ";
    }
    std::cout << end() << ']' << std::endl;
}

template <typename T>
void Container<T>::sort() {
}

template class Container<int>;
template class Container<float>;
template class Container<long>;