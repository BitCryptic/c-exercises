#include <stdio.h>

int main() {
    int     a       = 33;
    float   f       = 1.234;
    double  d       = 33.44;
    float   lf      = 12.34e22;
    char    c1[]    = "abc_string";

    printf("Integer = %0d\n", a);
    printf("Float   = %7.2f\n", f);
    printf("Double  = %7.2f\n", d);
    printf("Float   = %7.2e\n", lf);
    printf("Float   = %s\n\n", c1);

    a = 0x6A;

    printf("Dezimalzahl %d dezimal     = %d \n", a, a);
    printf("Dezimalzahl %d hexadezimal = %x \n", a, a);
    printf("Dezimalzahl %d hexadezimal = %X \n", a, a);
    printf("Dezimalzahl %d oktal       = %o \n", a, a);
    printf("Dezimalzahl %d als Zeichen = %c \n", a, a);
    return 1;

}