#include <stdio.h>

int a = 0;

void f(){
    int a = 3;
    ++a;
}

int main(){
    printf("%d\n", a);
    f();
    printf("%d\n", a);
}