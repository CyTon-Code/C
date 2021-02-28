#include <stdio.h>
#include <math.h>
#include "cmath.h"

//from math import exp, cos, tan, pow

//double
void input(char* value, double n){
//    double n;

    printf("%s", value);  // вывод
    scanf("%lf", &n);  // ввод
    printf("\n");  // вывод

//    return n;
}


double_t pow(double_t n, double_t m){
    double_t j = 1;  // изначательное число.
    for (int i = 0; i < m; i++, j*=n);  // разгон к нужному числу.
    return j;  // конечное число.
}


int main(void)  {

    double x = 0, y = 0, z = 0,
    i = 0.30,
    n = 0.60,
    e = 0.01,
    p = 0.05,
    a = 0;  // block исчислений - ініціалізація.

    while (i < n)  {  // block цикла.

        // x = a * exp(3 * i);
        x = a * pow(e, 3 * i);

        y = 2 * x * cos(i);  // блок исчислений

        if (x <= 1)  {  // Розвилка Так
            z = (pow(1 + 2 * y, 2)) * cos(i);
        }
        else   {  // Розвилка Ні
            z = (pow(7.2 * x, 2)) * tan(i);
        }

        i += p;  // block исчислений.

        printf("%lf\n", z);  // блок ввода/вывода
    }
    return 0;
}
