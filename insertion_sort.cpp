void insertion_sort(int* arr, int size) {
    int key;
    int j = 0;
    for (int i = 0; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (arr[j] >= key && j > 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

        }
        arr[j + 1] = key;
    }
}