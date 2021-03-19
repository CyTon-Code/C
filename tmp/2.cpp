#include <iostream>
using namespace std;
int main(void)  {

    double x = 0, y = 0, z = 0,
    i = 0.30,
    n = 0.60,
    p = 0.05,
    a = 1;  // block исчислений - ініціалізація.
    input("a = ", a);
    while (i < n)  {  // block цикла.

        x = a * exp(3 * i);
        y = 2 * x * cos(i);  // блок исчислений

        if (x <= 1)  {  // Розвилка Так
            z = (pow(1 + 2 * y, 2)) * cos(i);
        }
        else   {  // Розвилка Ні
            z = (pow(7.2 * x, 2)) * tan(i);
        }

        i += p;  // block исчислений.

        cout << z << endl;  // блок ввода/вывода
    }
    return 0;
}
