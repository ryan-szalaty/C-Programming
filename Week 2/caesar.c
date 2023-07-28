#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Please enter KEY and MESSAGE. Separate them with a single space.");
        return 1;
    }
    int key = atoi(argv[1]);
    int length = strlen(argv[2]);
    for (int i = 0; i < length; i++) {
        if (argv[2][i] >= 'A' && argv[2][i] <= 'Z') {
            argv[2][i] = 'A' + (argv[2][i] - 'A' + key) % 26;
        }
        else if (argv[2][i] >= 'a' && argv[2][i] <= 'z'){
            argv[2][i] = 'a' + (argv[2][i] - 'a' + key) % 26;
        }
    }
    printf("%s", argv[2]);
    return 0;
}