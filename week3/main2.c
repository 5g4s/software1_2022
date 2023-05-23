#include <stdio.h>

int sum_array(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; ++i){
        sum += a[i];
    }
    return sum;
}

int count_spaces(char s[]){
    int ct = 0;
    for (int i = 0; s[i] != '\0'; ++i){
        if (s[i] == ' '){
            ++ct;
        }
    }
    return ct;
}

int main(){
    int arr[] = {1, 2, 3};
    printf("%d\n", sum_array(arr, 3));

    char s[] = "abc def gh";
    printf("%d\n", count_spaces(s));
    printf("%d\n", count_spaces("ijk lmn opq rst"));
}