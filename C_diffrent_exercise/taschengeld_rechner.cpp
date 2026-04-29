#include <stdio.h>

int main() {
    int alter_schueler;
    int note;

    printf("Bitte gib dein Alter ein: ");
    scanf("%d", &alter_schueler);

    printf("Bitte gib deine letzte Note ein: ");
    scanf("%d", &note);

    if (alter_schueler < 12) {
        if (note == 1 || note == 2) {
            printf("Dein Taschengeld beträgt diese Woche: 5€\n");
        } else if (note == 3 || note == 4) {
            printf("Dein Taschengeld beträgt diese Woche: 3€\n");
        } else if (note == 5 || note == 6) {
            printf("Dein Taschengeld beträgt diese Woche: 1€\n");
        } else {
            printf("Ungültige Note!\n");
        }
    } else { // alter_schueler >= 12
        if (note == 1 || note == 2) {
            printf("Dein Taschengeld beträgt diese Woche: 10€\n");
        } else if (note == 3 || note == 4) {
            printf("Dein Taschengeld beträgt diese Woche: 7€\n");
        } else if (note == 5 || note == 6) {
            printf("Dein Taschengeld beträgt diese Woche: 2€\n");
        } else {
            printf("Ungültige Note!\n");
        }
    }

    return 0;
}