#include <iostream>
void selection_srt(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[min], arr[i]);
    }
}

int main() {

}