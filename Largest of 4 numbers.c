#include<stdio.h>
#define max(a,b)(a>b?a:b)
int main()
{
    int num1,num2,num3,num4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    int max1= max(max(max(num1,num2),num3),num4);
    printf("Largest is %d",max1);
    return 0;
}
