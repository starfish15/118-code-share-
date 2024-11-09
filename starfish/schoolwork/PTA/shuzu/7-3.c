#include <stdio.h>
int main(){
    int n,max,min,record1,record2,cnt,check = 0;
    scanf("%d",&n);
    int num[n][n];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&num[i][j]);
        }
    }

    for(int i = 0;i < n;i++){
        max = num[i][0];
        for(int j = 0;j < n;j++){
            if(num[i][j] > max){
                max = num[i][j];
            }
        }
        for(int j = 0;j < n;j++){
            if(num[i][j] == max){
                cnt = 0;
                for(int k = 0;k < n;k++){
                    if(num[k][j] < max){
                        cnt = 1;
                    }
                }
                if(cnt == 0){
                    printf("%d %d",i,j);
                    check = 1;
                }
            }
        }
    }
    if(check == 0){
        printf("NONE");
    }
    return 0;
}