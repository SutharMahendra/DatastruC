public class selectionSort {
    public static void main(String[] args) {
        int[] arr = { 2, 1, 5, 9, 4, 3, 11, 20, 24, 22, 10 };

        selectionSortArray(arr);
        for (int num : arr) {
            System.out.println(num);
        }
    }

    public static void selectionSortArray(int[] arr) {

        for (int i = 0; i < arr.length; i++) {
            int min = i;
            for (int j = i + 1; j < arr.length; j++) {

                if (arr[min] > arr[j]) {
                    min = j;
                }
            }
            if (min != i) {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }

        }
    }
}
