#include <stdio.h>
int main(){
    float eps,num,numerator,denominator,sum = 0;
    int n = 1;
    scanf("%f",&eps);

    num = 1;
    do{
        sum += num;
        numerator = 1;
        denominator = 1;
        for(int i = 1;i <= n;i++){
            numerator *= i;
        }
        for(int j = 1;j <= n;j++){
            denominator *= 2 * j + 1;
        }
        num = numerator / denominator;
        n++;
    }while(num >= eps);
    sum += num;
    
    printf("%f",2 * sum);

    return 0;
}