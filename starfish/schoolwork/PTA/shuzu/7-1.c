#include <stdio.h>
int main(){
    int n,length,cnt = 0,check = 0,m = 0;
    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        scanf("%d",&length);
        int num[length];
        check = 0;
        m = 0;
        for(int j = 0;j < length;j++){
            cnt = 0;
            for(int k = 0;k < length;k++){
                scanf("%d",&num[k]);
                    if(num[k] == 0){
                        cnt++;
                        if(k >= m){
                            cnt--;
                        }
                    }
                }
                if(cnt == m){
                    check++;
                }
                m++;
            }
        if(check == length){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}