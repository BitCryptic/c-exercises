#include <stdio.h>

int main() {
    int i = 3, j = 4, k = 3;
    double x = 2.5, y;

    y = (double) i + (double) j;       // 3.0 + 4.0 = 7.0
    printf("y = %f\n", y);             // Erwartet: 7.000000

    y = j / k;                         // 4 / 3 = 1,3333 -> 1.0
    printf("y = %f\n", y);             // Erwartet: 1.000000

    y = (double)j / (double) k;        // 1.333
    printf("y = %f\n", y);             // Erwartet: 1.333333

    y = (double) (i + j);              // 3+4 = 7 -> 7.0  ← Semikolon fehlte!
    printf("y = %f\n", y);             // Erwartet: 7.000000

    y = 3.5;

    i = (int) x + (int) y;             // 2 + 3 = 5        ← Semikolon fehlte!
    printf("i = %d\n", i);             // Erwartet: 5

    i = (int) (x + y);                 // 2.5 + 3.5 = 6.0 -> 6
    printf("i = %d\n", i);             // Erwartet: 6

    return 0;
}