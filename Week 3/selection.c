#include <stdio.h>

int main(void)
{
    int numbers[] = {3, 8, 4, 2, 9, 1, 7, 6, 10, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++)
    {
        int temp = numbers[i];
        int lowest = i;
        for (int j = i + 1; j < length; j++)
        {
            if (numbers[j] < numbers[lowest])
            {
                lowest = j;
            }
        }
        numbers[i] = numbers[lowest];
        numbers[lowest] = temp;
    }
    printf("Sorted array result: ");
    for (int k = 0; k < length; k++) {
        printf("%d", numbers[k]);
    }
    return 0;
}