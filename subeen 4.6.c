#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d",&n);
    for(;;)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
        if(i>10)
        {
            break;
        }

    }

    return 0;
}

