#include<stdio.h>
int factor_sum(int num);
int main ()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int result1 = factor_sum(num1);
    int result2 = factor_sum(num2);
    if (result1 == num2 && result2 == num1)
    {
        printf("Amicable Pair");
    }
    else
    {
        printf("Not a Amicable Pair");
    }
    return 0;
}
int factor_sum(int num)
{
    int sum=0;
    for (int i=1; i<num; i++)
    {
        if (num%i ==0)
        {
            sum = sum+i;
        }
    }
    return sum;
}
