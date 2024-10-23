#include <stdio.h>
int main(){
    int f;
    float c;

    scanf("%d",&f);
    c = (f - 32) * 5.0 / 9.0;

    printf("%.2f",c);

    return 0;
}