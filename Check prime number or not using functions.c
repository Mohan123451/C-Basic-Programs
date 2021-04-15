#include<stdio.h>
int count(int a);

int main()
{
    int num,result;
    scanf("%d",&num);
    result = count(num);
    if (result == 2)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
    return 0;
}
// function call
int count(int a)
{
    int i,count=0;
    for(i=1; i<=a; i++)
    {
        if (a%i == 0)
        {
            count++;
        }
    }
    return count;
}
