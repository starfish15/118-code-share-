#include <stdio.h>
int main(){
    long long int sum,num,n;
    scanf("%lld",&n);

    for(int i = 1;i <= n;i++){
        num = 1;
        for(int j = 1;j <= i;j++){
            num *= j;
        }
        sum += num;
    }
    printf("%lld",sum % 114514);

    return 0;
}