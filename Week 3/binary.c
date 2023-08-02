#include <stdio.h>

int binarySearch(int arr[], int target, int length) {
    int left = 0;
    int right = length - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            printf("%d found in n=%d position.", target, middle);
            return 0;
        }
        else if (arr[middle] < target) {
            left = middle + 1;
        }
        else if (arr[middle] > target) {
            right = middle - 1;
        }
    }
    printf("Target not found OR no data.");
    return -1;
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int target = 8;
    binarySearch(numbers, target, length);
    return 0;
}