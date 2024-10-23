#include <stdio.h>
int max(int a,int b,int c);
int min(int a,int b,int c);
void swap(int *p,int *q);

int main(){
    int num,n1,n2,n3,num1,num2,cnt = 1;
    scanf("%d",&num);

    do{
        n1 = num / 100;
        n2 = num / 10 % 10;
        n3 = num % 10;
        num1 = max(n1,n2,n3);
        num2 = min(n1,n2,n3);
        num = num1 - num2;
        printf("%d: %d - %d = %d\n",cnt,num1,num2,num);
        cnt++;
    }while(num != 495);
    
    return 0;
}

void swap(int *p,int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

int max(int a,int b,int c){
    int num;
    if(a < b){
        swap(&a,&b);
    }
    if(a < c){
        swap(&a,&c);
    }
    if(b < c){
        swap(&b,&c);
    }
    num = 100*a + 10*b +c;
    return num;
}

int min(int a,int b,int c){
    int num;
    if(a > b){
        swap(&a,&b);
    }
    if(a > c){
        swap(&a,&c);
    }
    if(b > c){
        swap(&b,&c);
    }
    num = 100*a + 10*b +c;
    return num;
}