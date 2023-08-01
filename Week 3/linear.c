#include <stdio.h>

int main(void) {
    int numbers[6] = {1, 5, 7, 8, 10};
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == 8) {
            printf("Eight was found in the n=%i position.", counter);
            return 0;
        }
        else {
            counter++;
        }
    }
    printf("Eight not found.");
    return 1;
}