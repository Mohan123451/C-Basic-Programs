#include<stdio.h>
int main ()
{
    int num1,num2,i,j,max,min;
    scanf("%d %d",&num1,&num2);
    max = num1>num2 ? num1:num2;
    min = num1+num2 - max;
    int safe = max;
    for (i=1; 1; i++)
    {
        if (safe%min == 0)
        {
            printf("%d",safe);
            break;
        }
        safe = i * max;
    }
    return 0;
}
