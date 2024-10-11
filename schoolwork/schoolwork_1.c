#include <stdio.h>
int main(){
    const float PI = 3.1415926;

    float fe,au,r1,r2;
    int d1,d2;

    scanf("%d %d",&d1,&d2);
    r1 = d1 / 2.0 / 10.0;
    r2 = d2 / 2.0 / 10.0;
    fe = 7.86 * PI * r1 * r1 * r1 * 4.0 / 3.0;
    au = 19.3 * PI * r2 * r2 * r2 * 4.0 / 3.0;

    printf("%.3f %.3f",fe,au);

    return 0;
}