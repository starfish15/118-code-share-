#include <stdio.h>

void swap(int *q,int *p);
int main(){
    int n,t,d,m = 0,cnt = 0;
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
    }

    for(int i = 1;i < n;i++){
        m = 0;
        for(int j = 1;j < n;j++){
            if(num[m] < num[m + 1]){
                swap(&num[m],&num[m + 1]);
            }
            m++;
        }
    }

    for(int i = 0;i < n - 1;i++){
        d = num[0] - num[1];
        if(num[i] - num[i + 1] == d){
            cnt++;
        }else{
            break;
        }
    }
    if(cnt == n - 1){
        printf("%d",d);
    }else{
        printf("no");
    }
    return 0;
}

void swap(int *q,int *p){
    int t = *q;
    *q = *p;
    *p = t;
}