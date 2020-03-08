#include <stdio.h>
int main()
{
    int a,b,gcd,lcm,temp;
    scanf("%d", &a);
    scanf("%d", &b);
    int X = (a*b);
    if( a==0 )
    {
        gcd = a;
    }
    else if ( b==0 )
    {
        gcd = b;
    }
    else
    {
        while(b!=0)
        {
            temp = b;
            b = a%b;
            a = temp;
        }
        gcd = a;
    }
    lcm = X /gcd;
    printf("GCD is : %d\n",gcd);
    printf("LCM is : %d\n",lcm);
    return 0;
}
