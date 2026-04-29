#include <stdio.h>

int main() {
    int i;
    int array[10];

    printf("character       %2d  Bytes\n", sizeof(char));
    printf("integer         %2d  Bytes\n", sizeof(int));
    printf("float           %2d  Bytes\n", sizeof(float));
    printf("double          %2d  Bytes\n", sizeof(double));
    printf("long double     %2d  Bytes\n", sizeof(long double));
    printf("i               %2d  Bytes\n", sizeof(i));
    printf("array           %2d  Bytes\n", sizeof(array));
    printf("array[9]        %2d  Bytes\n", sizeof(array[9]));

    return 0;
}