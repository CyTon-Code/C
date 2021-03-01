#include <stdio.h>
#include <math.h>
#include "cmath.h"
//#include "cmath"

//#include <TMath.h>


int main(void)  {

    double_t x = 0, y = 0, z = 0,
    i = 0.30,
    n = 0.60,
    //e = 0.1,
    p = 0.05,
    a = 0;  // block исчислений - ініціалізація.

    while (i < n)  {  // block цикла.

        // x = a * exp(3 * i);
        x = a * pow(E, 3 * i);

        y = 2 * x * cos(i);  // блок исчислений

        if (x <= 1)  {  // Розвилка Так
            z = (pow(1 + 2 * y, 2)) * acos(i);
        }
        else   {  // Розвилка Ні
            z = (pow(7.2 * x, 2)) * atan(i);
        }

        i += p;  // block исчислений.

        printf("%lf\n", z);  // блок ввода/вывода
    }
    return 0;
}
