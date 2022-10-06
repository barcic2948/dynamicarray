#include <iostream>
#include "dynamicArray.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    Container<int> temp;
    for(int i = 0; i < 10; i++) {
        temp.addBack(i);
        std::cout << temp.getTrueSize() << std::endl;
        std::cout << temp.getSize() << std::endl;
        temp.print();
    }
    
}
