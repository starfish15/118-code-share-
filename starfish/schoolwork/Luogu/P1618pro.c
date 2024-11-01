#include <stdio.h>
int check(int a,int b,int c);
int main(){
    int j,k,n,t,cnt = 0,num[3];
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    for(int i = 123;i <= 333;i++){
        j = i * b / a;
        k = i * c / a;
        t = i;
        for(int j = 0;j < 3;j++){
            num[j] = t % 10;
            t /= 10;
        }
        if(num[0] == 0||num[1] == 0||num[0] == 0){
            continue;
        }else if(num[0] == num[1]||num[1] == num[2]||num[0] == num[2]){
            continue;
        }
        t = j;
        for(int j = 0;j < 3;j++){
            num[j] = t % 10;
            t /= 10;
        }
        if(num[0] == 0||num[1] == 0||num[0] == 0){
            continue;
        }else if(num[0] == num[1]||num[1] == num[2]||num[0] == num[2]){
            continue;
        }
        t = k;
        for(int j = 0;j < 3;j++){
            num[j] = t % 10;
            t /= 10;
        }
        if(num[0] == 0||num[1] == 0||num[0] == 0){
            continue;
        }else if(num[0] == num[1]||num[1] == num[2]||num[0] == num[2]){
            continue;
        }
        n = check(i,j,k);
        if(n == 0){
            printf("%d %d %d\n",i,j,k);
            cnt++;
        }
    }
    if(cnt == 0){
        printf("No!!!");
    }
}

int check(int a,int b,int c){
    int cnt = 0;
    int num1[3],num2[3],num3[3];
    for(int i = 0;i < 3;i++){
        num1[i] = a % 10;
        a /= 10; 
    }
    for(int i = 0;i < 3;i++){
        num2[i] = b % 10;
        b /= 10; 
    }
    for(int i = 0;i < 3;i++){
        num3[i] = c % 10;
        c /= 10; 
    }
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(num1[i] == num2[j]){
                cnt++;
            }else if(num1[i] == num3[j]){
                cnt++;
            }else if(num2[i] == num3[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
