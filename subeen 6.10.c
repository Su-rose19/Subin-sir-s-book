#include<stdio.h>
int main()
{
    int i,j;
    int TOTAL[] = {6,7,4,6,9,7,6,2,4,3,4,1};
    int marks_count[11];

    for(i =0;i < 11; i++){
        marks_count[i] = 0;
    }
    for(i =0;i<12;i++)
    {
        marks_count[TOTAL[i]]++;

        for(j = 0; j<=10;j++)
        {
            printf("%d) %d  %d\t",j+1,TOTAL[i],marks_count[j]);
        }
        printf("\n");
    }
    return 0;
}
