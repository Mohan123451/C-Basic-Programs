#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num,val,result,flag=1;
    scanf("%d",&num);
    val = num;
    while (val!=0)
    {
        result = result*10 + val%10;
        val=val/10;
    }
    while (num!=0)
    {
        if (result%10 == num%10)
        {

            num=num/10;
        result = result/10;
            continue;
        }
        else
        {
             flag = 0;
        break;
        }
    }
    if (flag ==0)
    {
        printf("NOT PALINDROME");
    }
    else
    {
        printf("PALINDROME");
    }
    return 0;
}
