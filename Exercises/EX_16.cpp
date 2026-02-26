#include <iostream>

int main() {

    int num;
    
    std::cout << "Enter the number: ";
    std::cin >> num;

    int n1 = 0, n2 = 1;
    int temp;

    for(int i = 0; i < num; i++) {
        std::cout << n1 << " ";
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }

    return 0;
}