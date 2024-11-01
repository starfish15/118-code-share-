#include<stdio.h>
int main()
{
    int a[4],num=0;
    char abc[4];
    scanf("%d %d %d",&a[1],&a[2],&a[3]);
    for(int i=1;i<=3;i++)
    {
        scanf(" %c",&abc[i]);
    }
    if(a[1]>a[2])
    {
        num=a[1];a[1]=a[2];a[2]=num;
    }
    if(a[1]>a[3])
    {
        num=a[1];a[1]=a[3];a[3]=num;
    }
    if(a[2]>a[3])
    {
        num=a[2];a[2]=a[3];a[3]=num;
    }
    for(int j=1;j<=3;j++)
    {
        if(abc[j]=='A')
            {
                printf("%d ",a[1]);
            }
        if(abc[j]=='B')
            {
                printf("%d ",a[2]);
            }
        if(abc[j]=='C')
            {
                printf("%d ",a[3]);
            }
    }

    return 0;
}