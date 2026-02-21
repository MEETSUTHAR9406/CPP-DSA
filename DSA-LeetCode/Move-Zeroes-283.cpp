// METHOD - 2

#include <iostream>

int main() {

    int arr[] = {1, 0, 5, 0, 0, 12, 45, 0, 8, 0, 99, 10, 0, 0, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[k] = arr[i];
            k++;
        }
    }

    while(k < size) {
        arr[k++] = 0;
    }

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}