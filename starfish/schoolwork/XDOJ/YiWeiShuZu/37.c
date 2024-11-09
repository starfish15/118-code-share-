#include <stdio.h>
int main(){
    int N,l,cnt = 0,k = 0;
    scanf("%d",&N);
    int num[N],real_num[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&num[i]);
        if(num[i] % 2 == 0){
            cnt++;
        }
    }

    int t = cnt;
    for(int i = 0;i < N;i++){
        if(num[i] % 2 == 0){
            real_num[k] = num[i];
            k++;
        }else{
            real_num[t] = num[i];
            t++;
        }
    }

    for(int i = 0;i < cnt;i++){
        for(int j = 0;j < cnt - 1;j++){
            if(real_num[j] < real_num[j + 1]){
                l = real_num[j];
                real_num[j] = real_num[j + 1];
                real_num[j + 1] = l;
            }
        }
    }

    for(int i = cnt;i < N;i++){
        for(int j = cnt;j < N - 1;j++){
            if(real_num[j] < real_num[j + 1]){
                l = real_num[j];
                real_num[j] = real_num[j + 1];
                real_num[j + 1] = l;
            }
        }
    }

    for(int i = 0;i < N;i++){
        printf("%d ",real_num[i]);
    }

    return 0;
}