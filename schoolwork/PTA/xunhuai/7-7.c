#include <stdio.h>
int main(){
    int N,U,D,time = 0,height = 0;
    scanf("%d %d %d",&N,&U,&D);

    while(time >= 0){
        time++;
        height += U;
        if(height >= N){
            break;
        }
        time++;
        height -= D;
    }
    printf("%d",time);

    return 0;
}