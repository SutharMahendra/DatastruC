public class mergeSort {
    public static void main(String[] args) {
        int[] arr = { 2, 4, 1, 4, 5, 7, 8, 3, 10, 14, 13, 12 };

        mergeSortarr(arr, 0, arr.length - 1);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    private static void mergeSortarr(int[] arr, int start, int end) {

        if (start < end) {
            int mid = (start + end) / 2;
            mergeSortarr(arr, start, mid);
            mergeSortarr(arr, mid + 1, end);
            merge(arr, start, mid, end);
        }

    }

    private static void merge(int[] arr, int start, int mid, int end) {
        int left = start;
        int right = mid + 1;

        int[] temp = new int[end - start + 1];
        int pivot = 0;

        while (left <= mid && right <= end) {
            if (arr[left] < arr[right]) {
                temp[pivot] = arr[left];
                pivot++;
                left++;
            } else {
                temp[pivot] = arr[right];
                pivot++;
                right++;
            }
        }
        while (left <= mid) {
            temp[pivot] = arr[left];
            pivot++;
            left++;
        }
        while (right <= end) {
            temp[pivot] = arr[right];
            pivot++;
            right++;
        }
        for (int i = 0; i < temp.length; i++) {
            arr[start + i] = temp[i];

        }

    }

}