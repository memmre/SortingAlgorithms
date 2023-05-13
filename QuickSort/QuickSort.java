public class QuickSort {
    public static int partition(int[] array, int low, int high) {
        int pivot = array[high], i = low - 1;
        for(int j = low; j <= high - 1; j++) {
            if(array[j] <= pivot) {
                int temp = array[++i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        int temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        return i + 1;
    }

    public static void quickSort(int[] array, int low, int high) {
        if(low < high) {
            int pi = partition(array, low, high);
            quickSort(array, low, pi - 1);
            quickSort(array, pi + 1, high);
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
        int[] numberArray = {70, 19, 84, 65, 41, 53, 97, 33};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 70, 19, 84, 65, 41, 53, 97, 33 }
        quickSort(numberArray, 0, numberArray.length - 1);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 19, 33, 41, 53, 65, 70, 84, 97 }
    }
}
