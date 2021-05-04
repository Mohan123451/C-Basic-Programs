#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1==num2 && num1==num3 && num2==num3)
    {
        printf("Equilateral");
    }
    else if (num1!=num2 && num1!=num3 && num2!=num3)
    {
        printf("Scalene");
    }
    else
    {
        printf("Isosceles");
    }
    return 0;
}
