#include <stdio.h>
int main(){
    float ec,cost,extra;
    scanf("%f",&ec);

    if(ec <= 110){
        cost = 0.5 * ec;
    }else if(ec > 110 && ec <= 210){
        extra = ec - 110;
        cost = 55 + extra * 0.55;
    }else{
        extra = ec - 210;
        cost = 110 + extra * 0.7; 
    }
    printf("%.2f",cost);

    return 0;
}