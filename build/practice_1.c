#include <stdio.h>
int main(){
    int max,min,n,m,r;
    //获取勾股数
    int num[3];
    for(int i = 0;i < 3;i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    min = num[0];
    //判断最大/最小值
    for(int j = 0;j < 3;j++){
        if(max < num[j]){
            max = num[j];
        }
        if(min > num[j]){
            min = num[j];
        }
    }
    //获取最大公约数
    n = max;
    m = min;
    r = n % m;
    while (r != 0){
       n = m;
       m = r;
       r = n % m;
    }
    //打印结果
    printf("%d/%d",min / m,max / m);
    
    return 0;
}
