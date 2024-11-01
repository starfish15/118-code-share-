#include <stdio.h>
int main(){
    int n,max,min;
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    min = num[0];
    
    for(int i = 0;i < n;i++){
        if(max < num[i]){
            max = num[i];
        }
        if(min > num[i]){
            min = num[i];
        }
    }
    printf("%d",max - min);

    return 0;
}