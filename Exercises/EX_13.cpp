#include <iostream>

int main() {

    int num, fact = 1;

    std::cout << "Enter number to find factorial: ";
    std::cin >> num;

    if(num < 0) {
        std::cout << "Please enter a positive number";
        return 0;
    }

    for(int i = 1; i <= num; i++) {
        fact *= i;
    }

    std::cout << "Factorial of " << num << " is " << fact << std::endl;

    return 0;
}