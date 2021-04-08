#include<stdio.h>
int main ()
{
    int digit,num,result=0,safe;
    scanf("%d",&num);
    safe = num;
    while (num!=0)
    {
        digit = num%10;
        result = result + (digit*digit*digit);
        num=num/10;
    }
    if (result == safe)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}
