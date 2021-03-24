#include<stdio.h>
#include<stdlib.h>
// function Definition for addition of numbers
int multiplies(int a, int b)
{
    return (a*b);
}
int main()
{
   int num1,num2,answer=0;
   printf("Enter num1 and num2 values:");
   scanf("%d %d",&num1,&num2);
    answer = multiplies(num1,num2);
   printf("\n %d X %d = %d\n",num1,num2,answer);
   return 0;
}



