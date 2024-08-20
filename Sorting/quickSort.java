public class quickSort {
    public static void main(String[] args) {

        int arr[] = { 9, 3, 7, 6, 2, 8, 5 };
        quickSortArray(arr, 0, arr.length - 1);

        for (int num : arr) {
            System.out.println(num);
        }
    }

    public static void quickSortArray(int[] arr, int low, int high) {

        if (low < high) {
            int pi = partition(arr, low, high);
            quickSortArray(arr, low, pi - 1);
            quickSortArray(arr, pi + 1, high);
        }
    }

    public static int partition(int[] arr, int low, int high) {

        int j = low - 1;
        int pivot = high;
        for (int i = low; i < high; i++) {

            if (arr[i] < arr[pivot]) {
                j++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }

        int temp1 = arr[j + 1];
        arr[j + 1] = arr[pivot];
        arr[pivot] = temp1;

        return j + 1;

    }
}
