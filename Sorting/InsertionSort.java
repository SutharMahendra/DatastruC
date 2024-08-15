public class InsertionSort {
    public static void main(String[] args) {
        int[] arr = { 2, 4, 1, 4, 5, 7, 8, 3, 10, 14, 13, 12 };
        int n = arr.length;

        insertionSort(arr, n);

        for (int nums : arr) {
            System.out.println(nums);
        }
    }

    public static void insertionSort(int[] arr, int n) {

        for (int i = 1; i < n; i++) {
            int j = i;

            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
    }

}
