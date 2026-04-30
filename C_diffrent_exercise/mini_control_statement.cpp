#include <stdio.h>

int main() {
    int wert[] = {12, -3, 45, -7, 0, 23, -100, 8, 102, -18, -28};
    int gefunden = 0;

    for (int i = 0; i < 11; i++) {
        if (wert[i]  < 0) {
            printf("%d ", wert[i]);     // 1. ausgeben
            gefunden++;                 // 2. mitzählen
            if (gefunden == 5) {        // 3. genug?
                break;                  //      -> raus aus der Schleife!
            }
        }
    }

    return 0;
}