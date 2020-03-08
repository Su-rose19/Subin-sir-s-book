#include<stdio.h>
int main()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int temp=0,i=0,j=0;

    for(i=9,j=0;i>=0;i--,j++)
    {
          temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i=9;i>=0;i--)
    {
        printf("%d\n",ara[i]);
    }

    return 0;
}
