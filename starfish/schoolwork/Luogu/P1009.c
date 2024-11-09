#include <stdio.h>
#include <string.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int num[n][150];
    int sum[150];
    memset(num,0,sizeof(num));
    memset(sum,0,sizeof(sum));

    for(int i = 0;i < n;i++){
        num[i][0] += 1;
    }


    for(int i = 0;i < n;i++){
        for(int j = 1;j <= i+1;j++){
            for(int k = 0;k < 150;k++){
                while(num[i][k] >= 10){
                    num[i][k] -= 10;
                    num[i][k + 1] += 1;
                } 
                num[i][k] *= j;             
            }
        }
    }

    /*for(int i = 0;i < n;i++){
        for(int j = 0;j < 2;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }*/

    for(int i = 0;i < 150;i++){
        for(int j = 0;j < n;j++){
            sum[i] += num[j][i];
        }
        while(sum[i] >= 10){
            sum[i] -= 10;
            sum[i + 1] += 1;
        }
    }

    for(int i = 150;i >= 0;i--){
        if(sum[i] != 0){
            for(int j = i;j >= 0;j--){
                printf("%d",sum[j]);
            }
            break;
        }
    }
    return 0;
}