#include <iostream>
#include "vector.h" // Make sure the header file name matches

int main() {
    stl::Vector<int> myVector;

    // Test push_back
    for (int i = 0; i < 10; ++i) {
        myVector.push_back(i);
    }

    // Test size and capacity
    std::cout << "Size: " << myVector.size() << std::endl;
    std::cout << "Capacity: " << myVector.capacity() << std::endl;

    // Test front and back
    std::cout << "Front: " << myVector.front() << std::endl;
    std::cout << "Back: " << myVector.back() << std::endl;

    // Test at
    std::cout << "Element at index 5: " << myVector.at(5) << std::endl;

    // Test pop_back
    myVector.pop_back();
    std::cout << "Size after pop_back: " << myVector.size() << std::endl;

    // Test operator[]
    std::cout << "Element at index 3: " << myVector[3] << std::endl;

    // Test modifying elements
    myVector[3] = 100;
    std::cout << "Modified element at index 3: " << myVector[3] << std::endl;

    return 0;
}
