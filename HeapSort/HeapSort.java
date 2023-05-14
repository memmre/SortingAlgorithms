public class HeapSort {
    public static void heapify(int[] array, int n, int i) {
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

    public static void heapSort(int[] array) {
        for(int i = array.length / 2 - 1; i >= 0; i--) heapify(array, array.length, i);
        for(int i = array.length - 1; i > 0; i--) {
            int temp = array[0];
            array[0] = array[i];
            array[i] = temp;
            heapify(array, i, 0);
        }
    }

    public static void printArray(String arrayName, int[] array) {
        System.out.print(arrayName + " = { ");
        for(int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
            if(i != array.length - 1) System.out.print(", ");
        }
        System.out.println(" }");
    }

    public static void main(String[] args) {
        int[] numberArray = {84, 64, 35, 56, 39, 72, 90, 42};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 84, 64, 35, 56, 39, 72, 90, 42 }
        heapSort(numberArray);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 35, 39, 42, 56, 64, 72, 84, 90 }
    }
}
