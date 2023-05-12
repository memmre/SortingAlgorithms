#include <stdio.h>

void insertionSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = i; j > 0; j--) {
            if(array[j] < array[j - 1]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
            else break;
        }
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
    int numberArray[] = {9, 100, 2, 28, 25, 1, 48, 14};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 9, 100, 2, 28, 25, 1, 48, 14 }
    insertionSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 1, 2, 9, 14, 25, 28, 48, 100 }
    return 0;
}
