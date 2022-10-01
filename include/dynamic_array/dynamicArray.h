#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>

template <typename T>
class Container {
    private:
        T* arr;
        unsigned long size;
        unsigned long trueSize;
        unsigned int increment;
        bool frozen;

        /**
         * @brief 
         * 
         */
        void enlarge();

    public:
        /**
         * @brief Construct a new Container object
         * 
         */
        Container();
        /**
         * @brief Construct a new Container object
         * 
         * @param size Initial size of dynamic array inside the class
         */
        Container(const unsigned long &size);
        /**
         * @brief Destroy the Container object
         * 
         */
        ~Container();

        /**
         * @brief retruns first element of the array
         * 
         * @return T Typename
         */
        T begin() const;
        /**
         * @brief returs last element of the array
         * 
         * @return T Typename
         */
        T end() const;

        /**
         * @brief 
         * 
         * @param long 
         * @return T& 
         */
        T& operator[](unsigned const long);

        /**
         * @brief Get the Size object
         * 
         * @return unsigned long 
         */
        unsigned long getSize();

        /**
         * @brief Get the True Size object
         * 
         * @return unsigned long 
         */
        unsigned long getTrueSize();

        /**
         * @brief Get the Increment object
         * 
         * @return unsigned int 
         */
        unsigned int getIncrement();

        /**
         * @brief Set the Increment object
         * 
         * @param newIncrement 
         */
        void setIncrement(unsigned int newIncrement);

        /**
         * @brief Removes excess array capacity
         * 
         */
        void freeze();

        /**
         * @brief Adds element to the back of the array
         * 
         * @param element element to be inserted
         */
        void addBack(T element);

        /**
         * @brief Prints the array to the console
         * 
         */
        void print();

        void sort();
};

#endif