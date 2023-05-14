#include <stdio.h>

void heapify(int array[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if(left < n && array[left] > array[largest]) largest = left;
    if(right < n && array[right] > array[largest]) largest = right;
    if(largest != i) {
        int temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        heapify(array, n, largest);
    }
}

void heapSort(int array[], int size) {
    for(int i = size / 2 - 1; i >= 0; i--) heapify(array, size, i);
    for(int i = size - 1; i > 0; i--) {
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify(array, i, 0);
    }
}

void printArray(char arrayName[], int array[], int arraySize) {
    printf("%s = { ", arrayName);
    for(int i = 0; i < arraySize; i++) {
        printf("%d", array[i]);
        if(i != arraySize - 1) printf(", ");
    }
    printf(" }\n");
}

int main() {
    int numberArray[] = {42, 32, 13, 23, 63, 9, 70, 34};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 42, 32, 13, 23, 63, 9, 70, 34 }
    heapSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 9, 13, 23, 32, 34, 42, 63, 70 }
    return 0;
}

