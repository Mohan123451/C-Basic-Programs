#include<stdio.h>
int main ()
{
    int num1,num2,i,j,sum1=0,sum2=0;
    scanf("%d %d",&num1,&num2);
    for (i=1; i<num1; i++)
    {
        if (num1%i ==0)
        {
            sum1 = sum1 + i;
        }
    }
    for (j=1; j<num2; j++)
    {
        if (num2%j == 0)
        {
            sum2 = sum2 + j;
        }
    }
    if ((sum1 == num2+1) || (sum2 == num1+1))
    {
        printf("Betrothed Number");
    }
    else
    {
        printf("Not a Betrothed Number");
    }
    return 0;
}
