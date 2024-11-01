#include <stdio.h>
int factoria(int a);
int anti_factoria(int a);
int main(){
    int N,m = 8,check = 0;
    scanf("%d",&N);

    for(int i = 0;i < N;i++){
        for(;m > 0;m--){
            printf(" ");
        }
        while (check < N){
            printf("")
        }
        
    }
}

int factoria(int a,int num){
    int result = 1;
    for(int i = 1;i <= num;i++){
        result *= i;
    }
    return result;
}

int anti_factoria(int a,int num){
    int result = 1
    for(int i = 1;i <= num;i++){
        result *= a;
        a--;
    }
    return result;
}