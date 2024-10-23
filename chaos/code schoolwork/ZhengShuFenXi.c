#include <stdio.h>
int main(){
    int n,m,min,max;
    int cnt = 0;
    max = 0;
    scanf("%d",&n);
    min = n % 10;
    if(n == 0){
        cnt = 1;
    }
    while (n > 0){
        m = n % 10;
        n = n / 10;
        cnt++;
        if(max < m){
            max = m;
        }
        if(min > m){
            min = m;
        }
    }
    printf("%d %d %d",cnt,max,min);

    return 0;
}