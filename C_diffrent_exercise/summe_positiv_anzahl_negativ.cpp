#include <stdio.h>

int main() {
    int zahlen[10] = {7, -3, 12, -5, 0, 8, -2, 15, -10, 4};

    int summe_positiv = 0;
    int anzahl_negativ = 0;
    int anzahl_null = 0;

    for (int i = 0; i < 10; i++) {
        if (zahlen[i] < 0) {
            anzahl_negativ++;
        }
        else if (zahlen[i] > 0) {
            summe_positiv += zahlen[i];
        }
        else {
            anzahl_null++;
        }
    }

    printf("Anzahl negativen Zahlen: %d\n", anzahl_negativ);
    printf("Summe der positiven Zahlen: %d\n", summe_positiv);
    printf("Anzahl null: %d\n", anzahl_null);


    return 0;
}