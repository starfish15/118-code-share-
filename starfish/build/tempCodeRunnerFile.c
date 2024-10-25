#include <stdio.h>
int main(){
    int L,i,cnt = 0,sum = 0,num = 2;
    scanf("%d",&L);

    if(L < 2){
        printf("0");
    }else{
        while (sum <= L){
            for(i = 2;i <= num;i++){
                if(num % i == 0){
                    break;
                }
            }
            if(num == i){
                cnt++;
                sum += num;
                printf("%d\n",num);
            }
            num++;
        }
        cnt--;
        printf("%d",cnt);
    }
    return 0;
}
