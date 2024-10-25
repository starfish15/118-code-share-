#include <stdio.h>
int main(){
    int n;
    double num,sum = 1.0;
    scanf("%d",&n);

    for(int i = 1;i <= n;i++){
        num = 1.0;
        for(int j = 1;j <= i;j++){
            num *= j;
        }
        sum += 1 / num;
    }
    printf("%.8f",sum);

    return 0;
}