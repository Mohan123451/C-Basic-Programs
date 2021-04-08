#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int anga,angb,angc,sum;
    printf("Enter angle a,b,c :");
    scanf("%d %d %d",&anga,&angb,&angc);
    sum = anga + angb + angc;
    if (sum == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
