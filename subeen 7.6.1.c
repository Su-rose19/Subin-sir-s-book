#include<stdio.h>
double pi=3.14;
void my_func(double pi){
    pi = 3.1416;
    return;
}
int main()
{
    printf("%lf\n",pi);
    my_func(pi);
    printf("%lf\n",pi);
    return 0;
}
