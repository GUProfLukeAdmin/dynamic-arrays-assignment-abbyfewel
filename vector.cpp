#include <vector>
#include <iostream>


void part1() {
    std::vector<int> vectorOfInts(50000); // initialize a vector of integers that has 50,000 !!!!!!! wow thats a lot
    int vectorSize = vectorOfInts.size(); // the size
    int vectorCapactiy = vectorOfInts.capacity(); // the capacity 
    std::cout << "After adding elements: Size = " << vectorSize << ", Capacity = " << vectorCapactiy << "\n";
    vectorOfInts.resize(vectorSize/2);
    vectorSize = vectorOfInts.size(); // redo the size
    vectorCapactiy = vectorOfInts.capacity(); // and redo capactiy
    std::cout << "After resizing: Size = " << vectorSize << ", Capacity = " << vectorCapactiy << "\n";
    vectorOfInts.shrink_to_fit();
    vectorSize = vectorOfInts.size(); // redo the size
    vectorCapactiy = vectorOfInts.capacity(); // and redo capactiy
    std::cout << "After shrink_to_fit(): Size = " << vectorSize << ", Capacity = " << vectorCapactiy << "\n";
}

void part2() {
    //TODO: Implement part 2
    std::vector<bool> vectorOfBools(10000); // initialize a vector of booleans that has 10000
    std::vector<char> vectorOfChars(10000); // initialize a vector of chars that has 10000
    size_t boolVectorMem = vectorOfBools.capacity() / 8; 
    size_t charVectorMem = vectorOfChars.capacity() * sizeof(char);
    std::cout << "Memory usage of std::vector<bool>: "<< boolVectorMem << " bytes\n";
    std::cout << "Memory usage of std::vector<char>: "<< charVectorMem << " bytes\n";
}

int main() {
    part1();
    part2();
    return 0;
}