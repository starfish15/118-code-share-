#include <stdio.h>
int main(){
    int n,max,m;
    max = 0;
    n = 1;
    scanf("%d",&n);
    int temperature[n];

    for(int j = 0;j < n;j++){
        scanf("%d",&temperature[j]);
    }

    for(int i = 1;i < n;i++){
        m = temperature[i] - temperature[i - 1];
        if(m < 0){
            m = -m;
        }
        if (max < m){
            max = m;
        }
    }
        
    printf("%d",max);

    return 0;
}
