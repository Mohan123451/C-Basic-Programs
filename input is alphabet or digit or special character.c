#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char name_ch;
    scanf("%c",&name_ch);
    if((name_ch>='a' && name_ch<='z') || (name_ch>='A' && name_ch<='Z'))
    {
        printf("This is Alphabet");
    }
    else if (name_ch>='1' && name_ch<='9')
    {
        printf("This is digit");
    }
    else
    {
        printf("This is special character");
    }
    return 0;
}


