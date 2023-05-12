#include <stdio.h>

void merge(int array[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) array[k++] = left[i++];
        else array[k++] = right[j++];
    }
    while (i < leftSize) array[k++] = left[i++];
    while (j < rightSize) array[k++] = right[j++];
}

void mergeSort(int array[], int arraySize) {
    if (arraySize < 2) return;
    int mid = arraySize / 2, left[mid], right[arraySize - mid];
    for (int i = 0; i < mid; i++) left[i] = array[i];
    for (int i = mid; i < arraySize; i++) right[i - mid] = array[i];
    mergeSort(left, mid);
    mergeSort(right, arraySize - mid);
    merge(array, left, mid, right, arraySize - mid);
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
    int numberArray[] = {53, 63, 68, 72, 54, 67, 59, 98};
    int arraySize = sizeof(numberArray) / sizeof(int);
    printArray("UNSORTED ARRAY", numberArray, arraySize);
    // UNSORTED ARRAY = { 53, 63, 68, 72, 54, 67, 59, 98 }
    mergeSort(numberArray, arraySize);
    printArray("SORTED ARRAY", numberArray, arraySize);
    // SORTED ARRAY = { 53, 54, 59, 63, 67, 68, 72, 98 }
    return 0;
}

