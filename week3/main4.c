#include <stdio.h>

int main(){
    {
        char c = 12;
        short s = 34;
        int i = 32;
        float f = 1.0;
        double d = 2.0;

        i = i + c;
        i = i + s;
        f = f + i;
        d = d + f;
    }
    {
        char c1 = 10;
        char c2 = 100;
        char c3 = 20;
        char c4 = c1 * c2 / c3;
        printf("%d\n", c4);
    }
    
    {
        char c;
        int i;
        float f;
        double d;
        i = c;
        f = i;
        d = f;
        
    }
    {
        int i;
        i = 123.45;
        printf("%d\n", i);
        i = -123.45;
        printf("%d\n", i);
    }

    return 0;
}