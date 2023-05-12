#include <iostream>

void bubbleSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
            }
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
    int numberArray[] = {54, 17, 25, 7, 64, 62, 100, 15};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 54, 17, 25, 7, 64, 62, 100, 15 }
    bubbleSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 7, 15, 17, 25, 54, 62, 64, 100 }
    return 0;
}
