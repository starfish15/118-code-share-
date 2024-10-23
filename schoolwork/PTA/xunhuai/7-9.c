#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    char sex[N];
    float height[N],best_height[N];
    for(int i = 0;i < N;i++){
        scanf(" %c %f\n",&sex[i],&height[i]);
    }
    for(int i = 0;i < N;i++){
        if(sex[i] == 70){
            best_height[i] = height[i] * 1.09;
        }else{
            best_height[i] = height[i] / 1.09;
        }
        printf("%.2f\n",best_height[i]);
    }
    return 0;
}