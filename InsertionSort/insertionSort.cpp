#include <iostream>

void insertionSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = i; j > 0; j--) {
            if(array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
            else break;
        }
    }
}

void printArray(char arrayName[], int array[], int arraySize) {
    std::cout << arrayName << " = { ";
    for(int i = 0; i < arraySize; i++) {
        std::cout << array[i];
        if(i != arraySize - 1) std::cout << ", ";
    }
    std::cout << " }" << std::endl;
}

int main() {
    int numberArray[] = {96, 61, 27, 54, 83, 77, 32, 92};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 96, 61, 27, 54, 83, 77, 32, 92 }
    insertionSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 27, 32, 54, 61, 77, 83, 92, 96 }
    return 0;
}
