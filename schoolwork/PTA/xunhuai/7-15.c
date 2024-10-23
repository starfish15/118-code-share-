#include <stdio.h>
int main(){
    long n;
    double height,distance ;
    scanf("%lf %ld",&height,&n);
    distance = height;

    for(int i = 0;i < n;i++){
        distance += height;
        height /= 2.0;
    }
    distance -= height;
    if(n > 0){
        distance -= height;
    }else{
        height = 0;
    }

    printf("%.1f %.1f",distance,height);

    return 0;
}