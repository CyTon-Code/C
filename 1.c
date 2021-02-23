#include <stdio.h>
#include <math.h>

/*  test:
-3.8
0.5
0.08
*/


double input(char* value)
{
double n;
printf("%s", value);
scanf("%lf\n", &n);
return n;
}


int main()
{
double x, y, a, b, c;

x = input("x = "),
a = input("a = "),
c = input("c = ");

c = log(c),
b = c + pow(x, 2),
a = a*b;

a = pow(sin(a*x), 3) + b;
b = pow(cos(x), 2);

y = a/b;

printf("%lf\n", y);

return 0;
} 
