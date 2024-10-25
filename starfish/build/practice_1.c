#include <stdio.h>
void print(int *a);
int max(int *a);

void swap(int *p,int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;
}


int main(){
    int a[5] = {4,5,3,2,1};
    int num = max(a);
    printf("%d",num);


    return 0;
}

void print(int *a){
    for(int i = 0;i < 3;i++){
        printf("%d",a[i]);
    }
}

int max(int *a){
    int consult = 0;
    for (int i = 1;i < sizeof(1.0) / sizeof(a[0]); i++){
        int n1 =0;
        for (int j = 1;j < sizeof(1.0) / sizeof(a[0]); j++){
            if(a[n1] < a[n1 + 1]){
                swap(&a[n1],&a[n1 + 1]);
            }
            n1++;
        }
    }
    for(int l = 0;l < sizeof(1.0) / sizeof(a[0]);l++){
        printf("%d\n",a[l]);
    }
    for(int k = 0;k < sizeof(1.0) / sizeof(a[0]);k++){
        consult = consult * 10 + a[k];
    }
    return consult;
}
