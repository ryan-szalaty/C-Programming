#include <stdio.h>

int main(void) {
    float scores[3];
    for (int i = 0; i < 3; i++) {
        printf("Please input Score #%i: ", i + 1);
        scanf("%f", &scores[i]);
    }
    printf("%.2f", (scores[0] + scores[1] + scores[2]) / 3);
}