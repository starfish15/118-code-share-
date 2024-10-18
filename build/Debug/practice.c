#include <stdio.h>
int main(){
    int A,B;
    float D = A;
    float C = D / B;
    scanf("%d %d",&A,&B);
    if(B > 0){
        printf("%d/%d=%.2f",A,B,C);
    }else if(B < 0){
        printf("%d/(%d)=%.2f",A,B,C);
    }else{
        printf("%d/%d=Error",A,B);
    }

    return 0;
}