#include<stdio.h>
int main()
{
    int i,FT[40],ST[40],FE[40];
    double TOTAL[40];
    for(i=0;i<40;i++)
    {
        printf("Number of %d (FT ST FE) : ",i+1);
        scanf("%d %d %d",&FT[i],&ST[i],&FE[i]);
        TOTAL[i] = (FE[i]*.5)+(FT[i]*.25)+(ST[i]*.25);
    }
    for(i=1;i<=40;i++)
    {
        printf("Roll : %d\tTotal marks : %0.0lf\n",i,TOTAL[i-1]);
    }
    return 0;
}
