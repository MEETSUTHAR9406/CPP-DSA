#include <iostream>

int main() {

    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    // 1. Star Pattern

    // for(int i = 0; i < num; i++) {
    //     for(int j = 0; j <= i; j++) {
    //         std::cout << "*  ";
    //     }
    //     std::cout << std::endl;
    // }

    // 2. Inverted Star Pattern

    // for(int i = 0; i < num; i++) {
    //     for(int j = i; j < num; j++) {
    //         std::cout << "* ";
    //     }
    //     std::cout << std::endl;
    // }

    // 3. Half Pyramid Pattern

    char ch = 'A';

    // for(int i = 0; i < num; i++) {
    //     for(int j = 0; j <= i; j++) {
    //         std::cout << ch << " ";
    //         ch++;
    //     }
    //     std::cout << std::endl;
    // }

    // 4. Hollow Rectangle

    for(int i = 1; i <= num; i++) {
        std::cout << "* ";
        for(int j = 1; j < num; j++) {
            if(i == 1 || i == num) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}