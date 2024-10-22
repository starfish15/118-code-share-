#include <stdio.h>
int main(){
    int N,cnt = 1,max,n,check,quantity = 0,j = 0,k = 0,m = 0;
    scanf("%d",&N);
    int factor[N];
    int factor2[N];
    int continuity_factor[N];
    cnt = 1;
    max = 1;

    for(int i = N - 1;i > 1;i--){
        if(N % i == 0){
            factor[j] = i;
            N /= i;
            j++;
            quantity++;
        }
    }
    //printf("%d",quantity);
    for(int i = 0;i < quantity;i++){
        n = quantity - 1;
        factor2[i] = factor[n];
        n--;
    }

    for(int i = 0;i < quantity - 1;i++){
        if (factor2[i] + 1 == factor2[i + 1]){
            cnt++;
            continuity_factor[m] = i;
            j++;
        }else{
            if(max < cnt){
                max = cnt;
            }
            cnt = 1;
        }
    }
    printf("%d\n",max);
    if(max > 1){
        for(int i = 0;i < quantity;i++) {
            if(continuity_factor[i] + 1 == continuity_factor[i + 1]){
                printf("%d*",continuity_factor[i]);
                if(continuity_factor[i] + 2 != continuity_factor[i + 2]){
                    check = i + 1;
                    break;
                }
            }
        }
    }
        printf("%d",continuity_factor[check]);
    return 0;
}