#include<stdio.h>
int main ()
{
    char c;
    scanf("%c",&c);
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("ALPHABET");
    }
    else if (c>=1 || c<10)
    {
        printf("NUMBER");
    }
    else
    {
        printf("SPECIAL CHARACTER");
    }
    return 0;
}
