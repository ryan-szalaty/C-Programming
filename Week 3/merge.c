#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int length_left = middle - left + 1;
    int length_right = right - middle;
    
    int L[length_left], R[length_right];
    
    for (i = 0; i < length_left; i++) {
        L[i] = arr[left + i];
    }
    
    for (j = 0; j < length_right; j++) {
        R[j] = arr[middle + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < length_left && j < length_right) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
            k++;
        }
        else {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    
    while (i < length_left) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < length_right) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    int numbers[] = {2, 4, 6, 8, 1, 3, 5, 7, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    merge_sort(numbers, 0, length - 1);
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

