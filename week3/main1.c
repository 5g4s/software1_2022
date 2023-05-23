#include <stdio.h>

int main(){

    char ch1 = 'a';
    printf("ascii: %c, integer: %d\n", ch1, ch1);


    char s[] = "hello";
    printf("%s\n", s);
    for (int i = 0; i < 6; ++i){
        printf("%c, ", s[i]);
    }

    for (int i = 0; i < 6; ++i){
        printf("%d ", s[i]);
    }

    printf("\n");

    for (int i = 0; i < 6; ++i){
        printf("%p ", &s[i]);
    }
    printf("\n");

    int a[3] = {1, 2, 3};
    printf("%p %p %p %p\n", a, &a[0], &a[1], &a[2]);

    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));

    
    int b[] = {1, 2, 3};
    printf("%lu\n", sizeof(b));

    printf("%lu\n", sizeof(a) / sizeof(int));

    {
        char s[] = "abc";
        printf("%lu\n", sizeof(s));
    }
    return 0;
}