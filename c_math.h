#include <stdio.h>
#include <math.h>

void input(const char* value, double n){
    printf("%s", value);  // вывод
    scanf("%lf", &n);  // ввод
    printf("\n");  // вывод
}

long long E = 2.718281828459045;
//double El = 2.7182818284590452353602874713526624977572;

double POW(long long n, double m)
{
    double j = 1;  // изначательное число.
    for (int i = 0; i <= m; i++, j*=n);  // разгон к нужному числу.
    return j;  // конечное число.
}
double EXP(double m)
{
    return POW(E, m);  // конечное число.
}
