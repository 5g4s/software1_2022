#include <stdio.h>


main() {
    int a = 5;
    int b = 2;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    

    printf("a * 0.1 = %f\n", a * 0.1);
    printf("3 / 2 = %d\n", 3 / 2);
    printf("3.0 / 2 = %f\n", 3.0 / 2);
    printf("3.0 / 2.0 = %f\n", 3.0 / 2.0);


    a = 2;
    printf("%d\n", a = 2);


    a = 0;
    a = a + 2;
    a = a + 2;

    int x = 0, y = 0; 
    a = 0;
    b = 0;
    x = ++a;
    y = b++;
    printf("x=%d, y=%d, a=%d, b=%d\n", x, y, a, b);


    a = 2, b = 3;
    printf("a == b    %d\n", a == b);
    printf("a != b    %d\n", a != b);
    printf("a <  b    %d\n", a <  b);
    printf("a <= b    %d\n", a <= b);


    a = 10;
    printf("%d\n", (3 < a) && (a <= 5));
    printf("%d\n", (a == 10) || (a <= 100));
    printf("%d\n", !(a == 10));
    

    a = 1 + 2 * 3;
    printf("%d\n", a);
    
    a = (1 + 2) * 3;
    printf("%d\n", a);

    a = 2 == 3;
    printf("%d\n", a);

    a = 3 + 2 - 1;
    printf("%d\n", a);

    int z;
    x = y = z = 3;
    printf("%d %d %d\n", x, y, z);


    float w = 50, h = 1.6;
    printf("BMI %f\n", w / (h * h));

    int year = 2022;
    int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("is_leap %d", is_leap);
}