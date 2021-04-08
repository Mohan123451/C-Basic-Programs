#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int cp,sp,profit;
    scanf("%d %d",&cp,&sp);
    if (sp > cp)
    {
        profit = sp - cp;
    }
    printf("%d",profit);
    return 0;
}
