#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i = 2;i < n;i++){
        if(n % i == 0){
            break;
        }
    }
    printf("%d",n / i);

    return 0;
}