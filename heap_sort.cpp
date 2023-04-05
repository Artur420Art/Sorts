#include <iostream>

void heapify(int* arr, int size, int index);
void heap_sort(int* arr, int size);

int main() {
    int arr[5] = {4,1,7,21,3};
    heap_sort(arr, 5);
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }
}

void heapify(int* arr, int size, int index) {
    int largest = index;
    int l = index * 2 + 1;
    int r = index * 2 + 2;

    if (l < size && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < size && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != index) {
        std::swap(arr[index], arr[largest]);

        heapify(arr, size, largest);
    }
}

void heap_sort(int* arr, int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    for (int i = size - 1; i >=0; i--) {
        std::swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}