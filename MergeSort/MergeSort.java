public class MergeSort {
    public static void merge(int[] array, int[] left, int[] right, int leftSize, int rightSize) {
        int i = 0, j = 0, k = 0;
        while(i < leftSize && j < rightSize) {
            if(left[i] < right[j]) array[k++] = left[i++];
            else array[k++] = right[j++];
        }
        while(i < leftSize) array[k++] = left[i++];
        while(j < rightSize) array[k++] = right[j++];
    }

    public static void mergeSort(int[] array) {
        if(array.length < 2) return;
        int mid = array.length / 2;
        int[] left = new int[mid], right = new int[array.length - mid];
        for(int i = 0; i < mid; i++) left[i] = array[i];
        for(int i = mid; i < array.length; i++) right[i - mid] = array[i];
        mergeSort(left);
        mergeSort(right);
        merge(array, left, right, mid, array.length - mid);
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
        int[] numberArray = {45, 86, 34, 50, 24, 57, 41, 21};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 45, 86, 34, 50, 24, 57, 41, 21 }
        mergeSort(numberArray);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 21, 24, 34, 41, 45, 50, 57, 86 }
    }
}
