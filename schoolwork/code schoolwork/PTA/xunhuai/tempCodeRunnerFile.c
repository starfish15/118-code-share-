#include <stdio.h>
int main(){
    int N,M;
    int cnt = 0;
    int sum = 0;
    scanf("%d %d",&N,&M);

    if(M == 1){
        cnt++;
        sum++;
    }

    for(int i = N;i <= M;i++){
        for(int j = 2;j <= i;j++){
            if(i % j == 0){
                break;
            }
        }
        if(j == i){
            cnt++;
            sum += i;
        }
    }
    printf("%d %d",cnt,sum);

    return 0;
}