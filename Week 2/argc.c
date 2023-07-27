#include <stdio.h>

int main(int argc, char* argv[]) { //argc = number of arguments in vector, argv = arguments within vector
    if (argc == 2) {
        printf("Hello, %s", argv[1]);
    } else {
        printf("Hello, User!");
    }
}

//within argv is the actual program name at index 0