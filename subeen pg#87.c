#include <stdio.h>
int main()
{
    int n=0,i,sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i+=2)
    {
     sum+=i;
    }
    printf("Summation is %d\n", sum);
    return 0;
}

