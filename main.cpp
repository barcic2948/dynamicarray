#include <iostream>
#include "dynamicArray.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    Container<float> temp;
    for(int i = 0; i < 5; i++) {
        temp.addBack(i);
    }
    temp.print();
}
