#include <iostream>

template<typename T>
int partition(T array[], int low, int high) {
    T pivot = array[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++) {
        if(array[j] <= pivot) std::swap(array[++i], array[j]);
    }
    std::swap(array[i + 1], array[high]);
    return i + 1;
}

template<typename T>
void quickSort(T array[], int low, int high) {
    if(low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
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
    int numberArray[] = {31, 94, 4, 46, 26, 5, 35, 8};
    int arraySize = sizeof(numberArray) / sizeof(numberArray[0]);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 31, 94, 4, 46, 26, 5, 35, 8 }
    quickSort(numberArray, 0, arraySize - 1);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 4, 5, 8, 26, 31, 35, 46, 94 }
    return 0;
}

