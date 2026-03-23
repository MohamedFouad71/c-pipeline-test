#include "stdio.h"
#include "stdlib.h"

int main() {
    // memory leak
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("%d\n", *p);
    free(p);
}