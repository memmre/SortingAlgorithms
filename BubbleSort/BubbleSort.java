import org.jetbrains.annotations.NotNull;

public class BubbleSort {
    public static void bubbleSort(int @NotNull [] array) {
        for(int i = 0; i < array.length; i++) {
            for(int j = 0; j < array.length - i - 1; j++) {
                if(array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
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
        int[] numberArray = {52, 89, 86, 80, 24, 47, 11, 36};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 52, 89, 86, 80, 24, 47, 11, 36 }
        bubbleSort(numberArray);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 11, 24, 36, 47, 52, 80, 86, 89 }
    }
}