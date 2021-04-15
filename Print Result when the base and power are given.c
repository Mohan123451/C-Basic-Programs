#include<stdio.h>
int result(int a,int b);

int  main ()
{
    int num1,num2,output;
    scanf("%d %d",&num1,&num2);
    output = result (num1,num2);
    printf("%d",output);
    return 0;
}
int result(int a,int b)
{
    int final=1,i;
    for(i=1; i<=b; i++)
    {
        final = final * a;
    }
    return final;
}
