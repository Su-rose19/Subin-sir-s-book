#include <stdio.h>
int main()
{
    int n, sum=0;
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n", sum);
    return 0;
}
