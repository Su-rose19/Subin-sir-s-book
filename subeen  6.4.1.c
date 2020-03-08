#include<stdio.h>
int main()
{
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int i;

    for(i=10;i>0;i--)
    {
        printf("%dth element is: %d\n",i,ara[i-1]);
    }

    return 0;
}
