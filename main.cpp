#include <iostream>
#include "dynamicArray.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    Container<float> temp(5);
    for(int i = 0; i < 5; i++) {
        temp[i] = i;
    }
    temp.print();
    return 0;
}
