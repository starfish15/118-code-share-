#include <stdio.h>
//该函数用于交换两个数的值
void swap (float *a,float *b);

int main(){
    //定义数组
    //可以修改数组成分来测试代码
    float num1[] = {1,5,6,8,9,7,4,3,2};
    float num2[] = {5,4,3,7,8,2,9,1,6};
    float num3[] = {9,5,8,7,2,1,3,4,6};
    //定义必要变量
    float q1,q2,q3;
    int m = 0;
    int k2 = 0;
    int cnt;

    //目标为实现数组的从小到大排列
    printf("\t      hello\n");
    //实现冒泡排序
    for (int i = 1;i < sizeof(num1) / sizeof(num1[0]); i++){
        int n1 =0;
        for (int j = 1;j < sizeof(num1) / sizeof(num1[0]); j++){
            if(num1[n1] > num1[n1 + 1]){
                swap(&num1[n1],&num1[n1 + 1]);
            }

            n1++;
        }
    }
   //以一位小数形式输出冒泡排序后的结果
    for (int k = 0;k < sizeof(num1)/sizeof(num1[0]);k++){
        printf("%.1f ",num1[k]);
    }
    printf("\n");
    //实现插入排序
    for (int i2 = 1;i2 < sizeof(num3) / sizeof(num3[0]);i2++){
        k2 = num3[i2]; 
        cnt = 0;
        for (int j2 = i2 - 1;j2 >= 0;j2--){
            if (num3[j2] > k2){
                num3[j2 + 1] = num3[j2];
                cnt++;
            }
        }
        num3[i2 - cnt] = k2;
    }
    //输出插入排序后的结果
    for (int k3 = 0;k3 < sizeof(num3) / sizeof(num3[0]);k3++){
        printf("%.1f ",num3[k3]);
    }
    printf("\n");
    //实现选择排序
    for (int i1 = 1;i1 < sizeof(num2) / sizeof(num2[0]);i1++){
        int n2 = m;

        for (int j1 = m; j1 < sizeof(num2) / sizeof(num2[0]); j1++){
            if (num2[m] > num2[n2]){
                swap(&num2[m],&num2[n2]);
            }
            n2++;
        }

        m++;
        
    }
    //以一位小数形式输出选择排序后的结果
    for (int k1 = 0;k1 < sizeof(num2) / sizeof(num2[0]);k1++){
        printf("%.1f ",num2[k1]);
    }
    printf("\nPress \"Enter\" to end the programe");
    getchar();

    return 0;
}


void swap (float *a,float *b){
    float t;
    t = *a;
    *a = *b;
    *b = t;
}