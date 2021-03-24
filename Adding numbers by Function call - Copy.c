#include<stdio.h>
#include<stdlib.h>
// function Definition for addition of numbers
int add(int a,int b)
{
    return (a+b); // return the sum of a and b values
}

int main ()

{
    int num1 = 12,num2 = 15,sum=0;
    sum = add(num1,num2); // "add" function will call the function Definition to perform the addition operation
    printf("\n sum of %d and %d  is : %d \n",num1,num2,sum);
}


