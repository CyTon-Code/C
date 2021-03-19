#include <stdio.h>
#include "line_search/library.c"

#define false  (char) 0
#define true  (char) 1

struct List {
    int length;
    int *array;

    int (*search_line)(int n, const int a[], int key); // функция поиска элемента.
};

char check(void) {
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
    return 0;
}