#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *numbers;
    int counter = 0;
    int length;

    printf("Please input the number of elements (more than 0 and less than 10):");
    scanf("%d", &length);
    if (length <= 0 || length > 10) {
        printf("Invalid input for the number of elements.\n");
        return 1;
    }

    numbers = (int*)malloc(length * sizeof(int));

    printf("Please enter the elements one by one:");
    while (counter < length) {
        scanf("%d", &numbers[counter]);
        counter++;
    }

    int desiredNumber;
    printf("Tell me what number you would like to find:");
    scanf("%d", &desiredNumber);
    for (counter = 0; counter < length; counter++) {
        if (numbers[counter] == desiredNumber) {
            printf("%i was found in the n=%i position.\n", desiredNumber, counter);
            free(numbers);
            return 0;
        }
        else {
            counter++;
        }
    }
    printf("%d not found.\n", desiredNumber);
    return 1;
}