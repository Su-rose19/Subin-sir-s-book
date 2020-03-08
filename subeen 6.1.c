#include<stdio.h>
int main()
{
    double FE,FT,ST,T;
    scanf("%lf",&FT);
    scanf("%lf",&ST);
    scanf("%lf",&FE);

    T=(.25*FT)+(.25*ST)+(.5*FE);

    printf("Total_Number : %.0lf\n",T);
    return 0;
}
