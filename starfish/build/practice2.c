#include <stdio.h>
int main(){
    int N,M,t;
    scanf("%d %d",&M,&N);
    int cnt[10] = {0};

    for(int i = M;i <= N;i++){
        t = i;
        if(t == 0){
            cnt[0]++;
        }else{
            while (t > 0){
                cnt[t % 10]++;
                t /= 10;
            }
        }
    }
    
    for(int i = 0;i < 10;i++){
        printf("%d ",cnt[i]);
    }

    return 0;
}