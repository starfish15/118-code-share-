#include <stdio.h>
int main(){
    int a,n,sum = 0,m = 0;
    scanf("%d %d",&a,&n);

    for(int i = 1;i <= n;i++){
        m = m * 10 + a;
        sum += m;
    }
    printf("s = %d",sum);

    return 0;
}