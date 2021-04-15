#include<stdio.h>

int main()
{
    int num,otput;
    scanf("%d",&num);



    int sq1,sq2,digit,digit2,res2=0,safe,res1=0;
    sq1 = num*num;
    while(num!=0)
    {
        digit=num%10;
        res2 = (res2*10)+digit;
        num=num/10;
    }
    sq2 = res2*res2;
    safe= sq1;
    while(sq1!=0)
    {
        digit2 = sq1%10;
        res1 = (res1*10)+ digit2;
        sq1=sq1/10;
    }
    if (safe==res1)
    {
        printf("The number is Adam number");
    }
    else
    {
        printf("The number is not an Adam number");
    }
}
