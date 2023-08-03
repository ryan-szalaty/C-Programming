#include <stdio.h>

void draw(int n) {
    if (n <= 0) {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++) {
        printf("#");
    }

    printf("\n");
}

int get_height(void) {
    int height;
    printf("Input the height of your block (no more than 10): ");
    scanf("%d", &height);
    return height;
}

int main(void) {
    int height = get_height();
    draw(height);
    return 0;
}

