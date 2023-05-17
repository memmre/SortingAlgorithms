#include <iostream>

template<typename T>
void merge(T array[], T left[], int leftSize, T right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    while(i < leftSize && j < rightSize) {
        if(left[i] < right[j]) array[k++] = left[i++];
        else array[k++] = right[j++];
    }
    while(i < leftSize) array[k++] = left[i++];
    while(j < rightSize) array[k++] = right[j++];
}

template<typename T>
void mergeSort(T array[], int arraySize) {
    if(arraySize < 2) return;
    int mid = arraySize / 2;
    T left[mid], right[arraySize - mid];
    for(int i = 0; i < mid; i++) left[i] = array[i];
    for(int i = mid; i < arraySize; i++) right[i - mid] = array[i];
    mergeSort(left, mid);
    mergeSort(right, arraySize - mid);
    merge(array, left, mid, right, arraySize - mid);
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
    int numberArray[] = {87, 74, 89, 76, 50, 71, 21, 90};
    int arraySize = sizeof(numberArray) / sizeof(numberArray[0]);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 87, 74, 89, 76, 50, 71, 21, 90 }
    mergeSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 21, 50, 71, 74, 76, 87, 89, 90 }
    return 0;
}

