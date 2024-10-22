#include <stdio.h>
int main(){
    int N,num;
    int sum = 0;
    scanf("%d",&N);

    for(int i = 1;i <= N;i++){
        num = 1;
        for(int j = 1;j <= i;j++){
            num *= j;
        }
        sum += num;
    }
    printf("%d",sum);

    return 0;
}