#include "Array.hpp"

int main() {
    Array<int> numbers(5);

    for (unsigned int i = 0; i < numbers.size(); i++) {
        numbers[i] = i * 10;
    }

    std::cout << "Array elements: ";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;


    Array<int> copyNumbers = numbers;
    std::cout << "Copied Array: ";
    for (unsigned int i = 0; i < copyNumbers.size(); i++) {
        std::cout << copyNumbers[i] << " ";
    }
    std::cout << std::endl;

    try {
        std::cout << numbers[10] << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
