#include <iostream>
void swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}
int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void qucik_sort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        qucik_sort(arr, low, pi-1);
        qucik_sort(arr, pi + 1, high);

    }
}

int main() {
 
}