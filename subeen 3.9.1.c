#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    int a=(x*10); int b=(y*10);

    int q = a/b;
    int r = a-(b*q);

    printf("quotient = %d\n and remainder = %d\n",q,r);


    return 0;
}
