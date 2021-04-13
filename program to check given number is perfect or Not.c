#include<stdio.h>
int main ()
{
    int num,row,sum=0;
    scanf("%d",&num);
    for (row=1; row<=num/2; row++)
    {
        if (num%row == 0)
        {
            sum = sum + row;
        }
    }
    if (sum == num)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
    return 0;

}
