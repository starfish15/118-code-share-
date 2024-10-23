#include <stdio.h>
int main(){
    int N,month = 0;
    scanf("%d",N);
    int num[5000];
    num[0] = 1;
    num[1] = 1;

    for(i = 2;;i++){
        if(num[i] > N){
            break;
        }
        num[i] = num[i - 1] + num[i - 2];
    }
    printf("%d",i + 1);

    return 0;
}