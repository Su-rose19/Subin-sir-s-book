#include<stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);

    if(letter>='a' && letter<='z')
    {
        printf("The letter %c is LOWER CASE.\n",letter);
    }
    else if(letter>='A' && letter<='Z')
    {
        printf("The letter %c is UPPER CASE.\n",letter);
    }
    else
    {
        printf("%c is neither an UPPER CASE nor LOWER CASE.\n",letter);
    }
    return 0;
}
