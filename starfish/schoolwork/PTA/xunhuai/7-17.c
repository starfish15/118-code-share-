#include <stdio.h>
int max(int *a,int b);
int min(int *a,int b);
void swap(int *p,int *q);

int main(){
    int num,num1,num2,t,c,count = 1,cnt = 1;
    scanf("%d",&num);
    t = num;
    while (t > 9){
        t /= 10;
        count++;
    }

    switch (count)
    {
    case 3:
        c = 495;
        break;
    
    case 4:
        c = 6174;
        break;

    case 5:
        c = 61974;
        break;
    }
    
    int start[count];

    do{
        for(int l = 0;l < count;l++){
            start[l] = num % 10;
            num /= 10;
        }
        num1 = max(start,count);
        num2 = min(start,count);
        num = num1 - num2;
        if(num == 0){
            printf("error");
            break;
        }
        printf("%d: %d - %d = %d\n",cnt,num1,num2,num);
        cnt++;
    }while(num != c);
    
    return 0;
}

void swap(int *p,int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

int max(int *a,int b){
    int consult = 0;
    for (int i = 1;i < b; i++){
        int n1 =0;
        for (int j = 1;j < b; j++){
            if(a[n1] < a[n1 + 1]){
                swap(&a[n1],&a[n1 + 1]);
            }
            n1++;
        }
    }
    for(int k = 0;k < b;k++){
        consult = consult * 10 + a[k];
    }
    return consult;
}

int min(int *a,int b){
    int consult = 0;
    for (int i = 1;i < b; i++){
        int n1 =0;
        for (int j = 1;j < b; j++){
            if(a[n1] > a[n1 + 1]){
                swap(&a[n1],&a[n1 + 1]);
            }
            n1++;
        }
    }
    for(int k = 0;k < b;k++){
        consult = consult * 10 + a[k];
    }
    return consult;
}
