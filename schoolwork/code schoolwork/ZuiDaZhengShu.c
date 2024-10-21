#include <stdio.h>
int main(){
    int max;
    int num[4];
    for(int i = 0;i < 4;i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(int i = 1;i < 4;i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    printf("%d",max);

    return 0;
}