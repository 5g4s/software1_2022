#include <stdio.h>

int main(){
    int c = getchar();
    while (c != EOF) {
        if (c == '\n'){
            printf("You entered new line\n");
        } else {
            printf("You enterd %c\n", c);
        }
        c = getchar();
    }
}