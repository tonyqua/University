//
// Created by Anton on 04.04.2024.
//
#include <iostream>
#include <cmath>

int main() {
    int num;
    std::cout << "Введіть десяткове число: ";
    std::cin >> num;

    int size = log2(num) + 1;
    int* arr = new int[size];

    for(int i = size - 1; i >= 0; i--) {
        arr[i] = num % 2;
        num /= 2;
    }

    std::cout << "Двійкове число: ";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i];
    }

    delete[] arr;
    return 0;
}
