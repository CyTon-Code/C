#include <stdio.h>
#include <math.h>
//#include "string"
void input(char* value, double n){
//    double n;

    printf("%s", value);  // вывод
    scanf("%lf", &n);  // ввод
    printf("\n");  // вывод
}


double_t pow(double_t n, double_t m){
    double_t j = 1;  // изначательное число.
    for (int i = 0; i < m; i++, j*=n);  // разгон к нужному числу.
    return j;  // конечное число.
}

