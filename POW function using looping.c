#include<stdio.h>
int main ()
{
    int base,power,result=1,i;
    scanf("%d %d",&base,&power);
    for (i=1; i<=power; i++)
    {
        result = result * base;
    }
    printf("%d",result);
    return 0;
}
