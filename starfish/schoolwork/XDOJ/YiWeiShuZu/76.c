#include <stdio.h>

void swap (int *a,int *b);
void sort(int *num1,int length);
int main(){
    int n,t,j = 0,cnt = 0;
    scanf("%d",&n);
    int num[n],diffnum[n],count[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&num[i]);
    }

    sort(num,n);
    t = num[0];

    for(int i = 0;i < n;i++){
        if(t == num[i]){
            cnt++;            
        }else{
            count[j] = cnt;
            diffnum[j] = t;
            t = num[i];
            cnt = 1;
            j++;
        }
    }
    diffnum[j] = num[n - 1];
    count[j] = cnt;
    for(int k = 0;k <= j;k++){
        printf("%d:%d\n",diffnum[k],count[k]);
    }

    return 0;
}

void swap (int *a,int *b){
    float t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int *num1,int length){
    for (int i = 1;i < length; i++){
        int n1 = 0;
        for (int j = 1;j < length; j++){
            if(num1[n1] > num1[n1 + 1]){
                swap(&num1[n1],&num1[n1 + 1]);
            }
            n1++;
        }
    }
}