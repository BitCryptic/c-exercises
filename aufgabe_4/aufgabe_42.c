#include <stdio.h>

int main() {
    //Einfache Berechenung
    double T_fahrenheit = 20., T_celsius = 0.0;

    printf("Temperatur in Fahrenheit: ");
    scanf("%lf", &T_fahrenheit);

    T_celsius = (T_fahrenheit -32) * 5.0/9.0;
    printf("%4.2f Grad Fahrenheit = %4.2f Grad Celsius \n", T_fahrenheit, T_celsius);

    return 0;
}