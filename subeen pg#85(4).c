#include<stdio.h>
int main()
{
    double S,T,V;
    printf("Velocity is : ");
    scanf("%lf",&V);
    printf("Time is : ");
    scanf("%lf",&T);

    S = 2*V*T;
    printf("Displacement is: %.3lf\n",S);
    return 0;
}
