#include <cmath>
#include <iostream>

int main() {

    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num <= 1) {
        std::cout << "Enter a valid number (num >= 2)";
        return 0;
    }

    for (int i = 2; i <= num; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}