#include <stdio.h>
int main()
{
    double C,F=0;
    printf("Temperature in celsius: ");
    scanf("%lf", &C);

    F=(1.8*C)+32;
    printf("Temperature in farenheit is %.3lf\n",F);
    return 0;
}

