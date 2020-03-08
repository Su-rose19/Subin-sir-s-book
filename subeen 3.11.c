#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is VOWEL.\n",ch);
    }
    else
    {
        printf("%c is CONSONANT.\n",ch);
    }
    return 0;
}
