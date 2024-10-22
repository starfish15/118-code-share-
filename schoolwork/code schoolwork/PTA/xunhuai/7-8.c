#include <stdio.h>
int main(){
    int N,cnt1 = 0,cnt2 = 0;
    scanf("%d",&N);
    int num[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&num[i]);
    }
    for(int i = 0;i < N;i++){
        if(num[i] % 2 != 0){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    printf("%d %d",cnt1,cnt2);

    return 0;
}