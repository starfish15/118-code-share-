#include <stdio.h>
int main(){
    int M,N,r,a,b,c = 1;
    scanf("%d %d",&M,&N);
    r = M % N;
    a = M;
    b = N;

    while(r != 0){
        M = N;
        N = r;
        r = M % N;
    }
    while(c % a != 0 || c % b != 0){
        c++;
    }
    printf("%d %d",N,c);

    return 0;
}