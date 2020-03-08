#include <stdio.h>
#include <conio.h>
void main()
{
    double num1,num2,value=0;
    char sign;

    printf("Enter 1st number: ");
    scanf("%lf",&num1);
    printf("Enter 2nd number: ");
    scanf("%lf",&num2);

    value=num1+num2;
    sign='+';
    printf("%lf %c %lf=%lf\n",num1,sign,num2,value);
    value=num1-num2;
    sign='-';
    printf("%lf %c %lf=%lf\n",num1,sign,num2,value);
    value=num1*num2;
    sign='*';
    printf("%lf %c %lf=%lf\n",num1,sign,num2,value);
    value=num1/num2;
    sign='/';
    printf("%lf %c %lf=%lf\n",num1,sign,num2,value);
}
