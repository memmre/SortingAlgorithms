#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high], i = low - 1;
    for(int j = low; j <= high - 1; j++) {
        if(array[j] <= pivot) swap(&array[++i], &array[j]);
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if(low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
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
    int numberArray[] = {76, 30, 18, 33, 69, 18, 43, 52};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 76, 30, 18, 33, 69, 18, 43, 52 }
    quickSort(numberArray, 0, arraySize - 1);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 18, 18, 30, 33, 43, 52, 69, 76 }
    return 0;
}

