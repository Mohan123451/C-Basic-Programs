#include<stdio.h>
int main ()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for (i=0; i<num; i++)
    {
        sum = sum + i;

        if (sum == num)
        {
            printf("Triangular Number");
            break;
        }
    }
    if (num == i)
    {
        printf("Not a Triangular Number");
    }
    return 0;
}
