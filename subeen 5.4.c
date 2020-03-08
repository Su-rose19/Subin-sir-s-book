#include<stdio.h>
int main()
{
    double LA,IR,Yrs,TA,MA;
    printf("loan_amount = ");
    scanf("%lf",&LA);
    printf("interest_rate = ");
    scanf("%lf",&IR);
    printf("number_of_years = ");
    scanf("%lf",&Yrs);

    TA = (LA+(LA*IR*Yrs/100.00));
    MA = TA/( Yrs*12);

    printf("total_amount = %.2lf and monthly_amount = %.2lf\n",TA,MA);
    return 0;
}
