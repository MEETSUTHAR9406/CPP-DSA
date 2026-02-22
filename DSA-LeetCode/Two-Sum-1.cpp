#include <iostream>

int main() {

    int arr[] = {14, 38, 2, 45, 27, 19, 31, 8, 42, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        std::cout << i << " : " << arr[i] << std::endl;
    }

    int target;
    std::cout << "Enter your target sum: ";
    std::cin >> target;
    std::cout << std::endl;

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                std::cout << "Target " << target << " found at indexes: " << std::endl;
                std::cout << "arr[" << i << "]: " << arr[i] << "\n" << "arr[" << j << "]: " << arr[j] << std::endl;
                std::cout << std::endl;
            }
        }
    }

    return 0;
}