#include <iostream>

int main() {

    int arr[] = {1, 0, 5, 0, 0, 12, 45, 0, 8, 0, 99, 10, 0, 0, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}