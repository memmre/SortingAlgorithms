#include <iostream>

void selectionSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        int minimumIndex = i;
        for(int j = i; j < arraySize; j++) {
            if(array[j] < array[minimumIndex]) {
                minimumIndex = j;
            }
        }
        std::swap(array[i], array[minimumIndex]);
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
    int numberArray[] = {45, 26, 27, 4, 74, 98, 12, 50};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 45, 26, 27, 4, 74, 98, 12, 50 }
    selectionSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 4, 12, 26, 27, 45, 50, 74, 98 }
    return 0;
}
