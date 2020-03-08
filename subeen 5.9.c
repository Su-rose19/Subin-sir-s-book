#include <stdio.h>
int main()
{
    int a,b,temp,gcd;
    scanf("%d", &a);
    scanf("%d", &b);

    if( a==0 )
    {
        gcd = a;
    }
    else if( b==0 )
    {
        gcd = b;
    }
    else
    {
        while( b!=0 )
        {
            temp = b;
            b = a%b;
            a = temp;
        }
        gcd = a;
    }
    printf("GCD is : %d\n",gcd);
    return 0;
}
