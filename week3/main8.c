#include <stdio.h>

int main(){
    int c = getchar();
    while (c != EOF) {
        putchar('/');
        putchar(c);
        c = getchar();
    }
}