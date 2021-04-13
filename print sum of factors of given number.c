#include<stdio.h>
int main ()
{
    int num,row,col,sum=0;
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        if (num%row==0)
        {
            sum = sum + row;
        }
    }
    printf("%d",sum);
    return 0;
}
