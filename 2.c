#include <stdio.h>
#include <math.h>
#include "math.h"
#include <complex.h>
//#include <tgmath.h>
#include "cmath.h"

//#include <TMath.h>

//double E = 2.718281828459045;

int main(void)  {

    double x = 0, y = 0, z = 0,
    i = 0.30,
    n = 0.60,
    //e = 0.1,
    p = 0.05,
    a = 1;  // block исчислений - ініціалізація.

    while (i < n)  {  // block цикла.

        // x = a * exp(3 * i);
        x = a * EXP(3 * i);

        y = 2 * x * ccos(i);  // блок исчислений

        if (x <= 1)  {  // Розвилка Так
            z = (POW(1 + 2 * y, 2)) * ccos(i);
        }
        else   {  // Розвилка Ні
            z = (POW(7.2 * x, 2)) * ctan(i);
        }

        i += p;  // block исчислений.

        printf("%lf\n", z);  // блок ввода/вывода
    }
    return 0;
}
