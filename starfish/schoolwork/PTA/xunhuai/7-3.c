#include <stdio.h>
int main(){
    int N,M,j;
    int cnt = 0;
    int sum = 0;
    scanf("%d %d",&N,&M);

    for(int i = N;i <= M;i++){
        for(j = 2;j <= i;j++){
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