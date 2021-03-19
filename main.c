#include "main.h"

int main(int arg_len, String arg_text[]) {
    for (int i = 0; i < arg_len; i++) {
        printf("%s ", arg_text[i]);
    }
    printf("\n");

    int a;
    scanf("%d", &a);//TODO learn to strtol
    _if (1 == a) {
        a += 1;
    } _elif (2 == a) {
        a += 2;
    } _elif (3 == a) {
        a += 3;
    } else
        a += 4;

    printf("%d", a);
    return 0;
}