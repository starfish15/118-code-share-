#include<stdio.h>

int main()
{
    int n,number1=1,number2=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
          printf("%02d",number1++);
        }
        printf("\n");
    }
    printf("\n");
    for(int a=1;a<=n;a++)
    {
        for(int b=n;b>a;b--)
        {
            printf("  ");
        }
        for(int c=1;c<=a;c++)
        {
            printf("%02d",number2++);
        }
        printf("\n");
    }
}
