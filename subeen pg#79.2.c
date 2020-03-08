#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y,A,B,C ;
    printf("equation 1: ");
    scanf("%lfx+%lfy=%lf",&a1,&b1,&c1);
    printf("equation 2: ");
    scanf("%lfx+%lfy=%lf",&a2,&b2,&c2);

    A = (b2*c1-b1*c2);
    B = (a2*c1-a1*c2);
    C = (a1*b2-a2*b1);

    if((int)C ==0)
    {
        printf("The value of x and y can not be determined.\n");
    }

    else{
    x=A/C;   y=B/C;

    printf("x = %.2lf and y = %.2lf \n",x,y);
    }

    return 0;
}
