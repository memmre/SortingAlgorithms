#include <stdio.h>

void selectionSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        int minimumIndex = i;
        for(int j = i; j < arraySize; j++) {
            if(array[j] < array[minimumIndex]) {
                minimumIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minimumIndex];
        array[minimumIndex] = temp;
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
    int numberArray[] = {55, 33, 36, 87, 40, 7, 49, 4};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 55, 33, 36, 87, 40, 7, 49, 4 }
    selectionSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 4, 7, 33, 36, 40, 49, 55, 87 }
    return 0;
}

