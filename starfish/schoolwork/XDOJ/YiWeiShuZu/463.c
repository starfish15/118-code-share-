#include <stdio.h>
int main(){
    int a1,a2,n,t,cnt = 2;
    scanf("%d %d %d",&a1,&a2,&n);
    int num[n + 1];
    num[0] = a1;
    num[1] = a2;
    for(int i = 0;cnt <= n;i++){
        t = num[i] * num[i + 1];
        if(t >= 10){
            num[cnt] = t / 10;
            num[cnt + 1] = t % 10;
            cnt += 2;
        }else{
            num[cnt] = t;
            cnt++;
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}