#include<stdio.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int min1=min(min(num1,num2),num3);
    int min3=max(max(num1,num2),num3);
    int min2=(num1+num2+num3)-(min1+min3);
    printf("%d < %d < %d",min1,min2,min3);
    return 0;
}
