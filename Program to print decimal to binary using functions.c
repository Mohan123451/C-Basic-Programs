#include<stdio.h>
int binary(int a);
int main ()
{
    int num,output;
    scanf("%d",&num);
    output = binary(num);
    printf("%d",output);
}

int binary(int a)
{
    int result=0,binum;
    while(a!=0)
    {
        binum = a%2;
        result = (result*10) + binum;
        a=a/2;
    }

    return result;
}
