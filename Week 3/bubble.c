#include <stdio.h>

int bubbleSort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0; k < length; k++) {
        printf("%d", arr[k]);
    }
    return 0;
}

int main(void) {
    int numbers[] = {5, 8, 3, 9, 0, 2, 5, 6, 7, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    bubbleSort(numbers, length);
    return 0;
}

