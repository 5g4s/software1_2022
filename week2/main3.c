#include <stdio.h>

double absolute(double src) {
    double dst;
    if (0 < src) {
        dst = src;
    } else {
        dst = -src;
    }
    return dst;
}

void plus_one(int a){
    a++;
}

int main(){
    double v = -0.4;
    double result = absolute(v);

    printf("absolute value of %f is %f\n", v, result);
    printf("absolute value of %f is %f\n", 0.5, absolute(0.5));
    

    int b = 10;
    plus_one(b);
    printf("%d\n", b);
}