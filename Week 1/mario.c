#include <stdio.h>

int main(void) {
    int n;
    //Get size of the block
    do {
        printf("Size:\n");
        scanf("%d", &n);
    }
    while (n < 1);
    //Initialize column
    for (int i = 0; i < n; i++) {
        //Print row
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        //Start new column that is still within i
        printf("\n");
    }
    return 0;
}