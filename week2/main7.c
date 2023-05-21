#include <stdio.h>
#include <stdlib.h>

int judge(int val){

    int flag = 0;
    while (val > 0){
        if (val % 10 == 2) {
            flag = 1; 
        }
        val /= 10;
    }
    return flag;
}



int main(int argc, char *argv[]){
    int N1 = atoi(argv[1]);
    int N2 = atoi(argv[2]);

    int count = 0;
    for (int i = N1; i <= N2; ++i){
        int flag = judge(i);
        if (flag){
            if (count > 0){
                printf(", ");
            }
            printf("%d", i);
            ++count;
        }

    }
    printf("\n");
    return 0;
}