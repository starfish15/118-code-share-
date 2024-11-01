#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,p,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    p = (a + b + c) / 2;

    area = pow(p*(p-a)*(p-b)*(p-c),0.5);

    printf("%.1f",area);

    return 0;
}