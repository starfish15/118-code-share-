#include <stdio.h>
int check(int a,int *num);
int main(){
    int n,T,count = 0;
    
    int t,num[6000000];
    scanf("%d",&T);
    for(long int i = 1;i < 1e7;i++){
        t = i;
        while(t != 0){
            if(t % 10 == 7){
                num[0] = i;
                count += 1;
                continue;
            }else{
                t /= 10;
            }
        }
    }

    for(int j = 0;j < T;j++){
        int sb;
        scanf("%d",&n);
        sb = check(n,num);
        if(sb == 1){
            while(1){
                sb = check(n + 1,num);
                if(sb == 1){
                    printf("%d\n",n + 1);
                    break;
                }else{
                    n++;
                }
            }
        }else{
            printf("-1\n");
        }
    }
    return 0;

}

int check(int a,int *num){
    int ret = 1;
    for(int i = 0;num[i] < a;i++){
        if(a % num[i] == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}