#include <iostream>

template<typename T>
void heapify(T array[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if(left < n && array[left] > array[largest]) largest = left;
    if(right < n && array[right] > array[largest]) largest = right;
    if(largest != i) {
        std::swap(array[i], array[largest]);
        heapify(array, n, largest);
    }
}

template<typename T>
void heapSort(T array[], int size) {
    for(int i = size / 2 - 1; i >= 0; i--) heapify(array, size, i);
    for(int i = size - 1; i > 0; i--) {
        std::swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}

template<typename T>
void printArray(char arrayName[], T array[], int arraySize) {
    std::cout << arrayName << " = { ";
    for(int i = 0; i < arraySize; i++) {
        std::cout << array[i];
        if(i != arraySize - 1) std::cout << ", ";
    }
    std::cout << " }" << std::endl;
}

int main() {
    int numberArray[] = {12, 42, 62, 36, 74, 45, 34, 10};
    int arraySize = sizeof(numberArray) / sizeof(numberArray[0]);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 12, 42, 62, 36, 74, 45, 34, 10 }
    heapSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 10, 12, 34, 36, 42, 45, 62, 74 }
    return 0;
}

