#include <stdio.h>
#include <math.h>
int main(){
    int n,min;
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
    }
    min = abs(num[0] - num[1]);
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(min > abs(num[i] - num[j])){
                min = abs(num[i] - num[j]);
            }
        }
    }
    printf("%d",min);
}