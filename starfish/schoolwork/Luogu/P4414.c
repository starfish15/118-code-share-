#include <stdio.h>
void sort(int *num1,int length);
void swap (int *a,int *b);
int main(){
    int num[3];
    char abc[3];
    for(int i = 0;i < 3;i++){
        scanf("%d",&num[i]);
    }
    sort(num,3);
    for(int i = 0;i < 3;i++){
        scanf(" %c",&abc[i]);
    }
    for(int i = 0;i < 3;i++){
        if(abc[i] == 'A'){
            printf("%d ",num[0]);
        }else if(abc[i] == 'B'){
            printf("%d ",num[1]);
        }else{
            printf("%d ",num[2]);
        }
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

void swap (int *a,int *b){
    float t;
    t = *a;
    *a = *b;
    *b = t;
}