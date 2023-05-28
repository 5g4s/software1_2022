#include <stdio.h>

int main(){
    int i = 3;
    double f = 154.423;
    printf("|%d|%5d|\n", i, i);
    printf("|%f|%.2f|%8.2f|\n", f, f, f);

    double v = 1.3e10;
    printf("|%f|%e|\n", v, v);
    printf("|%g|%g|\n", f, v);

    int n = 500;
    printf("|%d|%o|%x|\n", n, n, n);
    int n_octal = 0764;
    int n_hexadecimal = 0x1f4;
    printf("|%d|%d|%d|\n", n, n_octal, n_hexadecimal);

}