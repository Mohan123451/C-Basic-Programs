#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int lowercase, uppercase;
    scanf("%c",&c);
    lowercase = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (lowercase || uppercase)
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is consonent",c);
    }
    return 0;
}
