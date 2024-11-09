#include <stdio.h>
int main(){
    int n,max,min,record1,record2,cnt;
    scanf("%d",&n);
    int num[n][n];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    for(int i = 0;i < n;i++){
        cnt = 0;
        for(int j = 0;j < n;j++){
            record1 = 0;
            record2 = i;
            max = num[i][0];
            if(num[i][j] > max){
                max = num[i][j];
                min = num[i][j];
                record1 = j;
                record2 = i;
            }
        }
        for(int k = 0;k < n;k++){
            if(num[k][record1] < min){
                cnt = 1;
            }
        }
        if(cnt == 0){
            printf("%d %d",record2,record1);
        }
    }
    return 0;
}