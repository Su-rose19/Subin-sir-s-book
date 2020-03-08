#include<stdio.h>
int main()
{
    double x=0,y=0,A=x+y,B=x-y;

    printf("x+y = ");
    scanf("%lf",&A);        /*CAN ALSO WRITE:[ scanf("%lf", &x_plus_y);]*/

    printf("x-y = ");
    scanf("%lf",&B);        /*CAN ALSO WRITE:[ scanf("%lf", &x_minus_y);]*/

    x=(.5*(A+B));   y=(.5*(A-B));

    printf("x = %lf and y= %lf  ",x,y);

    return 0;
}
