#include <stdio.h>
int main(){
    int num,t,sum = 0,check = 0,cnt = 0;
    int a[10] = {0};
    scanf("%d",&num);
    t = num;

    for(int i = 0;num > 0;i++){
        a[i] = num % 10;
        num /= 10;
        cnt++;
    }
    for(int j = 0;j < cnt;j++){
        check = check * 10 + a[j];
        sum += a[j];
    }
    if(t == check){
        printf("%d",sum);
    }else{
        printf("no");
    }
    return 0;
}