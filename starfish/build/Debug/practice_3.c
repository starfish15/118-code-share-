#include <stdio.h>
int main(){
    int n,b,num1 = 1,num2 = 1,c = 1;
    scanf("%d",&n);
    b = n - 1;

    for(int i = 1;i <= n * n;i++){
        printf("%02d",num1);
        num1++;
        if(i % n == 0){
            printf("\n");
        }
    }
    printf("\n");
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= b;j++){
            printf("  ");
        }
        for(int k = 0;k < c;k++){
            printf("%02d",num2);
            num2++;
        }
        printf("\n");
        b--;
        c++;
    }
    return 0;
}