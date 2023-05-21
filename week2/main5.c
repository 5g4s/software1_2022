#include <stdio.h>

float f(int, float);

float average(float, float);

int power(int, int);

int main(){
    float a = f(10, 0.5);
    printf("f %f\n", a);

    float b = average(1, 3);
    printf("average %f\n", b);

    int c = power(2, 10);
    printf("power %d\n", c);

}

float f(int a, float b) {
    printf("%d\n", a);
    return b * 10;
}

float average(float a, float b){
    return (a + b) / 2;
}

int power(int a, int b){
    int ret = 1;
    for (int i = 0; i < b; ++i){
        ret *= a;
    }
    return ret;
}

