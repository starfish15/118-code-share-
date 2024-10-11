#include <stdio.h>
int main(){
    int h,m;
    float T,t;

    scanf("%d %d",&h,&m);

    t = h + m / 60.0;
    T = 4 * t * t / (t + 2) - 20;

    printf("%.2f",T);

    return 0;
}