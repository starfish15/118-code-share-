#include <stdio.h>
int main(){
    int n,k,cnt = 0;
    scanf("%d %d",&n,&k);
    int num[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
        if(num[i] == k){
            printf("%d ",i);
            cnt++;
        }
    }
    if(cnt == 0){
        printf("-1");
    }
    return 0;
}