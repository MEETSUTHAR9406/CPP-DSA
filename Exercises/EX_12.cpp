#include <iostream>
// using namespace std;

int main() {

    int num, ans = 0, digit;

    std::cout << "Enter any three digit number: ";
    std::cin >> num;

    if (num < 0 || (num < 100 || num > 999)) {
        std::cout << "Enter a three digit positive number.";
        return 0;
    } else {
        int temp = num;

        while (num > 0) {
            digit = num % 10;
            ans = ans + (digit * digit * digit);
            num /= 10;
        }

        if (ans == temp) {
            std::cout << "The number " << temp << " is an Armstrong number.";
        } else {
            std::cout << "The number " << temp << " is NOT an Armstrong number.";
        }
    }

    return 0;
}