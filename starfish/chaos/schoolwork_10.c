#include <stdio.h>
int main(){
    int score,n;
    scanf("%d",&score);

    if (score < 60){
        n = 0; 
    }else{
        n = (score - 60) / 10 + 1;
    }
    switch (n){
    case 0:printf("E");
        break;
    case 1:printf("D");
        break;
    case 2:printf("C");
        break;
    case 3:printf("B");
        break;
    default:printf("A");
    }
    return 0;
}