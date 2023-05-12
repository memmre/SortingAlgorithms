import org.jetbrains.annotations.NotNull;

public class SelectionSort {
    public static void selectionSort(int @NotNull [] array) {
        for(int i = 0; i < array.length; i++) {
            int minimumIndex = i;
            for(int j = i; j < array.length; j++) {
                if(array[j] < array[minimumIndex]) {
                    minimumIndex = j;
                }
            }
            int temp = array[i];
            array[i] = array[minimumIndex];
            array[minimumIndex] = temp;
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
        int[] numberArray = {6, 62, 14, 96, 69, 67, 32, 85};
        printArray("UNSORTED ARRAY", numberArray);
        // UNSORTED ARRAY = { 6, 62, 14, 96, 69, 67, 32, 85 }
        selectionSort(numberArray);
        printArray("SORTED ARRAY", numberArray);
        // SORTED ARRAY = { 6, 14, 32, 62, 67, 69, 85, 96 }
    }
}
