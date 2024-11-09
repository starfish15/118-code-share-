#include <stdio.h>
#include <string.h>
int main(){
    int n,k,num,l,max = 0,cnt[100];
    memset(cnt,0,sizeof(cnt));
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&k);
        for(int j = 0;j < k;j++){
            scanf("%d",&num);
            cnt[num - 1]++;
        }
    }
    for(int i = 0;i < 100;i++){
        if(cnt[i] >= max){
            max = cnt[i];
            l = i + 1;
        }
    }
    printf("%d %d",l,max);

    return 0;
}