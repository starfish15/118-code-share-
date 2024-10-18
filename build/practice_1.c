#include <stdio.h>
int main(){
    float x,v1,lim_v1;
    scanf("%f %f",&v1,&lim_v1);
    x = (v1 - lim_v1) / lim_v1 * 100;
    
    if(v1 < 1.1*lim_v1 && v1 < (int)(1.1*lim_v1)){
        printf("OK");
    }else if(v1 = (int)(1.1*lim_v1) || v1 >= 1.1*lim_v1 && v1 < 1.5*lim_v1){
        printf("Exceed %.0f%%. Ticket 200",x);
    }else{
        printf("Exceed %.0f%%. Licence Revoked",x);
    }
    return 0;
}