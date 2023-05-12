#include <stdio.h>

void bubbleSort(int array[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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
    int numberArray[] = {93, 77, 36, 2, 54, 6, 28, 5};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 93, 77, 36, 2, 54, 6, 28, 5 }
    bubbleSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 2, 5, 6, 28, 36, 54, 77, 93 }
    return 0;
}

