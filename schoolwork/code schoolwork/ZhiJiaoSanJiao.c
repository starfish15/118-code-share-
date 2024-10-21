#include <stdio.h>
int main(){
    int a,b,c,area;
    scanf("%d %d %d",&a,&b,&c);

    if(a*a + b*b == c*c){
        area = a * b;
        printf("%d",area);
    }else{
        printf("no");
    }
    return 0;
}