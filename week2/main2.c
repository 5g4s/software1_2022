#include <stdio.h>


void main(){
    int n = 10;
    if (n % 2 == 0){
        printf("n is even\n");
    }
    else
    {
        printf("n i odd\n");
    }


    double score = 0.7;

    if (score < 0.3) {
        printf("Your grade is C\n");
    } else if (score < 0.8) {
        printf("Your grade is B\n");
    } else {
        printf("Your grade is A\n");
    }

    int result;
    int flag = 1;
    int val1 = 10;
    int val2 = 2;
    if (flag == 0) {
        result = -1;
    } else {
        if (val1 < val2){
            result = val1;
        } else {
            result = val2;
        }
    }

    for (int i = 0; i < 5; ++i){
        printf("%d\n", i);
    }

    for (int i = 0; i <= 4; ++i){
        printf("%d\n", i);
    }

    for (int i = 1; i < 6; ++i){
        printf("%d\n", i - 1);
    }

    for (int i = 5; 0 < i; --i) {
        printf("%d\n", 5 - i);
    }

    int i = 0;
    while (i < 5){
        printf("%d\n", i);
        ++i;
    }


    for (int n = 0; n < 5; ++n) {
    if (n == 3) {
        break;
    }
    printf("%d\n", n);
    }

    for (int n = 0; n < 5; ++n) {
    if (n == 3) {
        continue;
    }
    printf("%d\n", n);
    }

    int school_year = 2;
    switch (school_year)
    {
        case 1:
        case 2:
            printf("You are studying at Komaba\n");
        case 3:
        case 4:
            printf("You are studying at Hongo\n");
        break;
        default:
            printf("Error\n");
            break;

    }

    int num = 1;
    while (num < 100){
        printf("%d, ", num);
        num *= 2;
    }
    printf("\n");


    int a[3];

    a[0] = 12;
    a[1] = 3;
    a[2] = 5;

    for (int i = 0; n < 3; ++n){
        printf("a[%d] is %d\n", n, a[n]);
    }

    for (int n = 0; n < 3; ++n) {
    printf("The address of a[%d] is %p\n", n, &(a[n]));
    }

    int mat[2][3] = {
        {32, 5, 76},
        {1, 12,  8}
    };

    for (int y = 0; y < 2; ++y){
        for (int x = 0; x < 3; ++x){
            printf("%d, ", mat[y][x]);
        }
        printf("\n");
    }



}