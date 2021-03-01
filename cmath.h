#include <stdio.h>
//#include <math.h>
//#include "math.h"
//#include "string"
void input(char* value, double n){
//    double n;

    printf("%s", value);  // вывод
    scanf("%lf", &n);  // ввод
    printf("\n");  // вывод
}


double pow(double n, double m){
    double j = 1;  // изначательное число.
    for (int i = 0; i < m; i++, j*=n);  // разгон к нужному числу.
    return j;  // конечное число.
}


////////////////////////////////////////////////////////////////////////////////
/// Base of natural log:
///  \f[ e \f]
//double_t E= 2.71828182845904523536;
double E = 2.718281828459045;
