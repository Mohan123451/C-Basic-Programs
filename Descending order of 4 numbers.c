#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
int main ()
{
    int num1,num2,num3,num4,big1,big2,big3,big4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if (num1>=num2 && num1>=num3 && num1>num4)
    {
        big1=num1;
        big2=max(max(num2,num3),num4);
        big4=min(min(num2,num3),num4);
        big3=(num2+num3+num4)-(big2+big4);

    }
    else if (num2>=num1 && num2>=num3 && num2>num4)
    {
        big1=num2;
        big2=max(max(num3,num4),num1);
        big4=min(min(num3,num4),num1);
        big3=(num3+num4+num1)-(big2+big4);
    }
    else if (num3>=num1 && num3>=num2 && num3>num4)
    {
        big1=num3;
        big2=max(max(num4,num1),num2);
        big4=min(min(num4,num1),num2);
        big3=(num4+num1+num2)-(big4+big2);
    }
    else if (num4>num1 && num4>num2 && num4>num3)
    {
        big1=num4;
        big2=max(max(num1,num2),num3);
        big4=min(min(num1,num2),num3);
        big3=(num1+num2+num3)-(big2+big4);
    }
    printf("%d > %d > %d > %d",big1,big2,big3,big4);
    return 0;
}
