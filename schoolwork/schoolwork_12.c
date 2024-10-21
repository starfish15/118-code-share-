#include <stdio.h>
int main(){
    int a,b,r;
    scanf("%d %d",&a,&b);
        if(a != 0 && b != 0){
        r = a % b;
        while (r != 0){
            a = b;
            b = r;
            r = a % b;
        }
        printf("%d",b);
    }else{
        if(b > a){
            a = b;
        }
        printf("%d",a);
    }

    return 0;
}