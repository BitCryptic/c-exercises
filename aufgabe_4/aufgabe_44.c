#include <stdio.h>
#define BENZINPREIS 2.24
#define KILOMETER       1000
#define BENZINMENGE     50

int main(void) {
    float verbrauch, kosten;
    int i = 0;

    printf("Bitte gib die getankte Menge in Liter an: \n", BENZINMENGE);
    scanf("%d", &i);
    verbrauch = 100 * BENZINMENGE / KILOMETER;
    kosten = verbrauch * BENZINPREIS;

    printf("Gefahrene Kilometer     : %6.2f\n", (float)KILOMETER);
    printf("Getankte Liter          : %6.2f\n", (float)BENZINMENGE);
    printf("Literpreis              : %6.2f\n", (float)BENZINPREIS);
    printf("Verbrauch pro 100 km    : %6.2f\n", verbrauch);
    printf("Kosten Euro/100 km      : %6.2f\n", kosten);
}