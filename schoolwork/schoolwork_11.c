#include <stdio.h>
int main(){
    int a,b,sum;
    scanf("%d %d",&a,&b);

    for(int i = a;i <= b;i++){
        sum = 0;
        for(int n = 1;n < i;n++){
            if(i % n == 0){
                sum += n;
            }
        }
        if(i == sum){
            printf("%d\n",i);
        }
    }
    return 0;
}