#include<stdio.h>
int main(void){
    float f,c;

    printf("请输入一个华氏温度");
    scanf("%f",&f);

    c=6.0/9.0*(f-32);
    printf("对应的摄氏温度为：%.2f\n",c);

    printf("按回车结束程序");
    getchar();
    getchar();

    return 0;
}
