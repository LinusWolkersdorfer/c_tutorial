#include <stdio.h>

// TODO: write a programm that makes use of (multiple) inputs

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}

int main(int argc, char *argv[]) {
    int a = 4;
    int b = 2;
    char *operation;

    if(strcmp(operation, "add") == 0) {
        printf("%d + %d = %d\n", a, b, add(a, b));
        return 0;
    }
    if(strcmp(operation, "sub") == 0) {
        printf("%d - %d = %d\n", a, b, sub(a, b));
        return 0;
    }
    if(strcmp(operation, "mul") == 0) {
        printf("%d * %d = %d\n", a, b, mul(a, b));
        return 0;
    }
    if(strcmp(operation, "div") == 0) {
        printf("%d / %d = %d\n", a, b, div(a, b));
        return 0;
    }

    return 0;
}