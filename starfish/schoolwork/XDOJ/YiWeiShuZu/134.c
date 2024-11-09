#include <stdio.h>

void swap(int *a,int *b){
    float t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int *num1,int length){
    for (int i = 1;i < length; i++){
        for (int j = 0;j < length - i; j++){
            if(num1[j] < num1[j + 1]){
                swap(&num1[j],&num1[j + 1]);
            }
        }
    }
}

int main(){
    int n,cnt = 0;
    scanf("%d",&n);
    int t = n;
    while(t != 0){
        t /= 10;
        cnt++;
    }
    int num[cnt];
    for(int i = 0;i < cnt;i++){
        num[i] = n % 10;
        n /= 10;
    }
    sort(num,cnt);

    for(int i = 0;i < cnt;i++){
        printf("%d ",num[i]);
    }

    return 0;
}