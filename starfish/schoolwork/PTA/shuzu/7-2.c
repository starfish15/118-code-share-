#include <stdio.h>
int factoria(int a,int num);
int anti_factoria(int a,int num);
int main(){
    int N,m,check,n;
    scanf("%d",&N);

    for(int i = 0;i < N;i++){
        printf("  ");
        for(m = N - i;m > 0;m--){
            printf(" ");
        }
        printf("1");
        check = 1;
        n = 0;
        while (n < i){
            printf("%4d",anti_factoria(i,check) / factoria(i,check));
            check++;
            n++;
        } 
        printf("\n");
    }
    return 0;
}

int factoria(int a,int num){
    int result = 1;
    for(int i = 1;i <= num;i++){
        result *= i;
    }
    return result;
}

int anti_factoria(int a,int num){
    int result = 1;
    for(int i = 1;i <= num;i++){
        result *= a;
        a--;
    }
    return result;
}