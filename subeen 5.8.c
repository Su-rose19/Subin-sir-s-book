#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
    {
        x = b;
    }
    else{
        x = a;
    }
    for(;x>=1;x--)
    {
        if( a%x == 0 && b%x == 0 )
        {
            x;
            break;
        }
    }
    printf("GCD (%d , %d) is : %d\n",a,b,x);
    return 0;
}

