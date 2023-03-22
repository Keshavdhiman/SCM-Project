#include <stdio.h>

void swap(int* a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 8, b = 10;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}