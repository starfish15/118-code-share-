#include<stdio.h>

int main()
{
    int m,n,num=0,a[10]={0};
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        while(i>0)
        {
            num=i%10;
            i=i/10;
            a[num]+=1;
        }
    }
    for(int h=0;h<=9;h++)
    {
        printf("%d ",a[h]);
    }
    return 0;
}