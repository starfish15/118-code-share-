#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
//����
int num1 = 34;
int num = 0;
int a = 0;

//����10��99�������
srand(time(NULL));
num1 =10 + rand() %89;

printf("�������ְ�\n");
//���û�����
do {
    a = ++a;
    printf("������һ����λ����\n");
    scanf("%d",&num);
    if (num >= 100){
        printf("���Ǹ��ǣ��㲻ʶ����\n\n");
        a = --a;
    }else if (num < 10){
        printf("���Ǹ��ǣ��㲻ʶ����\n\n");
        a = --a;
    }else if (num == num1){
        printf("��ϲ������%d�ξͲ³�����!\n\n",a);
    }else if (num > num1){
        printf("��µ������е���ء�\n\n");
    }else {
        printf("��µ������е�С�ء�\n\n");
    }   
}while (num != num1);
printf("���س���������\n");
getchar();
getchar();

return 0;
}