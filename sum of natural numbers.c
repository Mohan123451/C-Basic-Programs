#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int Range,sum=0;
    printf("Enter the range:");
    scanf("%d",&Range);
    for (int count=1; count<=Range; count++)
    {
        sum = sum + count;
    }
    printf("%d",sum);
    return 0;
}
