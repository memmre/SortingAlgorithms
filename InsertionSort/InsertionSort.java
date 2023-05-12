import org.jetbrains.annotations.NotNull;

public class InsertionSort {
    public static void insertionSort(int @NotNull [] array) {
        for(int i = 0; i < array.length; i++) {
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

    public static void printArray(String arrayName, int @NotNull [] array) {
        System.out.print(arrayName + " = { ");
        for(int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
            if(i != array.length - 1) System.out.print(", ");
        }
        System.out.println(" }");
    }

    public static void main(String[] args) {
        int[] numberArray = {92, 8, 73, 55, 22, 12, 37, 83};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 92, 8, 73, 55, 22, 12, 37, 83 }
        insertionSort(numberArray);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 8, 12, 22, 37, 55, 73, 83, 92 }
    }
}
