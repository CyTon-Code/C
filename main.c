#ifndef stdio_h
#define stdio_h

#include <stdio.h>

#endif // stdio_h

#include "line_search/library.c"
#include "bool/library.c"


struct List {
    int length;
    int *array;

    int (*search_line)(int n, const int a[], int key); // функция поиска элемента.
};

boolean_type check(void) {
//    printf("Hello, World!\n");

    int key = 2, n = 4;
    int list[] = {1, 1, 1, 2};

    struct List obj = {n, list, (int (*)(int, const int *, int)) LinSearch};
    unsigned int search = obj.search_line(obj.length, obj.array, key);

    if (search >= obj.length) {
        printf("NULL");
        return false;
    }
    printf("> key[%d];\n%d", search, key);
    return true;
}

int main() {
    convert_test();
    return 0;
}