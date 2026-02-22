#include <iostream>
#include <cmath>

int main() {

    int num, digit, sum = 0;

    std::cout << "Enter number: ";
    std::cin >> num;

    int temp = num;
    int n = 0;
    int countTemp = num;

    while (countTemp > 0) {
        countTemp /= 10;
        n++;
    }

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + std::round(std::pow(digit, n));
        temp /= 10;
    }

    if (sum == num) {
        std::cout << num << " is an Armstrong number.";
    } else {
        std::cout << num << " is NOT an Armstrong number.";
    }

    return 0;
}