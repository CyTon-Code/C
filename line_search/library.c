#include "library.h"
#include <stdio.h>

unsigned int LinSearch(int n, const int a[], int key) {
    int i = 0;
    while ((i < n) && (a[i] != key))i++;
    return i;
}

void hello(void) {
    printf("Hello, World!\n");
}
