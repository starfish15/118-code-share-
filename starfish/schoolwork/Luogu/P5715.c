#include <stdio.h>
void sort(int *num1,int length);
void swap(int *p,int *q);
int main(){
    int num[3];
    for(int i = 0;i < 3;i++){
        scanf("%d",&num[i]);
    }
    sort(num,3);
    for(int i = 0;i < 3;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

void sort(int *num1,int length){
    for (int i = 1;i < length; i++){
        int n1 =0;
        for (int j = 1;j < length; j++){
            if(num1[n1] > num1[n1 + 1]){
                swap(&num1[n1],&num1[n1 + 1]);
            }
            n1++;
        }
    }
}

void swap(int *p,int *q){
    int t = *p;
    *p = *q;
    *q = t;
}