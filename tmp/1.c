#include <stdio.h>
#include <math.h>

double input(char* value){
    double n;

    printf("%s", value);
    scanf("%lf", &n);
    printf("\n");

    return n;
}

int main(void){
    double x, y, a, b, c;

    x = input("x = ");
    a = input("a = ");
    c = input("c = ");

    c = log(c);
    b = c + pow(x, 2);
    a = a*b;
    y = pow(sin(a*x), 3) + b /  pow(cos(x), 2);
    
    printf("%lf\n", y);
    return 0;
}
