#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int limit,sum=0,count=1;
    printf("Enter the range:");
    scanf("%d",&limit);
    while (count<=limit)
    {
        printf("%d ",count);
        sum = sum + count;
        count = count+2;
    }
    printf("\n");
    printf("The sum upto %d is %d",limit,sum);
    return 0;
}
