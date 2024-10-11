#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
//变量
int num1 = 34;
int num = 0;
int a = 0;

//生成10到99的随机数
srand(time(NULL));
num1 =10 + rand() %89;

printf("来猜数字吧\n");
//让用户猜数
do {
    a = ++a;
    printf("请输入一个两位整数\n");
    scanf("%d",&num);
    if (num >= 100){
        printf("不是哥们，你不识字吗？\n\n");
        a = --a;
    }else if (num < 10){
        printf("不是哥们，你不识字吗？\n\n");
        a = --a;
    }else if (num == num1){
        printf("恭喜你用了%d次就猜出了它!\n\n",a);
    }else if (num > num1){
        printf("你猜的数字有点大呢。\n\n");
    }else {
        printf("你猜的数字有点小呢。\n\n");
    }   
}while (num != num1);
printf("按回车结束程序\n");
getchar();
getchar();

return 0;
}