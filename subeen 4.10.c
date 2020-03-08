#include<stdio.h>
int main()
{
    int i,n,m=0;
    for(n=1;n<=20;n++)
    {
        m=0;
        for(i=1;i<=10;i++)
        {
            m=m+n;
            printf("%d*%d=%d\n",n,i,m);
        }
    }
    return 0;
}


