#include <stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d",&n);
    int num[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&num[i][j]);
        }
    }

    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - 1;j++){
            if(i + j != n- 1){
                sum += num[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}