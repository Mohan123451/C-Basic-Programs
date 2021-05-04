#include<stdio.h>
int main ()
{
    char c;
    scanf("%c",&c);
    if (c>='A' && c<='Z')
    {
        printf("UPPERCASE");
    }
    else if (c>='a' && c<='z')
    {
        printf("LOWERCASE");
    }
    return 0;
}
