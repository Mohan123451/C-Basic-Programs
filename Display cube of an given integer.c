#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int Range,sum=0,cube;
    printf("Enter the range:");
    scanf("%d",&Range);
    for (int count=1; count<=Range; count++)
    {
        cube = count*count*count;
        printf("Number is %d and Cube is %d \n ",count,cube);
    }
    return 0;

}
